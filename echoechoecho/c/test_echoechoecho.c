#include "../../lib/test-framework/unity.h"
#include "libechoechoecho.h"

void setUp(void) {}

void tearDown(void) {}

static void test_canary(void) { TEST_PASS(); }
static void test1(void) {
  char input[] = "Hello";
  char expected[] = "Hello Hello Hello";
  char output[MAX_WORD * 3 + 3];
  echoechoecho(input, output);
  TEST_ASSERT_EQUAL_STRING(expected, output);
}

static void test2(void) {
  char input[] = "ECHO";
  char expected[] = "ECHO ECHO ECHO";
  char output[MAX_WORD * 3 + 3];
  echoechoecho(input, output);
  TEST_ASSERT_EQUAL_STRING(expected, output);
}

static void test_length_one(void) {
  char input[] = "E";
  char expected[] = "E E E";
  char output[MAX_WORD * 3 + 3];
  echoechoecho(input, output);
  TEST_ASSERT_EQUAL_STRING(expected, output);
}

int main(void) {
  UnityBegin("test_echoechoecho.c");
  RUN_TEST(test_canary);
  RUN_TEST(test1);
  RUN_TEST(test2);
  RUN_TEST(test_length_one);

  return UnityEnd();
}
