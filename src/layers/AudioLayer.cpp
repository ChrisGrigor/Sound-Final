#include "AudioLayer.h"
#include "AudioEngine.h"

void AudioLayer::Initialize()
{
	// TODO: Init the sound engine and load the master bank
	AudioEngine& audioEngine = AudioEngine::GetInstance();

	audioEngine.Init();
	audioEngine.LoadBank("Master");

	audioEngine.LoadEvent("Music");
	audioEngine.SetEventPosition("Music", { 0,0,5 });
	audioEngine.PlayEvent("Music");

}

void AudioLayer::Shutdown()
{
	//TODO: Shutdown AudioEngine
	AudioEngine::GetInstance().Shutdown();
}

void AudioLayer::Update()
{
	//TODO: Update AudioEngine
	AudioEngine::GetInstance().Update();

}
