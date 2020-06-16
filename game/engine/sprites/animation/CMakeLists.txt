


SET(SOURCE
	Animation.cpp
	TextureManager.cpp
	)

SET(HEADERS
	Animation.hpp
	TextureManager.hpp
	TextureDefs.hpp
	)

add_library(Animation STATIC
			${SOURCE}
			${HEADERS})


target_include_directories(Sprites PUBLIC ${CMAKE_SOURCE_DIR}/game/engine/sprites/characters)
target_include_directories(Sprites PUBLIC ${CMAKE_SOURCE_DIR}/game/engine/sprites)
add_subdirectory(sheets)
target_link_libraries (Animation sfml-graphics sfml-audio)
target_include_directories(Animation PUBLIC include)
