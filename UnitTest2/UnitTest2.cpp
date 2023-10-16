#include "pch.h"
#include "CppUnitTest.h"
#include "/Users/User/source/repos/student/laba5.1/laba5.1/"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = sum(2, 3);
			Assert::AreEqual(t, 5);
		}

	};
}
