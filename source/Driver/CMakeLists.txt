
SET(HEADER_PATH ${PROJECT_SOURCE_DIR}/include/hutao/Driver)
SET(SOURCE_PATH ${PROJECT_SOURCE_DIR}/source/Driver)

file(GLOB_RECURSE HUTAO_DRIVER_HEADER ${HEADER_PATH}/*.h)
file(GLOB_RECURSE HUTAO_DRIVER_SOURCE ${SOURCE_PATH}/*.cpp)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(hutao-driver ${HUTAO_DRIVER_HEADER} ${HUTAO_DRIVER_SOURCE})
target_link_libraries(hutao-driver PRIVATE ${CONAN_LIBS})
target_link_libraries(hutao-driver PRIVATE hutao-basic)
target_link_libraries(hutao-driver PRIVATE hutao-lexer)
target_link_libraries(hutao-driver PRIVATE hutao-parser)
