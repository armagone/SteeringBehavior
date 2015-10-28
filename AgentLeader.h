#pragma once
#include "Vehicle.h"
#include "MovingEntity.h"

class AgentLeader : public Vehicle
{
public:

	int indexLeader;
	AgentLeader(GameWorld* world,
		Vector2D position,
		double    rotation,
		Vector2D velocity,
		double    mass,
		double    max_force,
		double    max_speed,
		double    max_turn_rate,
		double    scale,
		int		 index);
	~AgentLeader();
};

