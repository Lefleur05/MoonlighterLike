#pragma once
#include "TextureData.h"
#include "Singleton.h"
#include "IManager.h"
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
using namespace sf;

class TextureManager: public Singleton<TextureManager>, public IManager<string, TextureData>
{

public:
	void Load(Shape* _shape, const string& _path, const bool _isRepeated = false, const bool _isSmooth = false);
	void Load(Sprite* _sprite, const string& _path, const bool _isRepeated = false, const bool _isSmooth = false);




};

