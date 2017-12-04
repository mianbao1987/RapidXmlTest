#include "stdafx.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/app.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(U1_Test_CreateXml)
		{
			// TODO: 在此输入测试代码
			for (int i=0; i<1000; ++i)
			{
				Assert::AreEqual(0, (int)CreateXml(), L"CreateXml Equal");
				//Assert::AreNotEqual(1, (int)CreateXml(), L"CreateXml NotEqual");
			}
			
			
		}
		TEST_METHOD(U1_Test_ReadAndChangeXml)
		{
			// TODO: 在此输入测试代码
			for (int i = 0; i < 1000; ++i)
			{
				Assert::AreEqual(0, (int)ReadAndChangeXml());
			}
			//Assert::AreNotEqual(1, (int)ReadAndChangeXml());

		}

	};
}