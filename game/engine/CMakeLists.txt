



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

target_include_directories(Engine PUBLIC ${CMAKE_SOURCE_DIR}/game/animation)








