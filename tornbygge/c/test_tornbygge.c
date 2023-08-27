#include "../../lib/test-framework/unity.h"
#include "libtornbygge.h"

void setUp(void) {}

void tearDown(void) {}

static void test_canary(void) { TEST_PASS(); }

static void test_length_one_sequence(void) {
  int bricks[1] = {3};
  TEST_ASSERT_EQUAL_INT(1, tornbygge(bricks, 1));
}

static void test_length_two_sequence_increasing(void) {
  int bricks[2] = {3, 5};
  TEST_ASSERT_EQUAL_INT(2, tornbygge(bricks, 2));
}

static void test_length_two_sequence_decreasing(void) {
  int bricks[2] = {9, 5};
  TEST_ASSERT_EQUAL_INT(1, tornbygge(bricks, 2));
}

static void test_length_two_sequence_equal(void) {
  int bricks[2] = {5, 5};
  TEST_ASSERT_EQUAL_INT(1, tornbygge(bricks, 2));
}

static void test_length_three_sequence_increasing(void) {
  int bricks[3] = {3, 5, 7};
  TEST_ASSERT_EQUAL_INT(3, tornbygge(bricks, 3));
}

static void test_length_three_sequence_decreasing(void) {
  int bricks[3] = {9, 5, 1};
  TEST_ASSERT_EQUAL_INT(1, tornbygge(bricks, 3));
}

static void test_length_three_sequence_equal(void) {
  int bricks[3] = {9, 9, 9};
  TEST_ASSERT_EQUAL_INT(1, tornbygge(bricks, 3));
}

static void test_length_three_sequence_down_up(void) {
  int bricks[3] = {9, 4, 7};
  TEST_ASSERT_EQUAL_INT(2, tornbygge(bricks, 3));
}

static void test_length_three_sequence_up_down(void) {
  int bricks[3] = {9, 12, 7};
  TEST_ASSERT_EQUAL_INT(2, tornbygge(bricks, 3));
}

static void test_sample_one(void) {
  int bricks[10] = {4, 3, 3, 2, 1, 2, 2, 1, 1, 3};
  TEST_ASSERT_EQUAL_INT(3, tornbygge(bricks, 10));
}

int main(void) {
  UnityBegin("test_tornbygge.c");
  RUN_TEST(test_canary);
  RUN_TEST(test_length_one_sequence);
  RUN_TEST(test_length_two_sequence_increasing);
  RUN_TEST(test_length_two_sequence_decreasing);
  RUN_TEST(test_length_two_sequence_equal);
  RUN_TEST(test_length_three_sequence_increasing);
  RUN_TEST(test_length_three_sequence_decreasing);
  RUN_TEST(test_length_three_sequence_equal);
  RUN_TEST(test_length_three_sequence_down_up);
  RUN_TEST(test_sample_one);
  return UnityEnd();
}
