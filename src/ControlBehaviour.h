#pragma once
#include "florp/app/ApplicationLayer.h"
#include "florp/game/IBehaviour.h"

#include <GLM/glm.hpp>

static int controlCount;
//Base Monkey Head
class ControlBehaviour : public florp::game::IBehaviour {
public:
	ControlBehaviour(const glm::vec3& speed) : IBehaviour(), mySpeed(speed), myYawPitch(glm::vec2(0.0f)) {};
	virtual ~ControlBehaviour() = default;

	virtual void Update(entt::entity entity) override;
	
	
	

	float MonkeyPosX;
	float MonkeyPosZ;
	bool MonkeyDist = false;
	int rng;
private:
	glm::vec3 mySpeed;
	glm::vec2 myYawPitch;
};

//Gorilla 4.0
class ControlFastest : public florp::game::IBehaviour {
public:
	ControlFastest(const glm::vec3& speed) : IBehaviour(), mySpeed(speed), myYawPitch(glm::vec2(0.0f)) {};
	virtual ~ControlFastest() = default;

	virtual void Update(entt::entity entity) override;


	float ChrisPosX;
	float ChrisPosZ;
	bool ChrisDist = false;
	int rng;
private:
	glm::vec3 mySpeed;
	glm::vec2 myYawPitch;
};

// 3.0
class ControlFast : public florp::game::IBehaviour {
public:
	ControlFast(const glm::vec3& speed) : IBehaviour(), mySpeed(speed), myYawPitch(glm::vec2(0.0f)) {};
	virtual ~ControlFast() = default;

	virtual void Update(entt::entity entity) override;

	float MonkeyPosX;
	float MonkeyPosZ;
	bool MonkeyDist = false;
	int rng;
private:
	glm::vec3 mySpeed;
	glm::vec2 myYawPitch;
};

// 2.5
class ControlMedium : public florp::game::IBehaviour {
public:
	ControlMedium(const glm::vec3& speed) : IBehaviour(), mySpeed(speed), myYawPitch(glm::vec2(0.0f)) {};
	virtual ~ControlMedium() = default;

	virtual void Update(entt::entity entity) override;

	float MonkeyPosX;
	float MonkeyPosZ;
	bool MonkeyDist = false;
	int rng;
private:
	glm::vec3 mySpeed;
	glm::vec2 myYawPitch;
};

// 2.0
class ControlSlow : public florp::game::IBehaviour {
public:
	ControlSlow(const glm::vec3& speed) : IBehaviour(), mySpeed(speed), myYawPitch(glm::vec2(0.0f)) {};
	virtual ~ControlSlow() = default;

	virtual void Update(entt::entity entity) override;

	float MonkeyPosX;
	float MonkeyPosZ;
	bool MonkeyDist = false;
	int rng;
private:
	glm::vec3 mySpeed;
	glm::vec2 myYawPitch;
};

static bool death;
class bomb : public florp::game::IBehaviour {
public:
	bomb(const glm::vec3& speed) : IBehaviour(), mySpeed(speed), myYawPitch(glm::vec2(0.0f)) {};
	virtual ~bomb() = default;

	virtual void Update(entt::entity entity) override;

	float MonkeyPosX;
	float MonkeyPosZ;
	bool MonkeyDist = false;
	int rng;
private:
	glm::vec3 mySpeed;
	glm::vec2 myYawPitch;
};