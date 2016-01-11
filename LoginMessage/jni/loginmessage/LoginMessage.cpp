#include "loginmessage/LoginMessage.h"
#include "servermanager/Server.h"
#include "servermanager/entity/SMPlayer.h"
#include "servermanager/level/SMLevel.h"
#include "servermanager/event/player/PlayerJoinEvent.h"
#include "servermanager/plugin/PluginManager.h"
#include "minecraftpe/item/ItemInstance.h"
#include "log.h"

std::string LoginMessage::getPluginDescription() const
{
	return "LoginMessage.json";
}

void LoginMessage::onEnable()
{
	getServer()->getPluginManager()->registerEvent(EventType::PLAYER_JOIN, this, (void (Listener:: *)(Event &))&LoginMessage::onPlayerJoin, this);
}

void LoginMessage::onPlayerJoin(PlayerJoinEvent &event)
{
	SMPlayer *joinedPlayer = event.getPlayer();

	for(SMPlayer *player : getServer()->getOnlinePlayers())
		if(player->isLocalPlayer() || getServer()->isOp(player->getName()))
			player->sendMessage("[LoginMessage] §e" + joinedPlayer->getDisplayName() + "'s IP: " + joinedPlayer->getAddress());
}
