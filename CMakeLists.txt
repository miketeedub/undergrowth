cmake_minimum_required(VERSION 3.17)

project (UnderGrowth)
if(WIN32)
    set (SFML_DIR "./sfml/lib/cmake/SFML")
    set (SFML_STATIC_LIBRARIES TRUE)
elseif(APPLE)
    set (SFML_STATIC_LIBRARIES FALSE)
endif()
find_package(SFML 2.5 COMPONENTS audio graphics window system REQUIRED)

add_subdirectory(game)