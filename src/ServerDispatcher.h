/*
 * ServerDispatcher.h
 *
 *  Created on: 26-Aug-2017
 *      Author: prashant
 */

#ifndef SERVERDISPATCHER_H_
#define SERVERDISPATCHER_H_

#include <vector>
#include <queue>
#include <string>
#include "dataDefinition.h"


class ServerDispatcher {
	std::vector<ClientInfo> m_clientList;  //list to keep all the client information
	std::queue<std::string> m_messageList; // message list
public:
	ServerDispatcher();
	~ServerDispatcher();
	void addClient(ClientInfo& clientInfo);
	void deleteClient(ClientInfo& clientInfo);
	void start();

};

#endif /* SERVERDISPATCHER_H_ */
