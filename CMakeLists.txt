cmake_minimum_required(VERSION 3.8)
project(M_T)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp src/MT.cpp include/MT.h src/Cinta.cpp include/Cinta.h src/Estado.cpp include/Estado.h src/Transicion.cpp include/Transicion.h)
add_executable(M_T ${SOURCE_FILES})