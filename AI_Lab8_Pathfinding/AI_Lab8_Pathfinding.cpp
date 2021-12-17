// AI_Lab8_Pathfinding.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include <fstream>
#include <string>
std::random_device rand_dev;
std::mt19937 generator(rand_dev());
//std::default_random_engine generator;
std::uniform_real_distribution<double> distribution(0.0, 1.0);



double i;
int gridWidth;
int gridHeight;
int grid[6][4];
std::string gridText;
std::string gridWidthString;
std::string gridHeightString;

int main()
{
	i = distribution(generator);
	std::cout << i << std::endl;

	std::ifstream gridFileRead("Lab8TerrainFile1UTF_8.txtt");
	if (gridFileRead.is_open())
	{
		while (getline(gridFileRead, gridText))
		{
			std::cout << gridText << std::endl;
		}
	}
	else
	{
		std::cout << "File Unable To Open" << std::endl;
	}
	gridFileRead.close();

	gridWidthString = gridText[0];
	gridHeightString = gridText[2];
	gridWidth = stoi(gridWidthString);
	gridHeight = stoi(gridHeightString);

	gridDisplay(gridWidth, gridHeight, gridText);
}

int gridDisplay(int gridWidth, int gridHeight, std::string gridText)
{
	while (int w = 0; w < gridWidth; w++)
	{
		while (int h = 0; h < gridHeight; h++)
		{
			switch ()
				case 0:

				break;
				case 1:

				break;
				case 2:

				break;
				case 3:

				break;
				default:

				break;
			
		}
	}
}


