#pragma once

#include "servermanager/plugin/PluginBase.h"
#include "servermanager/event/Listener.h"

class PlayerJoinEvent;

class ExamplePlugin : public PluginBase, public Listener
{
public:
	ExamplePlugin();
	~ExamplePlugin();

	void onEnable();
	void onPlayerJoin(PlayerJoinEvent &event);

	std::string getPluginDescription() const;
};