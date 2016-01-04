#include "cameraman/Cameraman.h"
#include "servermanager/Server.h"
#include "servermanager/entity/SMPlayer.h"
#include "servermanager/plugin/PluginManager.h"
#include "servermanager/event/player/PlayerQuitEvent.h"
#include "servermanager/util/SMUtil.h"
#include "log.h"

/* ====================================================================================================================== *
 *                                                    EVENT LISTENERS                                                     *
 * ====================================================================================================================== */

void Cameraman::onLoad()
{

}

void Cameraman::onEnable()
{
	getServer()->getPluginManager()->registerEvent(EventType::PLAYER_QUIT, this, (void (Listener:: *)(Event &))&Cameraman::onPlayerQuit, this);
}

void Cameraman::onDisable()
{

}

void Cameraman::onPlayerQuit(PlayerQuitEvent &event)
{

}

void Cameraman::onDataPacketReceive(DataPacketReceiveEvent &event)
{

}

/* ====================================================================================================================== *
 *                                                   GETTERS AND SETTERS                                                  *
 * ====================================================================================================================== */



/* ====================================================================================================================== *
 *                                                     HELPER METHODS                                                     *
 * ====================================================================================================================== */


/* ====================================================================================================================== *
 *                                                     MESSAGE SENDERS                                                    *
 * ====================================================================================================================== */

bool Cameraman::sendHelpMessages(SMPlayer *sender, const std::string &param)
{
	std::string newParam = SMUtil::toLower(param);

	if(param.empty())
	{

	}
}

/* ====================================================================================================================== *
 *                                                    COMMAND HANDLERS                                                    *
 * ====================================================================================================================== */
bool Cameraman::onCommand(SMPlayer *sender, Command *command, std::string &label, std::vector<std::string> &args)
{
	/*if(SMUtil::toString(args[0]))
	{
		if((int)args.size() > 1)
			return;
	}*/

	return false;
}

std::string Cameraman::getPluginDescription() const
{
	return "Cameraman/plugin.json";
}
