
add_subdirectory(entity)

SET(SOURCE
	entity/EntityBase.cpp
	)

SET(HEADERS
	entity/EntityBase.hpp
	)

add_library(World STATIC
			${SOURCE}
			${HEADERS})


target_link_libraries (World sfml-graphics sfml-audio)
target_include_directories(World PUBLIC ${CMAKE_SOURCE_DIR}/game/animation)
