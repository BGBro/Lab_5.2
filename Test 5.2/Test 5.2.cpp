#include "pch.h"
#include "CppUnitTest.h"
#include "../5.2/5.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test52
{
	TEST_CLASS(Test52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = A(3., 2, 2.);
			Assert::AreEqual(t, 9);
		}
	};
}
