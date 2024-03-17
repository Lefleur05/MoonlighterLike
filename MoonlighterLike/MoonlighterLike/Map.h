#pragma once
#include"IManagable.h"
#include"Grid.h"


class Map: public IManagable<string>
{
	Grid* grid;

public:
	Map(const string& _name);

public:
	Grid* GetGrid()
	{
		return grid;
	}

};

