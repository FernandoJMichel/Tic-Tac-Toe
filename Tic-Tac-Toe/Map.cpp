#include "Map.h"

Map::Map()
{
	vector<int>fill = { 0,0,0 };
	for (int i = 0; i < 3; i++)
	{
		m_map.push_back(fill);
	}
}

int Map::endTurn()
{
	//Verificacion vertical
	for (int i = 0; i < 3; i++)
	{
		if (m_map[i][0] != 0 && m_map[i][0] == m_map[i][1] && m_map[i][1] == m_map[i][2])
		{
			return m_map[i][0];
		}
	}
	//Verificacion horizontal
	for (int i = 0; i < 3; i++)
	{
		if (m_map[0][i] != 0 && m_map[0][i] == m_map[1][i] && m_map[1][i] == m_map[2][i])
		{
			return m_map[0][i];
		}
	}
	//Verificacion diagonal izquierda a derecha
	if (m_map[0][0] != 0 && m_map[0][0] == m_map[1][1] && m_map[1][1] == m_map[2][2])
	{
		return m_map[0][0];
	}
	//Verificacion diagonal derecha a izquierda
	if (m_map[2][0] != 0 && m_map[2][0] == m_map[1][1] && m_map[1][1] == m_map[0][2])
	{
		return m_map[2][0];
	}

	if (tie())
	{
		return -1;
	}
	return 0;
}

void Map::draw()
{
}

bool Map::tie()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (m_map[i][j] == 0)
			{
				return false;
			}
		}
	}
	return true;
}


Map::~Map()
{
}
