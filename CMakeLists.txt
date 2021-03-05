cmake_minimum_required(VERSION 3.12) # version can be different

project(SoftwareQA_Assignment2) #name of your project

add_subdirectory(googletest) # add googletest subdirectory

include_directories(googletest/include) # this is so we can #include <gtest/gtest.h>
include_directories(googletest/googletest/include)
include_directories(googletest/googletest/include/gtest)


add_executable(BMItest BMItest.cpp) # add this executable
add_executable(BMI BMI.cpp) # add this executable

ADD_LIBRARY(LibsModule
    BMI.cpp
    )

set(files BMI.cpp BMI.h)
target_link_libraries(LibsModule liblapack.a)
target_link_libraries(LibsModule gtest) # link google test to this executable