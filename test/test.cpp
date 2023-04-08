#include "gtest/gtest.h"
#include <myClass.hpp>

TEST(test, myTest) {
  MyClass myClass;
  EXPECT_EQ(5, myClass.Add(2, 3));
}
