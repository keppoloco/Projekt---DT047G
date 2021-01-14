#include "xboardpiece.h"

void itemX::SetItem() const
{
	sf::Texture item = GetItem();
	item.loadFromFile(getItemName());
}
