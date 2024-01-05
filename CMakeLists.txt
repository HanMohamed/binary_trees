cmake_minimum_required(VERSION 3.24)
project(binary_trees C)

set(CMAKE_C_STANDARD 11)

add_executable(0-binary_tree_node
        0-main.c
        binary_trees.h
        binary_tree_print.c
        0-binary_tree_node.c)
add_executable(1-binary_tree_insert_left
        1-main.c
        1-binary_tree_insert_left.c
        0-binary_tree_node.c
        binary_tree_print.c)