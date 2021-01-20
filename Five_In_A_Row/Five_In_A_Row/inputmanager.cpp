#include "inputmanager.h"

sf::Vector2i iManager::getMouseCoordinates(sf::RenderWindow& window)
{
	// return mouse position relative to window
	return sf::Mouse::getPosition(window);
}
