#include "../../lib/test-framework/unity.h"
#include "libmia.h"

void setUp(void) {}

void tearDown(void) {}

static void test_canary(void) { TEST_PASS(); }

static void test_mia_player_one_wins(void) {
  TEST_ASSERT_EQUAL_INT(1, mia(2, 1, 1, 1));
}

static void test_one_two_mia_player_one_wins(void) {
  TEST_ASSERT_EQUAL_INT(1, mia(1, 2, 1, 1));
}

static void test_mia_player_two_wins(void) {
  TEST_ASSERT_EQUAL_INT(2, mia(1, 1, 2, 1));
}

static void test_doubles_wins(void) {
  TEST_ASSERT_EQUAL_INT(1, mia(1, 1, 6, 5));
}

static void test_mia_beats_doubles(void) {
  TEST_ASSERT_EQUAL_INT(1, mia(2, 1, 6, 6));
}

static void test_mia_beats_other(void) {
  TEST_ASSERT_EQUAL_INT(1, mia(2, 1, 6, 5));
}

static void test_high_doubles_beats_low_doubles(void) {
  TEST_ASSERT_EQUAL_INT(2, mia(2, 2, 6, 6));
}

static void test_high_other_beats_low_other(void) {
  TEST_ASSERT_EQUAL_INT(2, mia(6, 4, 6, 5));
}

static void test_ties(void) {
  TEST_ASSERT_EQUAL_INT(0, mia(2, 1, 1, 2));
  TEST_ASSERT_EQUAL_INT(0, mia(2, 2, 2, 2));
  TEST_ASSERT_EQUAL_INT(0, mia(2, 3, 3, 2));
}

int main(void) {
  UnityBegin("test_mia.c");
  RUN_TEST(test_canary);
  RUN_TEST(test_mia_player_one_wins);
  RUN_TEST(test_mia_player_two_wins);
  RUN_TEST(test_one_two_mia_player_one_wins);
  RUN_TEST(test_doubles_wins);
  RUN_TEST(test_mia_beats_doubles);
  RUN_TEST(test_high_doubles_beats_low_doubles);
  RUN_TEST(test_high_other_beats_low_other);
  RUN_TEST(test_mia_beats_other);
  RUN_TEST(test_ties);

  return UnityEnd();
}
