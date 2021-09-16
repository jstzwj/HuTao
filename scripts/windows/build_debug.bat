if not exist build (
    mkdir build
)
cd build
conan install .. --build=llvm-core --build=cmake -s build_type=Debug
cmake .. -G "Visual Studio 16 2019"
cmake --build . --config Debug
cd ../