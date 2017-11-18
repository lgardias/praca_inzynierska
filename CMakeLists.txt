cmake_minimum_required(VERSION 3.8)
project(praca_inzynierska)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Model.cpp Model.h Node.cpp Node.h Element.cpp Element.h)
add_executable(praca_inzynierska ${SOURCE_FILES} Model.cpp Model.h Node.cpp Node.h Element.cpp Element.h)