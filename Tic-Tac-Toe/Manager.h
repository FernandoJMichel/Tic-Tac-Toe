#pragma once
#include "Headers.h"
#include "Map.h"
#include "IA.h"
#include "Player.h"
#include <imgui-SFML.h>
#include <imgui.h>

class Manager
{
public:

	Manager();
	void Init();
	~Manager();
	
	Map m_map;
	IA m_enemy;
	Player m_player;
};

