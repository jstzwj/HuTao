
SET(HEADER_PATH ${PROJECT_SOURCE_DIR}/hutao/include/hutao/compiler)
SET(SOURCE_PATH ${PROJECT_SOURCE_DIR}/hutao/source/compiler)

file(GLOB_RECURSE HUTAO_COMPILER_HEADER ${HEADER_PATH}/*.h)
file(GLOB_RECURSE HUTAO_COMPILER_SOURCE ${SOURCE_PATH}/*.cpp)


include_directories(${PROJECT_SOURCE_DIR}/hutao/include)

add_library(hutao-compiler STATIC ${HUTAO_COMPILER_HEADER} ${HUTAO_COMPILER_SOURCE})
set_target_properties(hutao-compiler PROPERTIES LINKER_LANGUAGE C++)