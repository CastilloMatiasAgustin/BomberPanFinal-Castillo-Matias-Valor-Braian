#pragma once
#include "Menu.h"
#include "SFML/Graphics.hpp"
using namespace sf;
#define filas 15
#define columnas 17
class Escenario
{
public:
	Escenario() 
	{
		matriz = new int* [filas];
	}
	void generarMatriz();
	void dibujarBase();
	void dibujarMatriz();
	~Escenario();

protected:
	int** matriz;
	Texture* texturapasto;
	Sprite* spritepasto;
	Texture* texturasolido;
	Sprite* spritesolido;
	Texture* texturadestruible;
	Sprite* spritedestruible;


};
