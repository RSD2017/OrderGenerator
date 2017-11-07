cmake_minimum_required (VERSION 2.6)
project (genOrders)

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}")

# add the executable
add_executable(genOrders ../src/main.cpp )
