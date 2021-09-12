
SET(HEADER_PATH ${PROJECT_SOURCE_DIR}/hutao/include/hutao/interpreter)
SET(SOURCE_PATH ${PROJECT_SOURCE_DIR}/hutao/source/interpreter)

file(GLOB_RECURSE HUTAO_INTERPRETER_HEADER ${HEADER_PATH}/*.h)
file(GLOB_RECURSE HUTAO_INTERPRETER_SOURCE ${SOURCE_PATH}/*.cpp)

include_directories(${PROJECT_SOURCE_DIR}/hutao/include)

add_executable(hutao-interpreter ${HUTAO_INTERPRETER_HEADER} ${HUTAO_INTERPRETER_SOURCE})
target_link_libraries(hutao-interpreter PRIVATE hutao-common)
target_link_libraries(hutao-interpreter PRIVATE hutao-lexer)
target_link_libraries(hutao-interpreter PRIVATE hutao-parser)