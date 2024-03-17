#pragma once
#include "Tile.h"
class Grid
{
	vector<vector<Tile*>> allTiles;
	Vector2f allTilesSize;
	Vector2f tileSize;

public:
	Grid();

public:
	vector<vector<Tile*>> GetAllTiles()
	{
		return allTiles;
	}

};

