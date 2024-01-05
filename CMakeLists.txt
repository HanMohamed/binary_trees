cmake_minimum_required(VERSION 3.24)
project(binary_trees C)

set(CMAKE_C_STANDARD 11)

add_executable(0-binary_tree_node
        0-main.c binary_trees.h binary_tree_print.c 0-binary_tree_node.c)
