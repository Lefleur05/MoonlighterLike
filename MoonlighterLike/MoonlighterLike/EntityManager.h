#pragma once
#include "Singleton.h"
#include "IManager.h"
#include "Entity.h"


class EntityManager : public Singleton<EntityManager>, public IManager<string,Entity>
{

public:
	vector<Drawable*> GetDrawables()
	{
		vector<Drawable*> _drawables;

		for (Entity* _entity : GetAllValues())
		{
			_drawables.push_back(_entity->GetShape());
		}
		return _drawables;
	}


public:
	void Update();
};

