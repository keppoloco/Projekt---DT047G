#pragma once
#ifndef INPUTCONTROLLER_H
#define INPUTCONTROLLER_H
#include <SFML/Graphics.hpp>
#include <map>
class iController {
public:

	iController() { }
	~iController() { }

	bool isViablePlacement(const int grid_size, const sf::Vector2u coords);

	bool hasTextureSet(const sf::Vector2u coords);

	bool isEmptyMap() const;

	void insertToMap(const sf::Vector2u coords);

private:
	std::map<sf::Vector2u, bool> gridMap;

};




#endif //! INPUTCONTROLLER_H