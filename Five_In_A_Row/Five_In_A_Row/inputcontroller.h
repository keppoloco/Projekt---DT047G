#pragma once
#ifndef INPUTCONTROLLER_H
#define INPUTCONTROLLER_H
#include <SFML/Graphics.hpp>
#include <map>
#include <utility>
class iController {
public:

	iController() { }
	~iController() { }

	bool isViablePlacement(const int grid_size, const sf::Vector2u coords);

	bool isExistingCoordinates(const sf::Vector2u coords);

	bool isEmptyMap() const;

	void insertToMap(const sf::Vector2u coords);

private:

	std::map<std::pair<unsigned int, unsigned int>, bool> gridMap;

};




#endif //! INPUTCONTROLLER_H