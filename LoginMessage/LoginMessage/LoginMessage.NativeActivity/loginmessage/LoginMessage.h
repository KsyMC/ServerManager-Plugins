#pragma once

#include "servermanager/plugin/PluginBase.h"
#include "servermanager/event/Listener.h"

class PlayerJoinEvent;

class LoginMessage : public PluginBase, public Listener
{
public:
	std::string getPluginDescription() const;

	void onEnable();
	void onPlayerJoin(PlayerJoinEvent &event);
};
