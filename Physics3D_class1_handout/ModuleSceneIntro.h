#pragma once
#include "Module.h"
#include "p2DynArray.h"
#include "Globals.h"

#define BOUNCER_TIME 200

struct PhysBody3D;
class Cube;
class Plane;
class Sphere;

class ModuleSceneIntro : public Module
{
public:
	ModuleSceneIntro(Application* app, bool start_enabled = true);
	~ModuleSceneIntro();

	bool Start();
	update_status Update();
	bool CleanUp();
	Plane* plane;
	Sphere* sphere;
};
