#include "Game2D.h"
#include "PrimitivesGallery.h"
#include "TankExample.h"
#include "FaceExample.h"
#include "WalkingPerson.h"
#include "SolarSystem.h"

namespace jm
{
}

int main(void)
{
	jm::SolarSystem().run();
	//jm::Game2D().init("This is my digital canvas!", 1280, 960, false).run();
	//jm::RotatingStarExample().run();
	/*jm::PrimitivesGallery().run();
	jm::FaceExample().run();
	jm::WalkingPerson().run();
	jm::TankExample().init("Tank example", 1280, 960, false, 2).run();*/

	return 0;
}
