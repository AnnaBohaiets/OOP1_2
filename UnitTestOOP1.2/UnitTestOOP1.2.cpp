#include "pch.h"
#include "CppUnitTest.h"
#include "../OOPLab_1.2/List.h"
#include "../OOPLab_1.2/List.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestOOP12
{
	TEST_CLASS(UnitTestOOP12)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			List MyList;
			Assert::AreEqual(true, MyList.ListEmpty());
		}
	};
}
