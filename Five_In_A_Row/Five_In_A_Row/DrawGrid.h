#pragma once
#ifndef DRAWGRID_H
#define DRAWGRID_H
#include <SFML/Graphics.hpp>


class Grid {
public:
	Grid(int size) {
		tile_size = size;
		//map_.setSize(sf::Vector2f(tile_size,tile_size));
	}
	void DrawTileMap();
	int size() const;


private:
	int tile_size;
	std::vector<std::vector<sf::RectangleShape>> tile_map;
	sf::RectangleShape map_;
};



#endif //! DRAWGRID_H