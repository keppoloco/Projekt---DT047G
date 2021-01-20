#pragma once
#ifndef POSITIONCONVERTER_H
#define POSITIONCONVERTER_H
#include <SFML/Graphics.hpp>
class converter {
public:

	converter(const sf::Vector2i MousePosition) : wMousePos(MousePosition){}

	void posToCoords(sf::RenderWindow &window);

	void nCoordsToGridCoords(const sf::Vector2f& tile_size);

	sf::Vector2u getGridCoordinates() const;

private:
	sf::Vector2i wMousePos;
	sf::Vector2f nMousePos;
	sf::Vector2u gridPos;
};



#endif //! POSITIONCONVERTER_H