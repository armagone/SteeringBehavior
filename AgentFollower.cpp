#include "AgentFollower.h"


AgentFollower::AgentFollower(GameWorld* world, Vector2D position, double rotation, Vector2D velocity, double mass, double max_force, double max_speed, double max_turn_rate, double scale,
	Vehicle* agentSuivi) : Vehicle(world, position, rotation, velocity, mass, max_force, max_speed, max_turn_rate, scale, index){

}


AgentFollower::~AgentFollower()
{
}
