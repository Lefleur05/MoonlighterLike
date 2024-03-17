#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>


using namespace std;
using namespace sf;

class Tile
{
	Shape* shape;

public:
	Tile(const Vector2f& _size, const Vector2f& _position, const string& _path = "");

public:
	Shape* GetShape()
	{
		return shape;
	}
};

