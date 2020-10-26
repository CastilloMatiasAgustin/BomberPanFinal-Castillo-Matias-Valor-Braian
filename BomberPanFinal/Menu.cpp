#include "Menu.h"
#include "Escenario.h"
Controladora::Controladora(int ancho, int alto, std::string titulo)
{
	fps = 60;

	VentanaInicial = new RenderWindow(VideoMode(ancho, alto), titulo);

	VentanaInicial->setFramerateLimit(fps);

	gameloop();

}

void Controladora::dibujarventana()
{
	VentanaInicial->clear();
	VentanaInicial->draw(Escenario::dibujarBase());
	VentanaInicial->display(
	);

}

void Controladora::gameloop () 
{
	while (VentanaInicial->isOpen())
	{
		dibujarventana();
	}

}

