#include "Player.h"

// Constructor
Player::Player()
{
	velocity = sf::Vector2f(80,80);
}

// Destructor
Player::~Player()
{

}

// Functions
void Player::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Up))
	{
		move(0 * dt, -velocity.y*dt);
	}
	if (input->isKeyDown(sf::Keyboard::Down))
	{
		move(0 * dt, velocity.y * dt);
	}
	if (input->isKeyDown(sf::Keyboard::Left))
	{
		move(-velocity.x * dt, 0 * dt);
	}
	if (input->isKeyDown(sf::Keyboard::Right))
	{
		move(velocity.x * dt, 0 * dt);
	}

}