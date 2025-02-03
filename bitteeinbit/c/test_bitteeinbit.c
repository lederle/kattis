#include "../../lib/test-framework/unity.h"
#include "libbitteeinbit.h"

void setUp(void) {}

void tearDown(void) {}

static void test_canary(void) { TEST_PASS(); }

static void test1(void) {
  char *input = "1";
  char expected = '1';
  TEST_ASSERT_EQUAL_CHAR(expected, bitteeinbit(input));
}

static void test2(void) {
  char *input = "00000";
  char expected = '0';
  TEST_ASSERT_EQUAL_CHAR(expected, bitteeinbit(input));
}

static void test3(void) {
  char *input = "101";
  char expected = '1';
  TEST_ASSERT_EQUAL_CHAR(expected, bitteeinbit(input));
}

int main(void) {
  UnityBegin("test_bitteeinbit.c");
  RUN_TEST(test_canary);
  RUN_TEST(test1);
  RUN_TEST(test2);
  RUN_TEST(test3);

  return UnityEnd();
}
