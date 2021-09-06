
SET(HEADER_PATH ${PROJECT_SOURCE_DIR}/hutao/include/hutao/vm)
SET(SOURCE_PATH ${PROJECT_SOURCE_DIR}/hutao/source/vm)

file(GLOB_RECURSE HUTAO_VM_HEADER ${HEADER_PATH}/*.h)
file(GLOB_RECURSE HUTAO_VM_SOURCE ${SOURCE_PATH}/*.cpp)

include_directories(${PROJECT_SOURCE_DIR}/hutao/include)

add_library(hutao-vm STATIC ${HUTAO_VM_HEADER} ${HUTAO_VM_SOURCE})
set_target_properties(hutao-vm PROPERTIES LINKER_LANGUAGE C++)