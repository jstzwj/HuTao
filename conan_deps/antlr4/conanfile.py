from conans import ConanFile, CMake, tools
import shutil
import os


class Antlr4Conan(ConanFile):
    name = "antlr4"
    version = "4.9.2"
    license = "The BSD License"
    author = "Ruisheng Wang <ruisheng.wang@outlook.com>"
    url = "https://github.com/ushering/conan-antlr"
    description = "C++ runtime support for ANTLR"
    settings = "os", "compiler", "build_type", "arch"
    _source_subfolder = "source_subfolder"

    def source(self):
        source_url = "https://www.antlr.org/download/antlr4-cpp-runtime-{}-source.zip".format(self.version)
        tools.get(source_url, sha256="838a2c804573f927c044e5f45a8feb297683a7047ab62dfac8ddc995498db11c", destination=self._source_subfolder)
        source_url2 = "https://www.antlr.org/download/antlr-{}-complete.jar".format(self.version)
        antlr_file_name = "antlr.jar"
        tools.download(source_url2, antlr_file_name)
        tools.check_sha256(antlr_file_name, "bb117b1476691dc2915a318efd36f8957c0ad93447fb1dac01107eb15fe137cd")
        shutil.move(antlr_file_name, self._source_subfolder)

    def _configure_cmake(self):
        cmake = CMake(self)
        cmake.definitions["WITH_LIBCXX"]="OFF"
        cmake.configure(source_folder=self._source_subfolder)
        return cmake

    def build(self):
        cmake = self._configure_cmake()
        cmake.build(target='antlr4_static')

    def package(self):
        self.copy("*.h", dst="include", src=os.path.join(self._source_subfolder, "runtime", "src"))
        self.copy("*.a", dst="lib", keep_path=False)
        self.copy("*.jar", dst="bin", keep_path=False)

    def package_info(self):
        self.cpp_info.libs = tools.collect_libs(self)