#pragma once
#include <map>
#include <vector>

template <typename Key, typename Value>
class IManager
{
	Value* current;

protected:
	map<Key, Value*> allValues;

public:
	~IManager()
	{
		for (auto _pair : allValues)
		{
			delete _pair.second;
		}
	}

public:
	void Add(const key& _key, Value* _value)
	{
		if (Exist(_value))return;
		_value->SetID(_key);
		allValues[_key] = _value;
		current = _value;
	}

	void Remove(Value* _value)
	{
		if (!Exist(_value))return;
		_value->setRemove(true)
	}

	void Remove(const Key& _key)
	{
		if (!Exist(_key))return;
		allValues[_key]->setRemove(true)
	}

	void GareBageValues()
	{
		vector<Key> _keyToRemove;

		for (const auto& _pair: allValues)
		{
			if (_pair.second->IsToRemove())
			{
				_keyToRemove.push_back(_pair.first);
			}

			for (const Key& _key: _keyToRemove)
			{
				Value* _value = allValues[_key];
				allValues.erase(_key);
				delete _value;
			}
		}
	}


	Value* GetCurrent() const
	{
		return current;
	}

	void SetCurrent(const Key& _key)
	{
		if (!Exist(_key))
		{
			return;
		}
		current = allValues[_key];
	}


	Value* Get(const Key& _key)
	{
		if (!Exist(_key)) return nullptr;
		return allValues[_key];
	}

	map<Key, Value*> GetAll()const
	{
		return allValues;
	}

	vector<Value*> GetAllValues()const
	{
		vector<Value*> _values;
		for (const auto _pair: allValues)
		{
			_values.push_back(_pair.second);
		}
		return _values;
	}
	bool Exist(const Key& _key)const
	{
		return allValues.find(_key) != allValues.end();
	}
	bool Exist(Value* _value)const
	{
		return Exist(_value->GetID());
	}






	

};