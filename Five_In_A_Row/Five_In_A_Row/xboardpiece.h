#pragma once
#ifndef XBOARDPIECE_H
#define XBOARDPIECE_H
#include "boarditem.h"
class itemX : public boardItem {
public:
	itemX(const sf::Vector2u &coords) : boardItem(coords) { item_name = "board_item_x.png"; }
	std::string getItemName() const {
		return item_name;
	}
	void SetItem(std::vector<std::vector<sf::RectangleShape>>& grid) override;
	
private:
	std::string item_name;
};



#endif //! XBOARDPIECE_H
