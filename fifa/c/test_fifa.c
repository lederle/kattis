#include "../../lib/test-framework/unity.h"
#include "libfifa.h"

void setUp(void) {}

void tearDown(void) {}

static void test_canary(void) { TEST_PASS(); }

static void test1(void) {
  int total = 5;
  int yearly = 5;
  int expected = 2023;
  TEST_ASSERT_EQUAL_INT(expected, fifa(total, yearly));
}

static void test2(void) {
  int total = 21;
  int yearly = 3;
  int expected = 2029;
  TEST_ASSERT_EQUAL_INT(expected, fifa(total, yearly));
}

static void test_boundary(void) {
  int total = 2000000000;
  int yearly = 2;
  int expected = 1000002022;
  TEST_ASSERT_EQUAL_INT(expected, fifa(total, yearly));
}

int main(void) {
  UnityBegin("test_fifa.c");
  RUN_TEST(test_canary);
  RUN_TEST(test1);
  RUN_TEST(test2);
  RUN_TEST(test_boundary);

  return UnityEnd();
}
