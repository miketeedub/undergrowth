


SET(SOURCE
	Animation.cpp
	)

SET(HEADERS
	Animation.hpp)

add_library(Animation STATIC
			${SOURCE}
			${HEADERS})

target_link_libraries (Animation sfml-graphics sfml-audio)
target_include_directories(Animation PUBLIC include)
