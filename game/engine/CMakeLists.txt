



SET(SOURCE
	GameLoop.cpp
	Game.cpp
	)

SET(HEADERS
	GameLoop.hpp
	Game.hpp
	)
add_library(Engine STATIC
			${SOURCE}
			${HEADERS})


add_subdirectory(sprites)
target_link_libraries(Engine sfml-graphics sfml-audio Sprites)
target_include_directories(Engine PUBLIC ${CMAKE_SOURCE_DIR}/game/engine/sprites)
target_include_directories(Engine PUBLIC ${CMAKE_SOURCE_DIR}/game/engine/sprites/animation)








