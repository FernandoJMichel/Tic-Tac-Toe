#include "IA.h"

IA::IA()
{
}

void IA::Init(Map* reference)
{
	mp_map = reference;
}

iaMove IA::getBestMove(int player)
{
	//Base case
	int rv = mp_map->endTurn();
	if (rv == 2)
	{
		return iaMove(10);
	}
	else if (rv == 1)
	{
		return iaMove(-10);
	}
	else if (rv == -1)
	{
		return iaMove(0);
	}

	vector<iaMove>moves;
	//Look for best move
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (mp_map->m_map[x][y] == 0)
			{
				iaMove move;
				move.x = x;
				move.y = y;
				mp_map->m_map[x][y] = player;
				if (player == 2)
				{
					move.score = getBestMove(1).score;
				}
				else
				{
					move.score = getBestMove(2).score;
				}
				moves.push_back(move);
				mp_map->m_map[x][y] = 0;
			}
		}
	}
	//Pick best move
	int bestMove = 0;
	if (player == 2)
	{
		int bestScore = -100000;
		for (int i = 0; i < moves.size(); i++)
		{
			if (moves[i].score > bestScore)
			{
				bestMove = i;
				bestScore = moves[i].score;
			}
		}
	}
	else
	{
		int bestScore = 100000;
		for (int i = 0; i < moves.size(); i++)
		{
			if (moves[i].score < bestScore)
			{
				bestMove = i;
				bestScore = moves[i].score;
			}
		}
	}

	return moves[bestMove];
}

void IA::performMove()
{
	iaMove bestMove = getBestMove(2);
	mp_map->m_map[bestMove.x][bestMove.y] = 2;
}


IA::~IA()
{
}
