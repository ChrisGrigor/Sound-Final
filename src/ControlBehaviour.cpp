#include "ControlBehaviour.h"
#include "florp/app/Window.h"
#include "florp/app/Application.h"
#include "florp/game/Transform.h"
#include "florp/game/SceneManager.h"
#include "florp/app/Timing.h"

#define GLM_ENABLE_EXPERIMENTAL
#include <GLM/gtx/wrap.hpp>

template <typename T>
T wrap(const T& value, const T& min, const T& max) {
	//(((x - x_min) % (x_max - x_min)) + (x_max - x_min)) % (x_max - x_min) + x_min;
	T range = max - min;
	return glm::mod(glm::mod(value - min, range) + range, range )+ min;
}

void ControlBehaviour::Update(entt::entity entity) {
	using namespace florp::app;
	auto& transform = CurrentRegistry().get<florp::game::Transform>(entity);
	Window::Sptr window = Application::Get()->GetWindow();

	glm::vec3 translate = glm::vec3(0.0f);
	translate.z += 3.5f;

	translate *= Timing::DeltaTime * mySpeed;

	if (glm::length(translate) > 0) {
		translate = glm::mat3(transform.GetLocalTransform()) * translate;
		translate += transform.GetLocalPosition();
		transform.SetPosition(translate);
	}

	//Position Updates
	glm::vec3 positionGorilla = CurrentRegistry().get< florp::game::Transform>(entity).GetLocalPosition();
	MonkeyPosZ = positionGorilla.z;
	MonkeyPosX = positionGorilla.x;

	//Attacking the Monkey
	if (window->IsKeyDown(Key::One) && MonkeyPosX == -2) {
		//Testing the distance
		if (MonkeyPosZ >= -5) {
			MonkeyDist = true;
		}
	}
	if (window->IsKeyDown(Key::Two) && MonkeyPosX == 0) {
		//Testing the distance
		if (MonkeyPosZ >= -5) {
			MonkeyDist = true;
		}
	}
	if (window->IsKeyDown(Key::Three) && MonkeyPosX == 2) {
		//Testing the distance
		if (MonkeyPosZ >= -5) {
			MonkeyDist = true;
		}
	}

	//RNG Placement
	if (MonkeyDist == true) {
		rng = rand() % 3;
		auto start = std::chrono::system_clock::now();
		std::vector<int> v(100000, 42);
		auto end = std::chrono::system_clock::now();
		std::chrono::duration<double> diff = end - start;
		rng = diff.count() * 100000;

		//3 Lanes Positions
		if (rng % 3 == 0) { //Left
			transform.SetPosition(glm::vec3(-2, -0.5, -30));
		}
		else if (rng % 3 == 1) { //Middle
			transform.SetPosition(glm::vec3(0, -0.5, -30));
		}
		else if (rng % 3 == 2) { //Right
			transform.SetPosition(glm::vec3(2, -0.5, -30));

		}
		MonkeyDist = false;
	}
}

