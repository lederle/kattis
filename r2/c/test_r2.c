#include "test-framework/unity.h"
#include "libr2.h"

void setUp(void) {
}

void tearDown(void) {
}

static void test_r2(void) {
  TEST_ASSERT_EQUAL_INT(19, r2(11, 15));
}

static void test_r2_again(void) {
  TEST_ASSERT_EQUAL_INT(2, r2(4, 3));
}

int main(void) {
  UnityBegin("test_r2.c");
  RUN_TEST(test_r2);
  RUN_TEST(test_r2_again);
  return UnityEnd();
}
