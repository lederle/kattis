#include "test-framework/unity.h"
#include "libthelastproblem.h"

void setUp(void) {
}

void tearDown(void) {
}

static void test_thelastproblem(void) {
  char *expected = "Thank you, Twilight, and farewell!";
  TEST_ASSERT_EQUAL_STRING(expected, theLastProblem("Twilight"));
}

static void test_thelastproblem_again(void) {
  char *expected = "Thank you, Luster, and farewell!";
  TEST_ASSERT_EQUAL_STRING(expected, theLastProblem("Luster"));
}

static void test_spaces_in_name(void) {
  char *in = "Twilight Luster";
  char *expected = "Thank you, Twilight Luster, and farewell!";
  TEST_ASSERT_EQUAL_STRING(expected, theLastProblem(in));
}

int main(void) {
  UnityBegin("test_thelastproblem.c");
  RUN_TEST(test_thelastproblem);
  RUN_TEST(test_thelastproblem_again);
  RUN_TEST(test_spaces_in_name);
  return UnityEnd();
}
