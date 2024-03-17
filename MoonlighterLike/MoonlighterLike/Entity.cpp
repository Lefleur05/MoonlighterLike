#include "Entity.h"
#include "EntityManager.h"

Entity::Entity(const string& _name, const Vector2f _size) : IManagable(_name)
{
	shape = new RectangleShape(_size);
	name = _name;
	Register();
}

void Entity::Register()
{
	EntityManager::GetInstance().Add(id, this);
}

void Entity::Update()
{
}

