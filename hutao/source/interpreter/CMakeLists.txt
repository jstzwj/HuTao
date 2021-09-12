
SET(HEADER_PATH ${PROJECT_SOURCE_DIR}/hutao/include/hutao/interpreter)
SET(SOURCE_PATH ${PROJECT_SOURCE_DIR}/hutao/source/interpreter)

file(GLOB_RECURSE HUTAO_INTERPRETER_HEADER ${HEADER_PATH}/*.h)
file(GLOB_RECURSE HUTAO_INTERPRETER_SOURCE ${SOURCE_PATH}/*.cpp)

include_directories(${PROJECT_SOURCE_DIR}/hutao/include)

add_executable()(hutao-interpreter STATIC ${HUTAO_INTERPRETER_HEADER} ${HUTAO_INTERPRETER_SOURCE})
set_target_properties(hutao-interpreter PROPERTIES LINKER_LANGUAGE C++)