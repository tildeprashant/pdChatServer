/*
 * TestChatServer.cpp
 *
 *  Created on: 29-Aug-2017
 *      Author: prashant
 */

#include "../src_test/TestChatServer.h"

TestChatServer::TestChatServer() {
	// TODO Auto-generated constructor stub

}

TestChatServer::~TestChatServer() {
	// TODO Auto-generated destructor stub
}

void TestChatServer::setUp() {
	// TODO Auto-generated constructor stub
	m_chatServerObj = new ChatServer();

}

void TestChatServer::tearDown() {
	// TODO Auto-generated constructor stub
	delete m_chatServerObj;

}

void TestChatServer::testAcceptConnection()
{
	m_chatServerObj->acceptConnection();
	CPPUNIT_ASSERT(true);
}
