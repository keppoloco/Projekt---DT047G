#pragma once
#ifndef APPLICATION_H
#define APPLICATION_H
#include <SFML/Graphics.hpp>
class app {
public:
	app() {
		window.create(sf::VideoMode(w_width, w_height), "Five in a row");

		start();
	}
private:
	sf::RenderWindow window;
	const int w_width = 1280;
	const int w_height = 720;
	void start();
};


#endif //! APPLICATION_H
