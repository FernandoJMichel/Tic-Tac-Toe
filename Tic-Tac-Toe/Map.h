#pragma once
#include "Headers.h"
class Map
{
public:
	Map();
	int endTurn();
	void draw();
	bool tie();
	~Map();

	vector<vector<int>> m_map;
};

