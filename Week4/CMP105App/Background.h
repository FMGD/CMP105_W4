#pragma once

#include "framework/GameObject.h"
class Background : public GameObject
{
private:
	sf::RenderWindow* window;
	sf::View myCamera;
	float rotAmount;

public:
	// Constructor
	Background();

	// Destructor
	~Background();

	// Functions
	void setWindow(sf::RenderWindow*);

	void handleInput(float);


};

