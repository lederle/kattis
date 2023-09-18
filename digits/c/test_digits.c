#include "../../lib/test-framework/unity.h"
#include "libdigits.h"

void setUp(void) {}

void tearDown(void) {}

static void test_canary(void) { TEST_PASS(); }

static void test_one(void) {
  char arr[] = "1";
  TEST_ASSERT_EQUAL_INT(1, digits(arr));
}

static void test_forty_two(void) {
  char arr[] = "42";
  TEST_ASSERT_EQUAL_INT(3, digits(arr));
}

static void test_googol(void) {
  char arr[] =
      "100000000000000000000000000000000000000000000000000000000000000000000000"
      "00000000000000000000000000000";
  TEST_ASSERT_EQUAL_INT(4, digits(arr));
}

static void test_zero(void) {
  char arr[] = "0";
  TEST_ASSERT_EQUAL_INT(2, digits(arr));
}

int main(void) {
  UnityBegin("test_digits.c");
  RUN_TEST(test_canary);
  RUN_TEST(test_one);
  RUN_TEST(test_forty_two);
  RUN_TEST(test_googol);
  RUN_TEST(test_zero);

  return UnityEnd();
}
