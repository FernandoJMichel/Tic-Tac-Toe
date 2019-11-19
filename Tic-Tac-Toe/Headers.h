#pragma once
#include<vector>
#include<cstdlib>
using namespace std;

struct iaMove {
	iaMove() {};
	iaMove(int Score) : score(Score) {};
	int x;
	int y;
	int score;
};
