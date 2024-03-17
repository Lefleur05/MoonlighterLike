#include "FontManager.h"

void FontManager::Load(Text* _text, const string& _path, const bool _isSmooth)
{
	FontData* _fontData = Get(_path);

	if (!_fontData)
	{
		_fontData = new FontData(_path);
		if (!_fontData->loadFromFile(_path))
		{
			cerr << "La police d'�criture n'a pas �t� correctement charg�e !" << endl;
		}

		_fontData->setSmooth(_isSmooth);
	}

	_text->setFont(*_fontData);
}
