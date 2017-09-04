/*
 * PrashantChatServer.cpp
 *
 *  Created on: 26-Aug-2017
 *      Author: prashant
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include "ServerDispatcher.h"
#include "ChatServer.h"


ChatServer::ChatServer() {
	// TODO Auto-generated constructor stub
	//Init serverSock and start listen()'ing
	  serverSock = socket(AF_INET, SOCK_STREAM, 0);
	  memset(&serverAddr, 0, sizeof(sockaddr_in));
	  serverAddr.sin_family = AF_INET;
	  serverAddr.sin_addr.s_addr = INADDR_ANY;
	  serverAddr.sin_port = htons(DEFAULT_PORT_NO);

	  //Avoid bind error if the socket was not close()'d last time;
	  //setsockopt(serverSock,SOL_SOCKET,SO_REUSEADDR,&yes,sizeof(int));

	  if(bind(serverSock, (struct sockaddr *) &serverAddr, sizeof(sockaddr_in)) < 0)
	    std::cerr << "Unable to bind";

	  listen(serverSock, 5);
}

ChatServer::~ChatServer() {
	// TODO Auto-generated destructor stub
}


void ChatServer::acceptConnection()
{
	std::cout<<"connection accepted"<<std::endl;
}
