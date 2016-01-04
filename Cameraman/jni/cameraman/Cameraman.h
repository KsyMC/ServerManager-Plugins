#pragma once

#include "servermanager/plugin/PluginBase.h"
#include "servermanager/event/Listener.h"

class PlayerQuitEvent;
class DataPacketReceiveEvent;

class Cameraman : public PluginBase, public Listener
{
public:
	void onLoad();
	void onEnable();
	void onDisable();

	void onPlayerQuit(PlayerQuitEvent &event);
	void onDataPacketReceive(DataPacketReceiveEvent &event);

	bool sendHelpMessages(SMPlayer *sender, const std::string &param = "1");

	bool onCommand(SMPlayer *sender, Command *command, std::string &label, std::vector<std::string> &args);

	std::string getPluginDescription() const;
};
