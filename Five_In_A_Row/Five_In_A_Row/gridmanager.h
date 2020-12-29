#pragma once
#ifndef GRIDMANAGER_H
#define GRIDMANAGER_H
#include "Grid.h"


class GridManager {
public:
	static void DrawMap(sf::RenderWindow& window, const Grid &g);
	static void DrawTile(sf::RenderWindow& window, const Grid &g);
};



#endif //! GRIDMANAGER_H
