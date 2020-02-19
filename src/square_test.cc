#include "src/square.h"

#include "gtest/gtest.h"

namespace {

TEST(SquareTest, Zero) { EXPECT_EQ(0, square(0)); }

TEST(SquareTest, NonZero) { EXPECT_EQ(25, square(5)); }

}  // namespace
