#pragma once
#include "Map.h"
class Player
{
public:
	Player();
	void Init(Map* reference);
	void Play(int x, int y);
	~Player();

	Map* mp_map;
	bool m_myTurn;
};

