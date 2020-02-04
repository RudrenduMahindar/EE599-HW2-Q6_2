#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(PalinTest, HandlesTrue) {
  Solution solution;
  string s="Was it a car or a cat I saw?";
  bool actual=solution.StringPalinCheck(s);
  bool expected=true;
  EXPECT_EQ(expected, actual);
}

TEST(PalinTest, HandlesFalse) {
  Solution solution;
  string s="race  ca   ! ?";
  bool actual=solution.StringPalinCheck(s);
  bool expected=false;
  EXPECT_EQ(expected, actual);
}

/*TEST(LowerTest, HandlesNumberStringInput) {
  Solution solution;
  string s="599";
  solution.StringLower(s);
  string actual=s; 
  string expected="599";
  EXPECT_EQ(expected, actual);
}*/