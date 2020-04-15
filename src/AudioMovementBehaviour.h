#pragma once
#include "florp/game/IBehaviour.h"
#include <GLM/glm.hpp>
#include "florp/game/Transform.h"
#include "florp/game/SceneManager.h"
#include "florp/app/Timing.h"
#include "florp/app/Window.h"
#include "florp/app/Application.h"
#include "AudioEngine.h"


class DefaultMonkeyAudio : public florp::game::IBehaviour {
public:
	virtual void OnLoad(entt::entity entity) override {
		auto& transform = CurrentRegistry().get<florp::game::Transform>(entity);
		// TODO:: ooo ooo ahh ahh

		audioEngine.LoadEvent("Monkey");
		audioEngine.SetEventPosition("Monkey", { 100,100,100 });
		audioEngine.PlayEvent("Monkey");

		newPosition = transform.GetLocalPosition();
	}

	virtual void Update(entt::entity entity) override {
		using namespace florp::app;
		Window::Sptr window = Application::Get()->GetWindow();
		auto& transform = CurrentRegistry().get<florp::game::Transform>(entity);
		newPosition = transform.GetLocalPosition();

		audioEngine.SetEventPosition("Monkey", newPosition);
	}

private:
	glm::vec3 newPosition;
	AudioEngine& audioEngine = AudioEngine::GetInstance();
};

class AudioXavier : public florp::game::IBehaviour {
public:
	virtual void OnLoad(entt::entity entity) override {
		auto& transform = CurrentRegistry().get<florp::game::Transform>(entity);
		// TODO:: ooo ooo ahh ahh

		audioEngine.LoadEvent("Monkey(X)");
		audioEngine.SetEventPosition("Monkey(X)", { 100,100,100 });
		audioEngine.PlayEvent("Monkey(X)");

		newPosition = transform.GetLocalPosition();
	}

	virtual void Update(entt::entity entity) override {
		using namespace florp::app;
		Window::Sptr window = Application::Get()->GetWindow();
		auto& transform = CurrentRegistry().get<florp::game::Transform>(entity);
		newPosition = transform.GetLocalPosition();

		audioEngine.SetEventPosition("Monkey(X)", newPosition);
	}

private:
	glm::vec3 newPosition;
	AudioEngine &audioEngine = AudioEngine::GetInstance();
};

class AudioHao : public florp::game::IBehaviour {
public:
	virtual void OnLoad(entt::entity entity) override {
		auto& transform = CurrentRegistry().get<florp::game::Transform>(entity);
		// TODO:: ooo ooo ahh ahh

		audioEngine.LoadEvent("Monkey(H)");
		audioEngine.SetEventPosition("Monkey(H)", { 100,100,100 });
		audioEngine.PlayEvent("Monkey(H)");

		newPosition = transform.GetLocalPosition();
	}

	virtual void Update(entt::entity entity) override {
		using namespace florp::app;
		Window::Sptr window = Application::Get()->GetWindow();
		auto& transform = CurrentRegistry().get<florp::game::Transform>(entity);
		newPosition = transform.GetLocalPosition();

		audioEngine.SetEventPosition("Monkey(H)", newPosition);
	}

private:
	glm::vec3 newPosition;
	AudioEngine& audioEngine = AudioEngine::GetInstance();
};

class AudioChris : public florp::game::IBehaviour {
public:
	virtual void OnLoad(entt::entity entity) override {
		auto& transform = CurrentRegistry().get<florp::game::Transform>(entity);
		// TODO:: ooo ooo ahh ahh
		audioEngine.LoadEvent("Gorilla(C)");
		audioEngine.SetEventPosition("Gorilla(C)", { 100,100,100 });
		audioEngine.PlayEvent("Gorilla(C)");

		newPosition = transform.GetLocalPosition();
	}

	virtual void Update(entt::entity entity) override {
		using namespace florp::app;
		Window::Sptr window = Application::Get()->GetWindow();
		auto& transform = CurrentRegistry().get<florp::game::Transform>(entity);
		newPosition = transform.GetLocalPosition();

		audioEngine.SetEventPosition("Gorilla(C)", newPosition);
	}

private:
	glm::vec3 newPosition;
	AudioEngine& audioEngine = AudioEngine::GetInstance();
};

class AudioEric : public florp::game::IBehaviour {
public:
	virtual void OnLoad(entt::entity entity) override {
		auto& transform = CurrentRegistry().get<florp::game::Transform>(entity);
		// TODO:: ooo ooo ahh ahh
		audioEngine.LoadEvent("Monkey(E)");
		audioEngine.SetEventPosition("Monkey(E)", { 100,100,100 });
		audioEngine.PlayEvent("Monkey(E)");

		newPosition = transform.GetLocalPosition();
	}

	virtual void Update(entt::entity entity) override {
		using namespace florp::app;
		Window::Sptr window = Application::Get()->GetWindow();
		auto& transform = CurrentRegistry().get<florp::game::Transform>(entity);
		newPosition = transform.GetLocalPosition();

		audioEngine.SetEventPosition("Monkey(E)", newPosition);
	}

private:
	glm::vec3 newPosition;
	AudioEngine& audioEngine = AudioEngine::GetInstance();
};

class AudioIsaiah : public florp::game::IBehaviour {
public:
	virtual void OnLoad(entt::entity entity) override {
		auto& transform = CurrentRegistry().get<florp::game::Transform>(entity);
		// TODO:: ooo ooo ahh ahh

		audioEngine.LoadEvent("Monkey(I)");
		audioEngine.SetEventPosition("Monkey(I)", { 100,100,100 });
		audioEngine.PlayEvent("Monkey(I)");

		newPosition = transform.GetLocalPosition();
	}

	virtual void Update(entt::entity entity) override {
		using namespace florp::app;
		Window::Sptr window = Application::Get()->GetWindow();
		auto& transform = CurrentRegistry().get<florp::game::Transform>(entity);
		newPosition = transform.GetLocalPosition();

		audioEngine.SetEventPosition("Monkey(I)", newPosition);
	}

private:
	glm::vec3 newPosition;
	AudioEngine& audioEngine = AudioEngine::GetInstance();
};

class AudioBomb : public florp::game::IBehaviour {
public:
	virtual void OnLoad(entt::entity entity) override {
		auto& transform = CurrentRegistry().get<florp::game::Transform>(entity);
		// TODO:: ooo ooo ahh ahh

		audioEngine.LoadEvent("Bomb");
		audioEngine.SetEventPosition("Bomb", { 100,100,100 });
		audioEngine.PlayEvent("Bomb");

		newPosition = transform.GetLocalPosition();
	}

	virtual void Update(entt::entity entity) override {
		using namespace florp::app;
		Window::Sptr window = Application::Get()->GetWindow();
		auto& transform = CurrentRegistry().get<florp::game::Transform>(entity);
		newPosition = transform.GetLocalPosition();

		audioEngine.SetEventPosition("Bomb", newPosition);

	}

private:
	glm::vec3 newPosition;
	AudioEngine& audioEngine = AudioEngine::GetInstance();
};
