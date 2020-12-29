#include "gridmanager.h"

void GridManager::DrawMap(sf::RenderWindow& window, const Grid &g)
{
	auto tile_map = g.get_Map();

	for (int x = 0; x < g.size(); x++) {
		for (int y = 0; y < g.size(); y++)
		{
			window.draw(tile_map[x][y]);
		}
	}
}

void GridManager::DrawTile(sf::RenderWindow& window, const Grid& g)
{
	window.draw(g.get_Tile());
}
