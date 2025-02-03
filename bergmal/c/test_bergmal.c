#include "../../lib/test-framework/unity.h"
#include "libbergmal.h"

void setUp(void) {}

void tearDown(void) {}

static void test_canary(void) { TEST_PASS(); }

static void test1(void) {
  char expected[] = "#BergMal er malid";
  TEST_ASSERT_EQUAL_STRING(expected, bergmal(expected));
}
static void test2(void) {
  char expected[] = "_='_=%r;print(_%%_)';print(_%_)";
  TEST_ASSERT_EQUAL_STRING(expected, bergmal(expected));
}

static void test_multiword(void) {
  char expected[] = "erf erdsg";
  TEST_ASSERT_EQUAL_STRING(expected, bergmal(expected));
}

int main(void) {
  UnityBegin("test_bergmal.c");
  RUN_TEST(test_canary);
  RUN_TEST(test1);
  RUN_TEST(test2);
  RUN_TEST(test_multiword);

  return UnityEnd();
}
