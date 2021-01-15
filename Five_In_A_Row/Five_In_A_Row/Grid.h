#pragma once
#ifndef GRID_H
#define GRID_H
#include <SFML/Graphics.hpp>
#include "xboardpiece.h"
class Grid {
public:
	Grid(int size) : grid_size(size) {
		tile_.setSize(sf::Vector2f(tile_size, tile_size));
		CreateTileMap();
	}


	sf::RectangleShape get_Tile() const;
	std::vector<std::vector<sf::RectangleShape>> get_Map() const;

	int size() const;


private:
	int grid_size;
	const float tile_size = 50.f;
	std::vector<std::vector<sf::RectangleShape>> tile_map;
	sf::RectangleShape tile_;
	void CreateTileMap();

};



#endif //! GRID_H