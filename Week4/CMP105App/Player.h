#pragma once
#include "Framework/GameObject.h"
class Player : public GameObject
{

private:

public:
	// Constructor
	Player();

	//Destructor
	~Player();

	//Functions
	void handleInput(float dt);

};

