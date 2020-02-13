#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	backgroundTexture.loadFromFile("gfx/Level1_1.png"); // Providing a texture
	playerTexture.loadFromFile("gfx/Mushroom.png"); // Providing a texture
	enemyTexture.loadFromFile("gfx/Goomba.png"); // Providing a texture
	cursorTexture.loadFromFile("gfx/icon.png"); // Providing a texture

	//testSprite.setTexture(&texture); 
	//testSprite.setSize(sf::Vector2f(100, 100)); // Initial size
	//testSprite.setPosition(100, 100); // Initial Position

	backgroundObject.setInput(input);
	backgroundObject.setWindow(window);
	backgroundObject.setTexture(&backgroundTexture);
	backgroundObject.setSize(sf::Vector2f(11038, 675)); // Initial size
	gameObjects.push_back(&backgroundObject);

	playerObject.setInput(input);
	playerObject.setTexture(&playerTexture);
	playerObject.setSize(sf::Vector2f(100, 100)); // Initial size
	playerObject.setPosition(100, 100); // Initial Position
	gameObjects.push_back(&playerObject);


	enemyObject.setWindow(window);
	enemyObject.setTexture(&enemyTexture);
	enemyObject.setSize(sf::Vector2f(100, 100)); // Initial size
	enemyObject.setPosition(300, 300); // Initial Position
	gameObjects.push_back(&enemyObject);

	enemyObject2.setWindow(window);
	enemyObject2.setTexture(&enemyTexture);
	enemyObject2.setSize(sf::Vector2f(100, 100)); // Initial size
	enemyObject2.setPosition(500, 500); // Initial Position
	gameObjects.push_back(&enemyObject2);

	cursorObject.setInput(input);
	cursorObject.setWindow(window);
	cursorObject.setTexture(&cursorTexture);
	cursorObject.setSize(sf::Vector2f(40, 40)); // Initial size
	cursorObject.setPosition(500, 500); // Initial Position
	gameObjects.push_back(&cursorObject);
}

Level::~Level()
{


}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

	//Add handleInputs of objects created
	for (int i = 0; i < gameObjects.size(); ++i)
	{
		gameObjects[i]->handleInput(dt);
	}

}

// Update game objects
void Level::update(float dt)
{

	for (int i = 0; i < gameObjects.size(); ++i)
	{
		gameObjects[i]->update(dt);
	}

}

// Render level
void Level::render()
{
	beginDraw();

	//window->draw(testSprite); // Test example

	for (int i = 0; i < gameObjects.size(); ++i)
	{
		window->draw(*gameObjects[i]);
	}
	//window->draw(playerObject);
	//window->draw(enemyObject);
	//window->draw(enemyObject2);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}