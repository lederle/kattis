#include "../../lib/test-framework/unity.h"
#include "libaddtwonumbers.h"

void setUp(void) {}

void tearDown(void) {}

static void test_canary(void) { TEST_PASS(); }

static void test_add_one_and_one(void) {
  int A = 1, B = 1;
  TEST_ASSERT_EQUAL_INT(addtwonumbers(A, B), 2);
}

int main(void) {
  UnityBegin("test_addtwonumbers.c");
  RUN_TEST(test_canary);
  RUN_TEST(test_add_one_and_one);

  return UnityEnd();
}
