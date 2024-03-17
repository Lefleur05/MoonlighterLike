#include "Tile.h"

Tile::Tile(const Vector2f& _size, const Vector2f& _position, const string& _path)
{
	shape = new RectangleShape(_size);
	shape->setPosition(_position);
}
