#pragma once
#include "framework/GameObject.h"
class Cursor :
	public GameObject
{
private:
	sf::RenderWindow* window;

	void update_position();

public:
	// Constructor
	Cursor();

	// Destructor
	~Cursor();

	// Functions
	void update(float);

	void setWindow(sf::RenderWindow*);
};

