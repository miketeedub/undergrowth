
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
};