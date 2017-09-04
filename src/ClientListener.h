/*
 * ClientListener.h
 *
 *  Created on: 26-Aug-2017
 *      Author: prashant
 */

#ifndef CLIENTLISTENER_H_
#define CLIENTLISTENER_H_

#include <string>
#include "dataDefinition.h"

class ServerDispatcher;



class ClientListener {
	ServerDispatcher* p_serverDispatcher;
	ClientInfo m_clientInfo;
	std::string m_bufferReader;

public:
	ClientListener(const ClientInfo& clientInfo,ServerDispatcher* p_sererDispatcher);
	~ClientListener();
	void run();
};

#endif /* CLIENTLISTENER_H_ */
