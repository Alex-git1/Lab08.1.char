#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab08.1(char)/Lab08.1(char).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char testStr1[] = "Hello!!!World!!!";
			Assert::AreEqual(2, Count(testStr1));
		}
	};
}
