



SET(SOURCE
	animation/Animation.cpp
	animation/TextureManager.cpp
	GameLoop.cpp
	Game.cpp
	)

SET(HEADERS
	animation/Animation.hpp
	animation/TextureManager.hpp
	GameLoop.hpp
	Game.hpp
	)
add_library(Engine STATIC
			${SOURCE}
			${HEADERS})


add_subdirectory(entity)
add_subdirectory(animation)
target_link_libraries(Engine sfml-graphics sfml-audio World)
target_include_directories(Engine PUBLIC ${CMAKE_SOURCE_DIR}/game/engine/animation)
target_include_directories(Engine PUBLIC ${CMAKE_SOURCE_DIR}/game/engine/entity)








