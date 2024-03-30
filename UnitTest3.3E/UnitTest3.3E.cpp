#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP3.3E/Date.h"
#include "../OOP3.3E/Date.cpp"
#include "../OOP3.3E/Triad.h"
#include "../OOP3.3E/Triad.cpp"
#include "../OOP3.3E/Object.cpp"
#include "../OOP3.3E/Object.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33E
{
	TEST_CLASS(UnitTest33E)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad triad1(1, 1, 2023);
			Triad triad2(2, 1, 2023);
			Date date1(triad1);
			Date date2(triad2);

			Assert::IsTrue(date1 < date2);
		}
	};
}
