
SET(HEADER_PATH ${PROJECT_SOURCE_DIR}/hutao/include/hutao/parser)
SET(SOURCE_PATH ${PROJECT_SOURCE_DIR}/hutao/source/parser)

file(GLOB_RECURSE HUTAO_PARSER_HEADER ${HEADER_PATH}/*.h)
file(GLOB_RECURSE HUTAO_PARSER_SOURCE ${SOURCE_PATH}/*.cpp)

include_directories(${PROJECT_SOURCE_DIR}/hutao/include)

add_library(hutao-parser STATIC ${HUTAO_PARSER_HEADER} ${HUTAO_PARSER_SOURCE})
set_target_properties(hutao-parser PROPERTIES LINKER_LANGUAGE C++)