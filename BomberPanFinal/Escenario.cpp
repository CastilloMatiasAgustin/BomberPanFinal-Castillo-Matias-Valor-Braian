#include "Escenario.h"
#include "Menu.h"
#include <ctime>
#include <cstdlib>

void Escenario::generarMatriz()
{
	srand(time(NULL()));  /// Generador de semilla nueva
	for (int f = 0; f < filas; f++)
	{
		matriz[f] = new int[columnas];
	}	

	for (int f = 0; f < filas; f++)
	{
		for (int c = 0; c < columnas; c++)
		{
			if (f == 0 || c == 0 || f == filas - 1 || c == columnas - 1)    /// Bloques Fijos exterior (solidos)=1
			{
				matriz[f][c] = 1;
			}
			else if (f % 2 == 0 && c % 2 == 0)                             /// Bloques Fijos interior (solidos)=1
			{
				matriz[f][c] = 1;
			}
			else if (f == 1 && (c == 1 || c == 2) || (c == 1 && f == 2)) /// Bloque de spawn (pasto) =0    
			{
				matriz[f][c] = 0;
			}
			else
			{
				matriz[f][c] = rand() % 2 + 2;                ///generacion aleatoria de bloques 2 (caminables) o 3 (destruible)
			}

			
		}
	}
}

void Escenario::dibujarBase()
{
	int x=0 , Y = 0;
	for (int f = 0; f < filas; f++)
	{
		for (int c = 0; c < columnas; c++)
		{
			if (matriz[f][c] == 0 || matriz[f][c] == 2)
			{
				
				texturapasto = new Texture;
				spritepasto = new Sprite;
				texturapasto->loadFromFile("pasto.png");
				spritepasto->setTexture(*texturapasto);
				
				
				x += 50;
			}
			Y += 50;
		}
	}

}

void Escenario::dibujarMatriz()
{


}