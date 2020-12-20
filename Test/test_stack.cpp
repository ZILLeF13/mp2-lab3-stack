#include "../Stack/stack.h"

#include "gtest.h"

TEST(stack, can_create_bitfield_with_positive_length)
{
  ASSERT_NO_THROW(Stack<int> bf(3));
}