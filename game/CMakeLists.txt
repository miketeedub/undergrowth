

add_executable(UnderGrowth main.cpp)

add_subdirectory(engine)
target_link_libraries (UnderGrowth sfml-graphics sfml-audio Engine)




