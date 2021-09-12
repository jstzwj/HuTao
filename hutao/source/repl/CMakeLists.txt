

include_directories(${PROJECT_SOURCE_DIR}/hutao/include)

add_executable(hutao-repl main.cpp)

target_link_libraries(hutao-repl PRIVATE ${CONAN_LIBS})

target_link_libraries(hutao-repl PRIVATE hutao-common)
target_link_libraries(hutao-repl PRIVATE hutao-lexer)
target_link_libraries(hutao-repl PRIVATE hutao-parser)

target_link_libraries(hutao-repl PRIVATE fmt)