#include "stdafx.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/app.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestCreateXml)
		{
			// TODO: �ڴ�������Դ���
			
			Assert::AreEqual(0,(int)CreateXml());
			
		}
		TEST_METHOD(TestReadAndChangeXml)
		{
			// TODO: �ڴ�������Դ���

			Assert::AreEqual(0, (int)ReadAndChangeXml());

		}

	};
}