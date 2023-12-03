#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/ConsoleApplication1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
        TEST_METHOD(TestIsNonDecreasing)
        {
            const int size = 5;
            int arr1[size] = { 1, 2, 3, 4, 5 };
            Assert::IsTrue(isNonDecreasing(arr1, size));

            int arr2[size] = { 5, 4, 3, 2, 1 };
            Assert::IsFalse(isNonDecreasing(arr2, size));
        }
        TEST_METHOD(TestIsNonDecreasingT)
        {
            const int sizeT = 5;
            int arr1[sizeT] = { 1, 2, 3, 4, 5 };
            Assert::IsTrue(isNonDecreasingT(arr1, sizeT));

            int arr2[sizeT] = { 5, 4, 3, 2, 1 };
            Assert::IsFalse(isNonDecreasingT(arr2, sizeT));
        }
	};
}
