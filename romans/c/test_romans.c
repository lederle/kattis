#include "test-framework/unity.h"
#include "libromans.h"

void setUp(void) {
}

void tearDown(void) {
}

static void test_romans(void) {
  TEST_ASSERT_EQUAL_INT(1088, romans(1.0));
}

static void test_romans_again(void) {
  TEST_ASSERT_EQUAL_INT(22046, romans(20.267));
}

int main(void) {
  UnityBegin("test_romans.c");
  RUN_TEST(test_romans);
  RUN_TEST(test_romans_again);
  return UnityEnd();
}
