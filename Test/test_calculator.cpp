#include "../Stack/calculator.h"
#include "../Stack/calculator.cpp"
#include "gtest.h"

TEST(calculator, ne_vikidivaet_throw)
{
	ASSERT_NO_THROW(TCalculator calc);
}
