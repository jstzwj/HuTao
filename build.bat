if not exist build (
    mkdir build
)
cd build
conan install ..
cmake .. -G "Visual Studio 16 2019"
cmake --build . --config Debug
cd ../