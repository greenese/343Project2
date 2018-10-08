#include "SFML/Graphics.hpp"
#include <math.h>
#include "Monster.hpp"
#include <iostream>

Boss::Boss() {
	if (!spritesheet.loadFromFile("sprites/monster1sprites.png")) {
		std::cerr << "Can't load sprite." << std::endl;
		exit(EXIT_FAILURE);
	}
	texture.loadFromImage(spritesheet, sf::IntRect(0,0,31,34));
	sprite.setTexture(texture);
	sprite.setColor(sf::Color(50, 150, 250, 255));
	this->health = 25;
	this->movement_speed = 3;
}
