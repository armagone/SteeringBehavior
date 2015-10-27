#pragma once

#include "Vehicle.h"

class AgentFollower : public Vehicle
{
public:
	int index;
	int indexLeader;
	AgentFollower(int);
	~AgentFollower();
};



