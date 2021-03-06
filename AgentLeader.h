#pragma once
#include "Vehicle.h"
#include "MovingEntity.h"

class AgentLeader : public Vehicle
{

private:
	//the steering behavior class
	SteeringBehavior*     m_pSteering;




public:

	Vector2D m_vPos;

	AgentLeader(GameWorld* world,
		Vector2D  position,
		double    rotation,
		Vector2D  velocity,
		double    mass,
		double    max_force,
		double    max_speed,
		double    max_turn_rate,
		double    scale,
		Vehicle*		 agentSuivi);
	~AgentLeader();

	void        Update(double time_elapsed, std::vector<AgentLeader*> m_AgentLeaders);
};

