
#ifndef CHARACTER_BASE_CLASS
#define CHARACTER_BASE_CLASS


#include <SFML/Graphics.hpp>




class EntityBase
{
	
public: 
	
	
	EntityBase()

	{};


	void createShape(float radius);
	void createShape(sf::Vector2f size);
	void test(void);
	std::unique_ptr<sf::Shape> shape_;

	
};





#endif