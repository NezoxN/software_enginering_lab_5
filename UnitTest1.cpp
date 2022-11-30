#include "pch.h"
#include "CppUnitTest.h"
#include "F:\University\Base_Homework\1 Курс\1 Семестр\Інженерія ПЗ\Лаби\ЛБ 3\Lab_3\Soft_Lab_3\Soft_Lab_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest_false) {

public:

	TEST_METHOD(TestMethod9_false)
	{
		double n = 6;
		double x = 2;
		double expected = 18984;

		double actual = calc(x, n);

		Assert::AreEqual(expected, actual);
	}
public:

	TEST_METHOD(TestMethod10_false)
	{
		double n = 4;
		double x = 1;
		double expected = 84;

		double actual = calc(x, n);

		Assert::AreEqual(expected, actual);
	}
public:

	TEST_METHOD(TestMethod11_false)
	{
		double n = 1;
		double x = 2;
		double expected = 1989;

		double actual = calc(x, n);

		Assert::AreEqual(expected, actual);
	}

	};
	TEST_CLASS(checkValidParams_Tests_false) {
public:
	TEST_METHOD(TestMethod12_false)
	{
		double h = 12;

		try
		{
			checkValidParams_h(h);
			Assert::Fail();
		}
		catch (...)
		{
			Assert::IsTrue(true);
		}
	}

public:
	TEST_METHOD(TestMethod13_false)
	{
		double n = 3;

		try
		{
			checkValidParams_n(n);
			Assert::IsTrue(true);
		}
		catch (...)
		{
			Assert::Fail();
		}
	}
	};
}