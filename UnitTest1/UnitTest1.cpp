#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double p = 1;
			double q = 1;
			double k1 = k(p + sqrt(q), q - sqrt(p));
			double k2 = k(1, p + q);

			double c = pow(k1, 2) - k2;
			Assert::AreEqual(c, -2.04861, 1e-5);
		}
	};
}
