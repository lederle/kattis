#include "../../lib/test-framework/unity.h"
#include "libdragafra.h"

void setUp(void) {}

void tearDown(void) {}

static void test_canary(void) { TEST_PASS(); }
static void test1(void) {
  int input1 = 8;
  int input2 = 4;
  int expected = 4;
  TEST_ASSERT_EQUAL(expected, dragafra(input1, input2));
}
static void test2(void) {
  int input1 = 10;
  int input2 = 5;
  int expected = 5;
  TEST_ASSERT_EQUAL(expected, dragafra(input1, input2));
}
static void test3(void) {
  int input1 = 321;
  int input2 = 123;
  int expected = 198;
  TEST_ASSERT_EQUAL(expected, dragafra(input1, input2));
}

int main(void) {
  UnityBegin("test_dragafra.c");
  RUN_TEST(test_canary);
  RUN_TEST(test1);
  RUN_TEST(test2);
  RUN_TEST(test3);

  return UnityEnd();
}
