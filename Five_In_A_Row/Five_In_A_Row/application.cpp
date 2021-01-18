#include "application.h"
void app::start()
{
	Grid g(10);
	while (window.isOpen())
	{
		
		
		sf::Event ev;
		while (window.pollEvent(ev))
		{
			handle.handle_event(ev,window);
		}

		window.clear();

		// Render game elements
		GridManager::DrawMap(window, g);

		window.display();
		/* search for events */
		// event = fetchEvent();
	}
}
