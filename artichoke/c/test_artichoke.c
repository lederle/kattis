#include "../../lib/test-framework/unity.h"
#include "libartichoke.h"

void setUp(void) {}

void tearDown(void) {}

static void test_canary(void) { TEST_PASS(); }

static void test_artichoke(void) {
  double expected = 104.855110477;
  TEST_ASSERT_DOUBLE_WITHIN(1e-6, expected, artichoke(42, 1, 23, 4, 8, 10));
}

static void test_artichoke_again(void) {
  double expected = 0.00;
  TEST_ASSERT_DOUBLE_WITHIN(1e-6, expected,
                            artichoke(100, 7, 615, 998, 801, 3));
}

static void test_artichoke_thrice(void) {
  double expected = 399.303813;
  TEST_ASSERT_DOUBLE_WITHIN(1e-6, expected,
                            artichoke(100, 432, 406, 867, 60, 1000));
}

int main(void) {
  UnityBegin("test_artichoke.c");
  RUN_TEST(test_canary);
  RUN_TEST(test_artichoke);
  RUN_TEST(test_artichoke_again);
  RUN_TEST(test_artichoke_thrice);

  return UnityEnd();
}
