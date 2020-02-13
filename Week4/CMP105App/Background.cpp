#include "Background.h"

// Constructor
Background::Background()
{
	rotAmount = 1;
	velocity = sf::Vector2f(80,0);
}

// Destructor
Background::~Background()
{

}

// Functions
void Background::setWindow(sf::RenderWindow* hwnd)
{
	window = hwnd;
	myCamera = window->getView();

}

// Functions
void Background::handleInput(float dt)
{

	if (input->isKeyDown(sf::Keyboard::Left) && (myCamera.getCenter().x - myCamera.getSize().x/2) > 0)
	{
		//myCamera.rotate(rotAmount);
		myCamera.move(-velocity.x * dt, 0);
		//rotAmount *= -1.0f;
	}

	if (input->isKeyDown(sf::Keyboard::Right) && (myCamera.getCenter().x + myCamera.getSize().x / 2) < this->getSize().x )
	{
		myCamera.move(velocity.x * dt, 0);
	}
	window->setView(myCamera);

}