#include "../../lib/test-framework/unity.h"
#include "libflatbokuveisla.h"

void setUp(void) {}

void tearDown(void) {}

static void test_canary(void) { TEST_PASS(); }

static void test1(void) {
  int slices = 8;
  int residents = 3;
  int expected = 2;
  TEST_ASSERT_EQUAL_INT(expected, flatbokuveisla(slices, residents));
}

static void test2(void) {
  int slices = 20;
  int residents = 7;
  int expected = 6;
  TEST_ASSERT_EQUAL_INT(expected, flatbokuveisla(slices, residents));
}

static void test3(void) {
  int slices = 999999;
  int residents = 10;
  int expected = 9;
  TEST_ASSERT_EQUAL_INT(expected, flatbokuveisla(slices, residents));
}

static void test_less_slices(void) {
  int slices = 6;
  int residents = 10;
  int expected = 6;  // everyone must get the same number of slices
  TEST_ASSERT_EQUAL_INT(expected, flatbokuveisla(slices, residents));
}

int main(void) {
  UnityBegin("test_flatbokuveisla.c");
  RUN_TEST(test_canary);
  RUN_TEST(test1);
  RUN_TEST(test2);
  RUN_TEST(test3);
  RUN_TEST(test_less_slices);

  return UnityEnd();
}
