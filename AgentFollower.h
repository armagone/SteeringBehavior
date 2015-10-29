#pragma once

#include "Vehicle.h"
#include "MovingEntity.h"
#include "AgentLeader.h"

class AgentFollower : public Vehicle
{
private:

	//the steering behavior class
	SteeringBehavior*     m_pSteering;
	AgentLeader* m_pAgentToFollow;
	Vector2D m_posToGoTo;

public:

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

	void        Update(double time_elapsed, std::vector<AgentFollower*> m_AgentFollowers);





};



