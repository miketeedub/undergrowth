

SET(SOURCE
	EntityBase.cpp
	SpriteFactory.cpp
	SpriteEnum.hpp
	)

SET(HEADERS
	EntityBase.hpp
	SpriteFactory.hpp
	)

add_library(World STATIC
			${SOURCE}
			${HEADERS})


SET(SPRITE_SOURCE
	characters/MainCharacter.cpp
	)
SET(SPRITE_HEADERS
	characters/MainCharacter.hpp)

add_library(Sprites STATIC
			${SPRITE_SOURCE}
			${SPRITE_HEADERS})



target_link_libraries (World sfml-graphics sfml-audio Sprites)
target_include_directories(World PUBLIC ${CMAKE_SOURCE_DIR}/game/engine/animation)
target_include_directories(World PUBLIC ${CMAKE_SOURCE_DIR}/game/engine/world/characters)

target_link_libraries (Sprites World sfml-graphics sfml-audio)