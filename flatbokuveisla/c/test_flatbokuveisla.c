#include "../../lib/test-framework/unity.h"
#include "libflatbokuveisla.h"

void setUp(void) {}

void tearDown(void) {}

static void test_canary(void) { TEST_PASS(); }

int main(void) {
  UnityBegin("test_flatbokuveisla.c");
  RUN_TEST(test_canary);

  return UnityEnd();
}
