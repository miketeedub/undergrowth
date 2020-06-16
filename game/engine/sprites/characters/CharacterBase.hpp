
#include "../EntityBase.hpp"



class CharacterBase : public EntityBase
{
public:
	CharacterBase()
		: EntityBase()
	{};
	CharacterBase(Textures::TextureValue* texture) :
		EntityBase(texture)
	{};

	bool movingUp_;
	bool movingDown_;
	bool movingRight_;
	bool movingLeft_;
};