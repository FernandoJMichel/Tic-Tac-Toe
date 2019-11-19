#include "Player.h"



Player::Player()
{
}

void Player::Init(Map * reference)
{
	mp_map = reference;
}

void Player::Play(int x, int y)
{
	if (mp_map->m_map[x][y] == 0)
	{
		mp_map->m_map[x][y] = 1;
		m_myTurn = false;
	}
}


Player::~Player()
{
}
