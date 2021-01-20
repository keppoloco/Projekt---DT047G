#pragma once
#ifndef APPLICATION_H
#define APPLICATION_H
#include <SFML/Graphics.hpp>
#include "griddrawer.h"
#include "inputmanager.h"
#include "inputcontroller.h"
#include <iostream>
class app {
public:

	app() 
	{
		std::cout << "window created" << std::endl;
		window.create(sf::VideoMode(w_width, w_height), "Five in a row");
		start();
	}

private:
	sf::RenderWindow window;
	iManager handle;
	iController controller;
	const int w_width = 1280;
	const int w_height = 720;
	void start();
};


#endif //! APPLICATION_H
