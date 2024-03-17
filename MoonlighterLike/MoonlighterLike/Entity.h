#pragma once
#include"IManagable.h"
#include <SFML/Graphics.hpp>
#include <iostream>


using namespace std;
using namespace sf;

class Entity: public IManagable<string>
{
protected:
	Shape* shape;
	string name;

public:
	Shape* GetShape()
	{
		return shape;
	}

public:
	Entity(const string& _name, const Vector2f _size);

public:
		virtual void Register() override;

public:
	virtual void Update();
};

