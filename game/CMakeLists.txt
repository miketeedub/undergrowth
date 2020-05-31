

add_executable(UnderGrowth main.cpp)
add_subdirectory(animation)
add_subdirectory(sprites)
add_subdirectory(engine)

target_link_libraries(Engine sfml-graphics sfml-audio Animation)
target_link_libraries (UnderGrowth sfml-graphics sfml-audio Animation Engine)




