#pragma once
#include "Framework/GameObject.h"
#include <iostream>
class Enemy : public GameObject
{
private:
	sf::RenderWindow* window;
	void bouncing(float);

public:
	// Constructor
	Enemy();

	// Destructor
	~Enemy();

	// Functions
	void update(float);

	void setWindow(sf::RenderWindow*);
};

