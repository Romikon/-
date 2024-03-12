#include "pch.h"
#include "CppUnitTest.h"
#include "../абстрактні класи/Cordinates.cpp"
#include "../абстрактні класи/абстрактні класи.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestDirect)
		{
			Direct d;
			d.GetX(2);
			d.GetA(2);
			d.GetB(2);
			d.FindY();
			Assert::AreEqual(6, d.ReturnY());
		}
	};
}
