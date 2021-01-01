#pragma once
#ifndef GRID_H
#define GRID_H
#include <SFML/Graphics.hpp>


class Grid {
public:
	Grid(int size) : grid_size(size){
		tile_.setSize(sf::Vector2f(tile_size, tile_size));
	}

	void CreateTileMap();
	//void DrawMap(sf::RenderWindow& window);
	//void DrawTile(sf::RenderWindow& window);
	sf::RectangleShape get_Tile() const;
	std::vector<std::vector<sf::RectangleShape>> get_Map() const;
	//float CalcTileSize(const sf::RenderWindow& w, int size);
	int size() const;


private:
	int grid_size;
	const float tile_size = 40.f;
	std::vector<std::vector<sf::RectangleShape>> tile_map;
	sf::RectangleShape tile_;
	//tile_.setSize(sf::Vector2f(tile_size,tile_size));
};



#endif //! GRID_H