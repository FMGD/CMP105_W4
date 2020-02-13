#include "Cursor.h"

// Constructor
Cursor::Cursor()
{

}

// Destructor
Cursor::~Cursor()
{

}

// Functions
void Cursor::setWindow(sf::RenderWindow* hwnd)
{
	window = hwnd;
}

void Cursor::update(float dt)
{
	Cursor::update_position();
}

void Cursor::update_position()
{

	// Hide the window cursor
	window->setMouseCursorVisible(false);

	// Set position of the object where the mouse it is
	this->setPosition(input->getMouseX(), input->getMouseY()); 

}

