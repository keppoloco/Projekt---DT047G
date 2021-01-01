#pragma once
#ifndef BOARDITEM_H
#define BOARDITEM_H
#include <SFML/Graphics.hpp>

class boardItem {
public:
	virtual void SetSymbol() const = 0;
	sf::Texture GetSymbol();


private:
	sf::Sprite item;
	sf::Texture symbol;
};


#endif //! BOARDSYMBOL_H
