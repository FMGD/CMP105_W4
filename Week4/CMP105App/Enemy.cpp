#include "Enemy.h"

// Constructor
Enemy::Enemy()
{
	velocity = sf::Vector2f(100.f, 100.f);
}

// Destructor
Enemy::~Enemy()
{

}

//Functions

void Enemy::setWindow(sf::RenderWindow* hwnd)
{
	window = hwnd;
}

void Enemy::update(float dt)
{

	Enemy::bouncing(dt);

}


void Enemy::bouncing(float dt)
{
	//Get size of window
	sf::Vector2u window_size = window->getSize();

	//Get features enemy object
	sf::Vector2f enemy_position = getPosition();
	sf::Vector2f enemy_size = getSize();

	// Control x position
	if (enemy_position.x > window_size.x - enemy_size.x)
	{
		//Set speed
		enemy_position.x = window_size.x - enemy_size.x;
		velocity.x = -velocity.x;
		std::cout << "Enemy bouncing right\n";
	}
	else if (enemy_position.x < 0)
	{
		//Set speed
		enemy_position.x = 0;
		velocity.x = -velocity.x;
		std::cout << "Enemy bouncing left\n";
	}

	// Control y position
	if (enemy_position.y > window_size.y - enemy_size.y)
	{
		//Set speed
		enemy_position.y = window_size.y - enemy_size.y;
		velocity.y = -velocity.y;
		std::cout << "Enemy bouncing bottom\n";
	}
	else if (enemy_position.y < 0)
	{
		//Set speed
		enemy_position.y = 0;
		velocity.y = -velocity.y;
		std::cout << "Enemy bouncing top\n";
	}

	setPosition(enemy_position);

	// Update/move object
	move(velocity.x * dt, velocity.y * dt); //Speed with delta

}