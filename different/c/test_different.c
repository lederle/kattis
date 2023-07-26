#include "test-framework/unity.h"
#include "libdifferent.h"

void setUp(void) {
}

void tearDown(void) {

}

static void test_different(void) {
  TEST_ASSERT_EQUAL_INT(2, different(10, 12));
}

static void test_different_again(void) {
  TEST_ASSERT_EQUAL_INT(71293781685339, different(71293781758123, 72784));
}

static void test_different_thrice(void) {
  TEST_ASSERT_EQUAL_INT(12345677654320, different(1, 12345677654321));
}

int main(void) {
  UnityBegin("test_different.c");
  RUN_TEST(test_different);
  RUN_TEST(test_different_again);
  RUN_TEST(test_different_thrice);
  return UnityEnd();
}
