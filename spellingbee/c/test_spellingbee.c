#include <math.h>

#include "../../lib/test-framework/unity.h"
#include "libspellingbee.h"

void setUp(void) {
}

void tearDown(void) {
}

static void test_canary(void) {
    TEST_PASS(); 
}

static void test_one_match_size_one_dict(void) {
  char letters[7] = "abcdefg";
  int dict_size = 1;
  char *dict[] = {"abcd"};
  char *expected[] = {"abcd", "-1"};
  char **actual = spellingbee(letters, dict, dict_size);

  TEST_ASSERT_EQUAL_STRING_ARRAY(expected, actual, 2);
}

static void test_two_matches_size_two_dict(void) {
  char letters[7] = "abcdefg";
  int dict_size = 2;
  char *dict[] = {"abcd", "acde"};
  char *expected[] = {"abcd", "acde", "-1"};
  char **actual = spellingbee(letters, dict, dict_size);

  TEST_ASSERT_EQUAL_STRING_ARRAY(expected, actual, 3);
}

static void test_three_matches_size_three_dict(void) {
  char letters[7] = "abcdefg";
  int dict_size = 3;
  char *dict[] = {"abcd", "acde", "adef"};
  char *expected[] = {"abcd", "acde", "adef", "-1"};
  char **actual = spellingbee(letters, dict, dict_size);

  TEST_ASSERT_EQUAL_STRING_ARRAY(expected, actual, 4);
}

static void test_five_matches_size_five_dict(void) {
  char letters[7] = "abcdefg";
  int dict_size = 5;
  char *dict[] = {"abcd", "acde", "adef", "abce", "abcf"};
  char *expected[] = {"abcd", "acde", "adef", "abce", "abcf", "-1"};
  char **actual = spellingbee(letters, dict, dict_size);

  TEST_ASSERT_EQUAL_STRING_ARRAY(expected, actual, 6);
}

static void test_one_match_size_two_dict(void) {
  char letters[7] = "abcdefg";
  int dict_size = 2;
  char *dict[] = {"abcz", "abcd"};
  char *expected[] = {"abcd", "-1"};
  char **actual = spellingbee(letters, dict, dict_size);

  TEST_ASSERT_EQUAL_STRING_ARRAY(expected, actual, 2);
}

static void test_one_match_size_three_dict(void) {
  char letters[7] = "abcdefg";
  int dict_size = 3;
  char *dict[] = {"abcz", "abcd", "abcy"};
  char *expected[] = {"abcd", "-1"};
  char **actual = spellingbee(letters, dict, dict_size);

  TEST_ASSERT_EQUAL_STRING_ARRAY(expected, actual, 2);
}

static void test_two_matches_size_three_dict(void) {
  char letters[7] = "abcdefg";
  int dict_size = 3;
  char *dict[] = {"abcy", "abcd", "abce"};
  char *expected[] = {"abcd", "abce", "-1"};
  char **actual = spellingbee(letters, dict, dict_size);

  TEST_ASSERT_EQUAL_STRING_ARRAY(expected, actual, 3);
}

static void test_match_without_center_letter(void) {
  char letters[7] = "abcdefg";
  int dict_size = 3;
  char *dict[] = {"bcde", "abcd", "abce"};
  char *expected[] = {"abcd", "abce", "-1"};
  char **actual = spellingbee(letters, dict, dict_size);

  TEST_ASSERT_EQUAL_STRING_ARRAY(expected, actual, 3);
}

int main(void) {
    UnityBegin("test_spellingbee.c");
    RUN_TEST(test_canary);
    RUN_TEST(test_one_match_size_one_dict);
    RUN_TEST(test_two_matches_size_two_dict);
    RUN_TEST(test_three_matches_size_three_dict);
    RUN_TEST(test_five_matches_size_five_dict);
    RUN_TEST(test_one_match_size_two_dict);
    RUN_TEST(test_one_match_size_three_dict);
    RUN_TEST(test_two_matches_size_three_dict);
    RUN_TEST(test_match_without_center_letter);
    return UnityEnd();
}
