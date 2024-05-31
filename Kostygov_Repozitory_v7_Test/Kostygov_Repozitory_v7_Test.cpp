#include "pch.h"
#include "CppUnitTest.h"
#include "../Kostygov_Repozitory_v7/Kostygov_Repozitory_v7.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace KostygovRepozitoryv7Test
{
	TEST_CLASS(KostygovRepozitoryv7Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
		}
		TEST_METHOD(Chek_UserInput_Empty)
		{
			string str = "";
			bool expected = false;
			bool actual = User_Inpyt(str);
			Assert::AreEqual(expected, actual, L"Incorrect value area");

		}

		// тест на нецисловые значения
		TEST_METHOD(Chek_UserInput_Letter)
		{
			string str = "a";
			bool expected = false;
			bool actual = User_Inpyt(str);
			Assert::AreEqual(expected, actual, L"Incorrect value area");
		}
		// тест на отрицательные значения
		TEST_METHOD(Chek_UserInput_NegativeValue)
		{
			string str = "-5";
			bool expected = false;
			bool actual = User_Inpyt(str);
			Assert::AreEqual(expected, actual, L"Incorrect value area");

		}

	};
}
