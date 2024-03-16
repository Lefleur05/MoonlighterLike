#pragma once

template<typename ID>
class IManagable
{
protected:
	bool toRemove;
	ID id;

public:
	void SetID(const ID& _id)
	{
		id = _id;
	}
	void SetToRemove(const bool& _toRemove)
	{
		toRemove = _toRemove;
	}
	ID GetID()const
	{
		return id;
	}
	bool IsToRemove()const
	{
		return toRemove;
	}

public:
	IManagable(const ID _id)
	{
		id = _id;
	}

private:
	virtual void Register() = 0;





};