void ControlFastest::Update(entt::entity entity) {
	using namespace florp::app;
	auto& transform = CurrentRegistry().get<florp::game::Transform>(entity);
	Window::Sptr window = Application::Get()->GetWindow();

	glm::vec3 translate = glm::vec3(0.0f);
	translate.z += 4.0f;

	translate *= Timing::DeltaTime * mySpeed;

	if (glm::length(translate) > 0) {
		translate = glm::mat3(transform.GetLocalTransform()) * translate;
		translate += transform.GetLocalPosition();
		transform.SetPosition(translate);
	}

	//Position Updates
	glm::vec3 positionGorilla = CurrentRegistry().get< florp::game::Transform>(entity).GetLocalPosition();
	ChrisPosZ = positionGorilla.z;
	ChrisPosX = positionGorilla.x;

	//Attacking the Gorilla
	if (window->IsKeyDown(Key::One) && ChrisPosX == -2) {
		//Testing the distance
		if (ChrisPosZ >= -5) {
			ChrisDist = true;
		}
	}
	if (window->IsKeyDown(Key::Two) && ChrisPosX == 0) {
		//Testing the distance
		if (ChrisPosZ >= -5) {
			ChrisDist = true;
		}
	}
	if (window->IsKeyDown(Key::Three) && ChrisPosX == 2) {
		//Testing the distance
		if (ChrisPosZ >= -5) {
			ChrisDist = true;
		}
	}

	//RNG Placement
	if (ChrisDist == true) {
		rng = rand() % 3;
		auto start = std::chrono::system_clock::now();
		std::vector<int> v(100000, 42);
		auto end = std::chrono::system_clock::now();
		std::chrono::duration<double> diff = end - start;
		rng = diff.count() * 100000;

		//3 Lanes Positions
		if (rng % 3 == 0) { //Left
			transform.SetPosition(glm::vec3(-2, -0.5, -30));
		}
		else if (rng % 3 == 1) { //Middle
			transform.SetPosition(glm::vec3(0, -0.5, -30));
		}
		else if (rng % 3 == 2) { //Right
			transform.SetPosition(glm::vec3(2, -0.5, -30));
			
		}
		ChrisDist = false;
	}
}

void ControlFast::Update(entt::entity entity) {
	using namespace florp::app;
	auto& transform = CurrentRegistry().get<florp::game::Transform>(entity);
	Window::Sptr window = Application::Get()->GetWindow();

	glm::vec3 translate = glm::vec3(0.0f);
	translate.z += 3.0f;

	translate *= Timing::DeltaTime * mySpeed;

	if (glm::length(translate) > 0) {
		translate = glm::mat3(transform.GetLocalTransform()) * translate;
		translate += transform.GetLocalPosition();
		transform.SetPosition(translate);
	}

	//Position Updates
	glm::vec3 positionGorilla = CurrentRegistry().get< florp::game::Transform>(entity).GetLocalPosition();
	MonkeyPosZ = positionGorilla.z;
	MonkeyPosX = positionGorilla.x;

	//Attacking the Monkey
	if (window->IsKeyDown(Key::One) && MonkeyPosX == -2) {
		//Testing the distance
		if (MonkeyPosZ >= -5) {
			MonkeyDist = true;
		}
	}
	if (window->IsKeyDown(Key::Two) && MonkeyPosX == 0) {
		//Testing the distance
		if (MonkeyPosZ >= -5) {
			MonkeyDist = true;
		}
	}
	if (window->IsKeyDown(Key::Three) && MonkeyPosX == 2) {
		//Testing the distance
		if (MonkeyPosZ >= -5) {
			MonkeyDist = true;
		}
	}

	//RNG Placement
	if (MonkeyDist == true) {
		rng = rand() % 3;
		auto start = std::chrono::system_clock::now();
		std::vector<int> v(100000, 42);
		auto end = std::chrono::system_clock::now();
		std::chrono::duration<double> diff = end - start;
		rng = diff.count() * 100000;

		//3 Lanes Positions
		if (rng % 3 == 0) { //Left
			transform.SetPosition(glm::vec3(-2, -0.5, -30));
		}
		else if (rng % 3 == 1) { //Middle
			transform.SetPosition(glm::vec3(0, -0.5, -30));
		}
		else if (rng % 3 == 2) { //Right
			transform.SetPosition(glm::vec3(2, -0.5, -30));

		}
		MonkeyDist = false;
	}
}

