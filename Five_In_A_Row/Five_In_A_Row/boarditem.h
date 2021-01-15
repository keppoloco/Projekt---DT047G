#pragma once
#ifndef BOARDITEM_H
#define BOARDITEM_H
#include <SFML/Graphics.hpp>
#include <vector>

class boardItem {
public:
	boardItem(const sf::Vector2u &coords) : coords(coords) {}
	virtual void SetItem(std::vector<std::vector<sf::RectangleShape>> &grid) = 0;
	//virtual void SetCoords(const sf::Vector2u& coords);
	sf::Texture GetItem() const { return item; };
	sf::Vector2u getCoords() const {
		return coords;
	};
	void setSprite() { sprite.setTexture(item); }

private:
	sf::Texture item;
	sf::Sprite sprite;
	sf::Vector2u coords;
	std::vector<boardItem*> item_container;
	
};


#endif //! BOARDSYMBOL_H
