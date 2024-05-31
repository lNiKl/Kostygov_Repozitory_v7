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
		// тест на правильное вычисление площади
		TEST_METHOD(TestMetTriangleleArea_5_108253returnedhod1)
		{
			int a = 5;

			double expected = 10.8253;//ожидаемый результат

			double actual = AreaTriangle(a);

			Assert::AreEqual(expected, actual, L"Incorrect value area");

		}
		// тест на правильное вычисление периметра
		TEST_METHOD(TestMetTrianglelePerimetr_5_15returnedhod1)
		{
			int a = 5;

			double expected = 15;//ожидаемый результат

			double actual = AreaTriangle(a);

			Assert::AreEqual(expected, actual, L"Incorrect value area");

		}
	};
}
