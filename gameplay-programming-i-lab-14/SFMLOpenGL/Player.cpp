#include "Player.h"

player::player()
{
	m_positionX = 100;
	m_positionY = 100;

	initPlayer();
}


void player::initPlayer()
{
	playerSquare.setPosition(m_positionX, m_positionY);
	playerSquare.setFillColor(sf::Color::Red);

}

void player::playerMove()
{

}

void player::updatePlayer()
{

}
