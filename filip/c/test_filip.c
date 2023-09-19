#include "../../lib/test-framework/unity.h"
#include "libfilip.h"

void setUp(void) {}

void tearDown(void) {}

static void test_canary(void) { TEST_PASS(); }

static void test_filip(void) {
  int rev, A = 123;
  filip(A, &rev);
  TEST_ASSERT_EQUAL_INT(321, rev);
}

int main(void) {
  UnityBegin("test_filip.c");
  RUN_TEST(test_canary);
  RUN_TEST(test_filip);

  return UnityEnd();
}
