/*
 * TestChatServer.h
 *
 *  Created on: 29-Aug-2017
 *      Author: prashant
 */

#ifndef TESTCHATSERVER_H_
#define TESTCHATSERVER_H_

#include <iostream>
#include <string>
#include <list>
#include <cppunit/TestCase.h>
#include <cppunit/TestFixture.h>
#include <cppunit/ui/text/TextTestRunner.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/XmlOutputter.h>
#include <netinet/in.h>

#include "../src/ChatServer.h"

using namespace CppUnit;
using namespace std;

class TestChatServer: public CppUnit::TestFixture
{
	ChatServer* m_chatServerObj;
    CPPUNIT_TEST_SUITE(TestChatServer);
     CPPUNIT_TEST(testAcceptConnection);
    //CPPUNIT_TEST(testMultiply);
    CPPUNIT_TEST_SUITE_END();
	public:
	void setUp(void);
	void tearDown(void);

	TestChatServer();
	virtual ~TestChatServer();
	protected:
	void testAcceptConnection();
};

#endif /* TESTCHATSERVER_H_ */

