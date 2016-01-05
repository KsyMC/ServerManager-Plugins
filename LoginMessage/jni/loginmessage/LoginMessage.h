#pragma once

#include "servermanager/plugin/PluginBase.h"
#include "servermanager/event/Listener.h"

class PlayerJoinEvent;

class LoginMessage : public PluginBase, public Listener
{
public:
	void onEnable();

	void onPlayerJoin(PlayerJoinEvent &);

	std::string getPluginDescription() const;
};
