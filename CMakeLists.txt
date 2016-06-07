cmake_minimum_required(VERSION 3.5)
project(cvrp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp matr.cpp  CVRPSolver_server.cpp  cvrp_constants.cpp  cvrp_types.cpp CVRPSolver.cpp)


include_directories(/home/veter/c_plus_plus_ortools/or-tools.Linux64/include)

include_directories(/home/veter/c_plus_plus_ortools/or-tools.Linux64/gen-cpp)


include_directories(/usr/local/include)

link_directories(/usr/local/lib)

link_directories(/home/veter/c_plus_plus_ortools/or-tools.Linux64/lib)





add_executable(cvrp ${SOURCE_FILES})


target_link_libraries (cvrp ortools thrift thriftnb event)
