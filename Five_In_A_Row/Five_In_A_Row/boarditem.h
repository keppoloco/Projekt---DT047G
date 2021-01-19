#pragma once
#ifndef BOARDITEM_H
#define BOARDITEM_H
#include <SFML/Graphics.hpp>
#include <vector>

class boardItem {
public:
	boardItem(const sf::Vector2u &coords) : coords(coords) {}

	sf::Texture GetItem() const { return item; }

	sf::Vector2u getCoords() const { return coords; }

	virtual void SetItem(std::vector<std::vector<sf::RectangleShape>>& grid) = 0;

	void setSprite() { sprite.setTexture(item); }

	void DrawSprite(sf::RenderWindow& window);

private:
	sf::Texture item;
	sf::Sprite sprite;
	sf::Vector2u coords;
	std::vector<boardItem*> item_container;
	
};


#endif //! BOARDSYMBOL_H
