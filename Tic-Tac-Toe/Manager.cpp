#include "Manager.h"

Manager::Manager()
{

}

void Manager::Init()
{
	m_enemy.Init(&m_map);
	m_player.Init(&m_map);
	sf::RenderWindow window();
	m_player.m_myTurn = true;
}

Manager::~Manager()
{
}
