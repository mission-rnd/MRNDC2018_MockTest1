#include "stdafx.h"
#include <stdlib.h>
#include "../src/Triplets.cpp"

using namespace System;
using namespace System::Text;
using namespace System::Collections::Generic;
using namespace Microsoft::VisualStudio::TestTools::UnitTesting;

int Compare(const void * a, const void * b) {
	return (*(int*)a - *(int*)b);
}

int Input[1000005];


namespace spec
{
	[TestClass]
	public ref class TripletsSpec
	{
	private:
		TestContext^ testContextInstance;

	public:
		/// <summary>
		///Gets or sets the test context which provides
		///information about and functionality for the current test run.
		///</summary>
		property Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ TestContext
		{
			Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ get()
			{
				return testContextInstance;
			}
			System::Void set(Microsoft::VisualStudio::TestTools::UnitTesting::TestContext^ value)
			{
				testContextInstance = value;
			}
		};

#pragma region Additional test attributes

#pragma endregion 

		
		[TestMethod, Timeout(1000)]
		void TripletsSamples()
		{
		}

	};
}
