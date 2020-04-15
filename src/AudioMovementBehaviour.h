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
