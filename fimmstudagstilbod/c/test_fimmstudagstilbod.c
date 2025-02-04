#include "../../lib/test-framework/unity.h"
#include "libfimmstudagstilbod.h"

void setUp(void) {}

void tearDown(void) {}

static void test_canary(void) { TEST_PASS(); }

static void test1(void) {
  int year = 2020;
  int expected = 1000;
  TEST_ASSERT_EQUAL_INT(expected, fimmstudagstilbod(year));
}

static void test2(void) {
  int year = 2024;
  int expected = 1400;
  TEST_ASSERT_EQUAL_INT(expected, fimmstudagstilbod(year));
}

static void test_boundary_year(void) {
  int year = 1993;
  int expected = 1000;
  TEST_ASSERT_EQUAL_INT(expected, fimmstudagstilbod(year));
}

int main(void) {
  UnityBegin("test_fimmstudagstilbod.c");
  RUN_TEST(test_canary);
  RUN_TEST(test1);
  RUN_TEST(test2);
  RUN_TEST(test_boundary_year);

  return UnityEnd();
}
