#include "SFML/Graphics.hpp"
#include <math.h>
#include "Monster.hpp"
#include <iostream>

Boss::Boss() {
	if (!spritesheet.loadFromFile("sprites/monster1sprites.png")) {
		std::cerr << "Can't load sprite." << std::endl;
		exit(EXIT_FAILURE);
	}
	texture.loadFromImage(spritesheet, sf::IntRect(0,0,51,54));
	sprite.setTexture(texture);
	sprite.setColor(sf::Color::Orange);
	this->health = 50;
	this->movement_speed = 2;
}
