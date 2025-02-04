#include "../../lib/test-framework/unity.h"
#include "libgreetings2.h"

void setUp(void) {}

void tearDown(void) {}

static void test_canary(void) { TEST_PASS(); }

static void test1(void) {
  char greeting[] = "hey";
  char output[MAX_GREETING * 2];
  char expected[] = "heey";
  greetings2(greeting, output);
  TEST_ASSERT_EQUAL_STRING(expected, output);
}

static void test2(void) {
  char greeting[] = "heeeeey";
  char output[MAX_GREETING * 2];
  char expected[] = "heeeeeeeeeey";
  greetings2(greeting, output);
  TEST_ASSERT_EQUAL_STRING(expected, output);
}

int main(void) {
  UnityBegin("test_greetings2.c");
  RUN_TEST(test_canary);
  RUN_TEST(test1);
  RUN_TEST(test2);

  return UnityEnd();
}
