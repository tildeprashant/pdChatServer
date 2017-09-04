/*
 * ClientSender.h
 *
 *  Created on: 26-Aug-2017
 *      Author: prashant
 */

#ifndef CLIENTSENDER_H_
#define CLIENTSENDER_H_

#include <string>
#include "dataDefinition.h"
class ServerDispatcher;

class ClientSender {
	ServerDispatcher* p_serverDispatcher;
	ClientInfo m_clientInfo;
	std::string m_bufferWriter;
public:
	ClientSender(const ClientInfo& clientInfo,ServerDispatcher* p_sererDispatcher);
	~ClientSender();

	void run();
	void sendMessage(std::string message);
	const std::string getNextMessageFromQueue();
	void sendMessageToClient(const std::string& message);
};

#endif /* CLIENTSENDER_H_ */
