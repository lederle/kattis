#include "../../lib/test-framework/unity.h"
#include "libdecimaldeletion.h"

void setUp(void) {}

void tearDown(void) {}

static void test_canary(void) { TEST_PASS(); }

static void test1(void) {
  double input = 3.14;
  int expected = 3;
  TEST_ASSERT_EQUAL_INT(expected, decimaldeletion(input));
}

static void test2(void) {
  double input = 2.71;
  int expected = 3;
  TEST_ASSERT_EQUAL_INT(expected, decimaldeletion(input));
}

static void test3(void) {
  double input = 2.5;
  int expected = 3;
  TEST_ASSERT_EQUAL_INT(expected, decimaldeletion(input));
}

static void test4(void) {
  double input = 42;
  int expected = 42;
  TEST_ASSERT_EQUAL_INT(expected, decimaldeletion(input));
}

int main(void) {
  UnityBegin("test_decimaldeletion.c");
  RUN_TEST(test_canary);
  RUN_TEST(test1);
  RUN_TEST(test2);
  RUN_TEST(test3);
  RUN_TEST(test4);

  return UnityEnd();
}
