#include "../../lib/test-framework/unity.h"
#include "libbergmal.h"

void setUp(void) {}

void tearDown(void) {}

static void test_canary(void) { TEST_PASS(); }

int main(void) {
  UnityBegin("test_bergmal.c");
  RUN_TEST(test_canary);

  return UnityEnd();
}
