#pragma once
#ifndef EVENTHANDLER_H
#define EVENTHANDLER_H
#include <iostream>
template <typename T>
class handler {
public:
	handler() = default;
	void handle_event(T input, sf::RenderWindow &w)
	{
		switch (input.type)
		{
			case sf::Window::close:
				std::cout << "Closing window." << '\n';
				w.close();
				break;
			
			case sf::Event::MouseButtonPressed:

		
		}
	}

private:
	
};




#endif //! EVENTHANDLER_H
