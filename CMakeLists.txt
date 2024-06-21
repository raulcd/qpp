cmake_minimum_required(VERSION 3.24)

project(Qpp)
find_package(Arrow REQUIRED)

add_executable(qpp src/main.cc src/datatype.cc)
target_link_libraries(qpp PRIVATE Arrow::arrow_shared)
