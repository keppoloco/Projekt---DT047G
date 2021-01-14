#pragma once
#ifndef BOARDITEM_H
#define BOARDITEM_H
#include <SFML/Graphics.hpp>

class boardItem {
public:
	virtual void SetItem() const = 0;
	sf::Texture GetItem() const { return item; };


private:
	sf::Texture item;
	std::vector<boardItem*> item_container;
};


#endif //! BOARDSYMBOL_H
