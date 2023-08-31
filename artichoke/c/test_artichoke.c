#include "../../lib/test-framework/unity.h"
#include "libartichoke.h"

void setUp(void) {}

void tearDown(void) {}

static void test_canary(void) { TEST_PASS(); }

static void test_artichoke(void) {
  TEST_ASSERT_DOUBLE_WITHIN(1e-6, 1.0, artichoke(1, 1, 1, 1, 1, 1));
}

int main(void) {
  UnityBegin("test_artichoke.c");
  RUN_TEST(test_canary);
  RUN_TEST(test_artichoke);

  return UnityEnd();
}