void ControlMedium::Update(entt::entity entity) {
	using namespace florp::app;
	auto& transform = CurrentRegistry().get<florp::game::Transform>(entity);
	Window::Sptr window = Application::Get()->GetWindow();

	glm::vec3 translate = glm::vec3(0.0f);
	translate.z += 2.5f;

	translate *= Timing::DeltaTime * mySpeed;

	if (glm::length(translate) > 0) {
		translate = glm::mat3(transform.GetLocalTransform()) * translate;
		translate += transform.GetLocalPosition();
		transform.SetPosition(translate);
	}

	//Position Updates
	glm::vec3 positionGorilla = CurrentRegistry().get< florp::game::Transform>(entity).GetLocalPosition();
	MonkeyPosZ = positionGorilla.z;
	MonkeyPosX = positionGorilla.x;

	//Attacking the Monkey
	if (window->IsKeyDown(Key::One) && MonkeyPosX == -2) {
		//Testing the distance
		if (MonkeyPosZ >= -5) {
			MonkeyDist = true;
		}
	}
	if (window->IsKeyDown(Key::Two) && MonkeyPosX == 0) {
		//Testing the distance
		if (MonkeyPosZ >= -5) {
			MonkeyDist = true;
		}
	}
	if (window->IsKeyDown(Key::Three) && MonkeyPosX == 2) {
		//Testing the distance
		if (MonkeyPosZ >= -5) {
			MonkeyDist = true;
		}
	}

	//RNG Placement
	if (MonkeyDist == true) {
		rng = rand() % 3;
		auto start = std::chrono::system_clock::now();
		std::vector<int> v(100000, 42);
		auto end = std::chrono::system_clock::now();
		std::chrono::duration<double> diff = end - start;
		rng = diff.count() * 100000;

		//3 Lanes Positions
		if (rng % 3 == 0) { //Left
			transform.SetPosition(glm::vec3(-2, -0.5, -30));
		}
		else if (rng % 3 == 1) { //Middle
			transform.SetPosition(glm::vec3(0, -0.5, -30));
		}
		else if (rng % 3 == 2) { //Right
			transform.SetPosition(glm::vec3(2, -0.5, -30));

		}
		MonkeyDist = false;
	}
}

void ControlSlow::Update(entt::entity entity) {
	using namespace florp::app;
	auto& transform = CurrentRegistry().get<florp::game::Transform>(entity);
	Window::Sptr window = Application::Get()->GetWindow();

	glm::vec3 translate = glm::vec3(0.0f);
	translate.z += 2.0f;

	translate *= Timing::DeltaTime * mySpeed;

	if (glm::length(translate) > 0) {
		translate = glm::mat3(transform.GetLocalTransform()) * translate;
		translate += transform.GetLocalPosition();
		transform.SetPosition(translate);
	}

	//Position Updates
	glm::vec3 positionGorilla = CurrentRegistry().get< florp::game::Transform>(entity).GetLocalPosition();
	MonkeyPosZ = positionGorilla.z;
	MonkeyPosX = positionGorilla.x;

	//Attacking the Monkey
	if (window->IsKeyDown(Key::One) && MonkeyPosX == -2) {
		//Testing the distance
		if (MonkeyPosZ >= -5) {
			MonkeyDist = true;
		}
	}
	if (window->IsKeyDown(Key::Two) && MonkeyPosX == 0) {
		//Testing the distance
		if (MonkeyPosZ >= -5) {
			MonkeyDist = true;
		}
	}
	if (window->IsKeyDown(Key::Three) && MonkeyPosX == 2) {
		//Testing the distance
		if (MonkeyPosZ >= -5) {
			MonkeyDist = true;
		}
	}

	//RNG Placement
	if (MonkeyDist == true) {
		rng = rand() % 3;
		auto start = std::chrono::system_clock::now();
		std::vector<int> v(100000, 42);
		auto end = std::chrono::system_clock::now();
		std::chrono::duration<double> diff = end - start;
		rng = diff.count() * 100000;

		//3 Lanes Positions
		if (rng % 3 == 0) { //Left
			transform.SetPosition(glm::vec3(-2, -0.5, -30));
		}
		else if (rng % 3 == 1) { //Middle
			transform.SetPosition(glm::vec3(0, -0.5, -30));
		}
		else if (rng % 3 == 2) { //Right
			transform.SetPosition(glm::vec3(2, -0.5, -30));

		}
		MonkeyDist = false;
	}
}
