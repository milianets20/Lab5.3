#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.03/Lab5.03.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab53test
{
	TEST_CLASS(lab53test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			p(1);
			t = p(-3);
			Assert::AreEqual(t, 1.14259, 0.01);
		}
	};
}
