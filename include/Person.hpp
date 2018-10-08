#ifndef		__H_PERSON__
#define		__H_PERSON__

#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"

class Person {
	public:
		Person();
		void initialize();
		int getHealth();
		void setHealth(int health);
		sf::Sprite getSprite();
		void harm(int hp);
		void updatePosition(int x, int y);
		int getX();
		int getY();
	private:
		sf::Sprite sprite;
		sf::Texture texture;
		int health;
		sf::SoundBuffer punchBuffer;
		sf::Sound punch;
		int x;
		int y;
};

#endif
