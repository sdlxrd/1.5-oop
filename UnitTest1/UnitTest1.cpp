#include "pch.h"
#include "CppUnitTest.h"
#include "c:\users\misha\source\repos\1.5oop\1.5oop\Number.h"
#include "c:\users\misha\source\repos\1.5oop\1.5oop\Number.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Number p, f, s;
			f.setNumber(36);
			s.setNumber(16);
			double result = p.substr(f, s);
			Assert::AreEqual(result, 20.0);
		}
	};
}
