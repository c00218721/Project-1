#pragma once
#include <SFML\Graphics.hpp>




class player
{
public:

	player();



	void initPlayer();






	void playerMove();
	void updatePlayer();



private:


	int m_speed;
	int m_positionX;
	int m_positionY;
	
	sf::RectangleShape playerSquare;













};