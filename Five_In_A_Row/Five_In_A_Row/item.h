#pragma once
#ifndef ITEM_H
#define ITEM_H
#include "boarditem.h"


class item : public boardItem
{
public:
	item(const sf::Vector2u coordinates) : boardItem(coordinates) {}
	void SetItem(std::vector<std::vector<sf::RectangleShape>>& grid) override;
	std::string getItemName() const;
private:
	std::string item_name;
};






#endif //! ITEM_H