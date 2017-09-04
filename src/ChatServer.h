/*
 * PrashantChatServer.h
 *
 *  Created on: 26-Aug-2017
 *      Author: prashant
 */

#ifndef CHATSERVER_H_
#define CHATSERVER_H_



class ChatServer {
    int serverSock, clientSock;
    struct sockaddr_in serverAddr, clientAddr;
    char buff[256];
public:
	void startServer(int portNo=2002);
	void acceptConnection();
	ChatServer();
	~ChatServer();
};

#endif /* CHATSERVER_H_ */
