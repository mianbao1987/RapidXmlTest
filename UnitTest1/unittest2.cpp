#include "stdafx.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/app.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(U2_Test_CreateXml)
		{
			// TODO: 在此输入测试代码

			Assert::AreEqual(0, (int)CreateXml());

		}
		TEST_METHOD(U2_Test_ReadAndChangeXml)
		{
			// TODO: 在此输入测试代码

			Assert::AreEqual(0, (int)ReadAndChangeXml());

		}

	};
}