
#include "MainCharacter.hpp"

void MainCharacter::updateAnimationDirection(MainCharacterMovementAnimation direction)
{
	switch (direction)
	{
	case Walk_Up:
		

		break;
	case Walk_Down:

		setAnimationIndex(0, 5, .1f);

		break;
	case Walk_Right:

		break;
	case Walk_Left:

		break;
	
	case Jump_Up:
		setAnimationIndex(31, 33, .1f);

			break;
	case Jump_Down:
		setAnimationIndex(6, 11, .1f);

		break;
	case Jump_Right:
		setAnimationIndex(6, 11, .1f);


		break;
	case Jump_Left:
	break;
	}
}
