

include_directories(${PROJECT_SOURCE_DIR}/hutao/include)

add_executable(hutao-driver main.cpp)
target_link_libraries(hutao-driver PRIVATE ${CONAN_LIBS})
target_link_libraries(hutao-driver PRIVATE hutao-common)
target_link_libraries(hutao-driver PRIVATE hutao-compiler)
