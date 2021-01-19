#pragma once
#ifndef INPUTMANAGER_H
#define INPUTMANAGER_H
#include <SFML/Graphics.hpp>
class iManager {
public:
	iManager() {}

	sf::Vector2i getMouseCoordinates(sf::RenderWindow &window);

	bool isViablePlacement(const int grid_size,const sf::Vector2u Coordinates);

private:

};




#endif //! INPUTMANAGER_H
