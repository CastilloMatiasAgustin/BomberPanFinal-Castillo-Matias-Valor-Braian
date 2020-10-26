#pragma once
#include "Escenario.h"
#include "SFML/Graphics.hpp"
using namespace sf;
class Controladora:public Escenario
{
public:
	Controladora(int ancho, int alto, std::string titulo);
	void gameloop();
	void dibujarventana();
protected:
	RenderWindow* VentanaInicial;
	int fps;

};


