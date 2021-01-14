#pragma once
#ifndef XBOARDPIECE_H
#define XBOARDPIECE_H
#include "boarditem.h"
class itemX : public boardItem {
	itemX() { item_name = "board_item_x.png"; }
	std::string getItemName() const {
		return item_name;
	}
	void SetItem() const override;
 

private:
	std::string item_name;
};



#endif //! XBOARDPIECE_H
