



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
target_link_libraries(Engine sfml-graphics sfml-audio Animation World)

target_include_directories(Engine PUBLIC ${CMAKE_SOURCE_DIR}/game/animation)
target_include_directories(Engine PUBLIC ${CMAKE_SOURCE_DIR}/game/world/entity)








