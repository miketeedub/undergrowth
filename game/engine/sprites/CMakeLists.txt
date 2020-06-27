



SET(SPRITE_SOURCE
	SpriteFactory.cpp
	EntityBase.cpp
	plants/PlantBase.cpp
	characters/MainCharacter.cpp
	characters/CharacterBase.cpp
	)

SET(SPRITE_HEADERS
	SpriteFactory.hpp
	EntityBase.hpp
	plants/PlantBase.hpp
	plants/SomePlant.hpp
	characters/MainCharacter.hpp
	characters/CharacterBase.hpp)

add_library(Sprites STATIC
			${SPRITE_SOURCE}
			${SPRITE_HEADERS})

add_subdirectory(animation)
target_include_directories(Sprites PUBLIC ${CMAKE_SOURCE_DIR}/game/engine/sprites/characters)
target_include_directories(Sprites PUBLIC ${CMAKE_SOURCE_DIR}/game/engine/sprites/plants)
target_include_directories(Sprites PUBLIC ${CMAKE_SOURCE_DIR}/game/engine/sprites/animation)
target_include_directories(Sprites PUBLIC ${CMAKE_SOURCE_DIR}/game/engine/sprites)
target_link_libraries (Sprites sfml-graphics sfml-audio Animation)
