#include "../../lib/test-framework/unity.h"
#include "libameriskur.h"

void setUp(void) {}

void tearDown(void) {}

static void test_canary(void) { TEST_PASS(); }
static void test1() {
  double expected = 0.09144;
  TEST_ASSERT_DOUBLE_WITHIN(0.00001, expected, ameriskur(1));
}

static void test2() {
  double expected = 0.27432;
  TEST_ASSERT_DOUBLE_WITHIN(0.00001, expected, ameriskur(3));
}

static void test3() {
  double expected = 122.25527999999998;
  TEST_ASSERT_DOUBLE_WITHIN(0.00001, expected, ameriskur(1337));
}

int main(void) {
  UnityBegin("test_ameriskur.c");
  RUN_TEST(test_canary);
  RUN_TEST(test1);
  RUN_TEST(test2);
  RUN_TEST(test3);

  return UnityEnd();
}
