cmake_minimum_required(VERSION 2.8.2)
project(GEN_Labo5)

enable_testing()

include_directories(src Tests)

set(CMAKE_CXX_STANDARD 14)

add_executable(GEN_Labo5
        src/Customer.h
        src/Customer.cpp
        src/Movie.h
        src/Movie.cpp
        src/Rental.h
        Tests/CustomerTest.cpp)

add_subdirectory(lib/googletest-release-1.8.1)
include_directories(lib/googletest-release-1.8.1/googletest/include)
include_directories(lib/googletest-release-1.8.1/googlemock/include)
target_link_libraries(GEN_Labo5 gtest gmock_main)
