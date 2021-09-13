
SET(HEADER_PATH ${PROJECT_SOURCE_DIR}/hutao/include/hutao/ast)
SET(SOURCE_PATH ${PROJECT_SOURCE_DIR}/hutao/source/ast)

file(GLOB_RECURSE HUTAO_AST_HEADER ${HEADER_PATH}/*.h)
file(GLOB_RECURSE HUTAO_AST_SOURCE ${SOURCE_PATH}/*.cpp)


include_directories(${PROJECT_SOURCE_DIR}/hutao/include)

add_library(hutao-ast STATIC ${HUTAO_AST_HEADER} ${HUTAO_AST_SOURCE})
set_target_properties(hutao-ast PROPERTIES LINKER_LANGUAGE C++)