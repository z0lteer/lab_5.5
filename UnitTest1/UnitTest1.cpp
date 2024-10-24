#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5.5/5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(0, FibonacciSum(0), L"Помилка для суми n = 0");
			Assert::AreEqual(1, FibonacciSum(1), L"Помилка для суми n = 1");
			Assert::AreEqual(2, FibonacciSum(2), L"Помилка для суми n = 2");
			Assert::AreEqual(4, FibonacciSum(3), L"Помилка для суми n = 3");
			Assert::AreEqual(7, FibonacciSum(4), L"Помилка для суми n = 4");
			Assert::AreEqual(12, FibonacciSum(5), L"Помилка для суми n = 5");
			Assert::AreEqual(20, FibonacciSum(6), L"Помилка для суми n = 6");
		}
	};
}
