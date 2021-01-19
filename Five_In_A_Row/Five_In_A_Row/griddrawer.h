#pragma once
#ifndef GRIDDRAWER_H
#define GRIDDRAWER_H
#include "Grid.h"


class GridDrawer {
public:
	static void DrawMap(sf::RenderWindow& window, const Grid &g);
	static void DrawTile(sf::RenderWindow& window, const Grid &g);
};



#endif //! GRIDMANAGER_H
