
SET(HEADER_PATH ${PROJECT_SOURCE_DIR}/hutao/include/hutao/lexer)
SET(SOURCE_PATH ${PROJECT_SOURCE_DIR}/hutao/source/lexer)

file(GLOB_RECURSE HUTAO_LEXER_HEADER ${HEADER_PATH}/*.h)
file(GLOB_RECURSE HUTAO_LEXER_SOURCE ${SOURCE_PATH}/*.cpp)

include_directories(${PROJECT_SOURCE_DIR}/hutao/include)

add_library(hutao-lexer STATIC ${HUTAO_LEXER_HEADER} ${HUTAO_LEXER_SOURCE})
set_target_properties(hutao-lexer PROPERTIES LINKER_LANGUAGE C++)