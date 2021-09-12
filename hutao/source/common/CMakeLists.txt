
SET(HEADER_PATH ${PROJECT_SOURCE_DIR}/hutao/include/hutao/common)
SET(SOURCE_PATH ${PROJECT_SOURCE_DIR}/hutao/source/common)

file(GLOB_RECURSE HUTAO_COMMON_HEADER ${HEADER_PATH}/*.h)
file(GLOB_RECURSE HUTAO_COMMON_SOURCE ${SOURCE_PATH}/*.cpp)


include_directories(${PROJECT_SOURCE_DIR}/hutao/include)

add_library(hutao-common STATIC ${HUTAO_COMMON_HEADER} ${HUTAO_COMMON_SOURCE})
set_target_properties(hutao-common PROPERTIES LINKER_LANGUAGE C++)