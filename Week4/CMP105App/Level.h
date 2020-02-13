#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include "Player.h"
#include "Enemy.h"
#include "Cursor.h"
#include "Background.h"
#include <string.h>
#include <iostream>


class Level{
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	void handleInput(float dt);
	void update(float dt);
	void render();

private:
	// Default functions for rendering to the screen.
	void beginDraw();
	void endDraw();

	// Default variables for level class.
	sf::RenderWindow* window;
	Input* input;

	// Level objects
	GameObject testSprite;

	sf::Texture playerTexture;
	sf::Texture enemyTexture;
	sf::Texture cursorTexture;
	sf::Texture backgroundTexture;

	Background backgroundObject;

	Player playerObject;
	Enemy enemyObject;
	Enemy enemyObject2;

	Cursor cursorObject;

	std::vector<GameObject*> gameObjects;

};