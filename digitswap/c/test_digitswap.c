#include "../../lib/test-framework/unity.h"
#include "libdigitswap.h"

void setUp(void) {}

void tearDown(void) {}

static void test_canary(void) { TEST_PASS(); }

static void test1(void) {
  char input[] = "11";
  char expected[] = "11";
  TEST_ASSERT_EQUAL_STRING(expected, digitswap(input));
}

static void test2(void) {
  char input[] = "42";
  char expected[] = "24";
  TEST_ASSERT_EQUAL_STRING(expected, digitswap(input));
}

int main(void) {
  UnityBegin("test_digitswap.c");
  RUN_TEST(test_canary);
  RUN_TEST(test1);
  RUN_TEST(test2);

  return UnityEnd();
}
