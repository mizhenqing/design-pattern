cmake_minimum_required(VERSION 3.18)
project(simple-pattern)

#
set(CMAKE_CXX_COMPILER "c++")
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FALGS -g -Wall)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

#设置输出目录
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)



include_directories(

	)

link_directories()
link_libraries()

message("test")
#set(EXECUTABLE_OUTPUT_PATH ${PROJECT_ROOT_DIR}/bin)
#查找目录所有源文件，并存储在变量中
aux_source_directory(./ SOURCE_DIR)


#add_library(gdbtest SHARED ${SOURCE_DIR})
add_executable(${PROJECT_NAME} ${SOURCE_DIR})
