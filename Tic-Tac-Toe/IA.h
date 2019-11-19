#pragma once
#include"Headers.h"
#include"Map.h"

class IA
{
public:
	IA();
	void Init(Map* reference);
	iaMove getBestMove(int player);
	void performMove();
	~IA();
private:
	Map* mp_map;
};

