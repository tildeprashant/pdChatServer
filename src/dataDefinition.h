/*
 * dataDefinition.h
 *
 *  Created on: 26-Aug-2017
 *      Author: prashant
 */

#ifndef DATADEFINITION_H_
#define DATADEFINITION_H_

const int DEFAULT_PORT_NO=2002;
class ClientListener;
class ClientSender;

/* structure to hold client information */
struct ClientInfo
{
	int sockFd;                         /* socket file descriptor */
	ClientListener* clientListener;      /* client listener */
	ClientSender*   clientSender;        /* client sender */
};



#endif /* DATADEFINITION_H_ */
