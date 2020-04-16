#include "AudioLayer.h"
#include "AudioEngine.h"

void AudioLayer::Initialize()
{
	// TODO: Init the sound engine and load the master bank
	AudioEngine& audioEngine = AudioEngine::GetInstance();

	audioEngine.Init();
	audioEngine.LoadBank("Master");

	audioEngine.LoadEvent("Music");
	audioEngine.PlayEvent("Music");

	//Set up death and explosion sounds
	//This is constantly "playing" because there's a weird issue
	//Where if you load an event, it won't play unless you click the window
	audioEngine.LoadEvent("Death");
	audioEngine.PlayEvent("Death");
	audioEngine.SetEventPosition("Death", { 100,100,100 });
	audioEngine.LoadEvent("Explosion");
	audioEngine.SetEventPosition("Explosion", { 100,100,100 });
	audioEngine.PlayEvent("Explosion");
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
