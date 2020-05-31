cmake_minimum_required(VERSION 3.17)

project (UnderGrowth)
set (SFML_STATIC_LIBRARIES TRUE)
set (SFML_DIR "./sfml/lib/cmake/SFML")

find_package(SFML 2.5 COMPONENTS audio graphics window system REQUIRED)

add_subdirectory(game)



