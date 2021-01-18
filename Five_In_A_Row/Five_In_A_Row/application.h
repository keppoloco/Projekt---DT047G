#pragma once
#ifndef APPLICATION_H
#define APPLICATION_H
#include <SFML/Graphics.hpp>
#include "eventhandler.h"
#include "gridmanager.h"
class app {
public:
	app() {
		std::cout << "window created" << std::endl;
		window.create(sf::VideoMode(w_width, w_height), "Five in a row");
		start();
	}

private:
	sf::RenderWindow window;
	handler<sf::Event> handle;
	const int w_width = 1280;
	const int w_height = 720;
	void start();
};


#endif //! APPLICATION_H
