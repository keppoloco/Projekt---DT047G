#pragma once
#ifndef GRID_H
#define GRID_H
#include <SFML/Graphics.hpp>


class Grid {
public:
	Grid(int size) 
	{
		tile_size = size;
		tile_.setSize(sf::Vector2f(tile_size,tile_size));
	}

	void CreateTileMap();
	//void DrawMap(sf::RenderWindow& window);
	//void DrawTile(sf::RenderWindow& window);
	sf::RectangleShape get_Tile() const;
	std::vector<std::vector<sf::RectangleShape>> get_Map() const;
	int size() const;


private:
	int tile_size;
	std::vector<std::vector<sf::RectangleShape>> tile_map;
	sf::RectangleShape tile_;
};



#endif //! GRID_H