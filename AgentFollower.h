#pragma once

#include "Vehicle.h"
#include "MovingEntity.h"

class AgentFollower : public Vehicle
{
public:
	int index;
	int indexLeader;
	AgentFollower(GameWorld* world,
		Vector2D position,
		double    rotation,
		Vector2D velocity,
		double    mass,
		double    max_force,
		double    max_speed,
		double    max_turn_rate,
		double    scale,
		Vehicle*		 agentSuivi);
	~AgentFollower();
};



