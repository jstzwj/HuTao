mkdir build && cd build
conan install .. --build=llvm-core --build=cmake -s build_type=Release
cmake .. -G "Unix Makefiles"
make
cd ../
