#ifndef		__H__MONSTER__
#define		__H__MONSTER__

#include "SFML/Graphics.hpp"
#include <string>
class Monster {
	protected:
		int health;
		int x;
		int y;
		sf::Image spritesheet;
		sf::Texture texture;
		sf::Sprite sprite;
		void move(int x, int y);
		void nextFrame();
		int movement_speed;
		int attackPower;
		bool followPlayer;
		sf::Clock clock;
		float refreshRate;
		int width;
		int height;
		int currentFrame;
	public:
		Monster();
		int getHealth();
		void harm(int amount);
		void updatePosition(int x, int y);
		sf::Sprite getSprite();
		int getDamage();
};

//Extensions of Monster class
class Orc: public Monster {
	private:

	public:
		Orc();
};

class Specter: public Monster {
	private:

	public:
		Specter();
};

class Boss: public Monster {
	private:

	public:
		Boss();
};
#endif
