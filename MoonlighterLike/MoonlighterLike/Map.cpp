#include "Map.h"

Map::Map(const string& _name) : IManagable(_name)
{
	grid = new Grid();
}
