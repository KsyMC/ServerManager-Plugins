#include "ExamplePlugin.h"
#include "servermanager/Server.h"
#include "servermanager/plugin/PluginManager.h"
#include "servermanager/event/player/PlayerJoinEvent.h"

ExamplePlugin::ExamplePlugin()
{

}

ExamplePlugin::~ExamplePlugin()
{

}

std::string ExamplePlugin::getPluginDescription() const
{
	return "ExamplePlugin/plugin.json";
}

void ExamplePlugin::onEnable()
{
	getServer()->getPluginManager()->registerEvent(EventType::PLAYER_JOIN, this, (void (Listener:: *)(Event &))&ExamplePlugin::onPlayerJoin, this);
}

void ExamplePlugin::onPlayerJoin(PlayerJoinEvent &event)
{
	SMPlayer *joinedPlayer = event.getPlayer();
	joinedPlayer->sendMessage("환영합니다!");
}