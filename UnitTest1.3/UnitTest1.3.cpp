#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 1.3/Rational.h"
#include "../lab 1.3/Rational.cpp"
#define TESTING

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest13
{
	TEST_CLASS(UnitTest13)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Rational a;
			a.Seta(2);
			int test = a.Geta();
			Assert::AreEqual(test, 2);



		}
	};
}
