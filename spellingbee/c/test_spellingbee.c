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
  char letters[8] = "abcdefg";
  int dict_size = 1;
  char dict[][25] = {"abcd"};
  char *expected[] = {"abcd", "-1"};
  char **actual = spellingbee(letters, dict, dict_size);

  TEST_ASSERT_EQUAL_STRING_ARRAY(expected, actual, 2);
}

static void test_boolean_match(void) {
  char letters[8] = "abcdefg";
  char word[25] = "abcd";
  TEST_ASSERT_TRUE(spellingbee_bool(letters, word));
}

static void test_boolean_not_match(void) {
  char letters[8] = "abcdefg";
  char word[25] = "abcz";
  TEST_ASSERT_FALSE(spellingbee_bool(letters, word));
}

static void test_boolean_not_match_center_letter_absent(void) {
  char letters[8] = "abcdefg";
  char word[25] = "bcde";
  TEST_ASSERT_FALSE(spellingbee_bool(letters, word));
}

static void test_boolean_not_match_too_short(void) {
  char letters[8] = "abcdefg";
  char word[25] = "acd";
  TEST_ASSERT_FALSE(spellingbee_bool(letters, word));
}

static void test_two_matches_size_two_dict(void) {
  char letters[8] = "abcdefg";
  int dict_size = 2;
  char dict[][25] = {"abcd", "acde"};
  char *expected[] = {"abcd", "acde", "-1"};
  char **actual = spellingbee(letters, dict, dict_size);

  TEST_ASSERT_EQUAL_STRING_ARRAY(expected, actual, 3);
}

static void test_three_matches_size_three_dict(void) {
  char letters[8] = "abcdefg";
  int dict_size = 3;
  char dict[][25] = {"abcd", "acde", "adef"};
  char *expected[] = {"abcd", "acde", "adef", "-1"};
  char **actual = spellingbee(letters, dict, dict_size);

  TEST_ASSERT_EQUAL_STRING_ARRAY(expected, actual, 4);
}

static void test_five_matches_size_five_dict(void) {
  char letters[8] = "abcdefg";
  int dict_size = 5;
  char dict[][25] = {"abcd", "acde", "adef", "abce", "abcf"};
  char *expected[] = {"abcd", "acde", "adef", "abce", "abcf", "-1"};
  char **actual = spellingbee(letters, dict, dict_size);

  TEST_ASSERT_EQUAL_STRING_ARRAY(expected, actual, 6);
}

static void test_one_match_size_two_dict(void) {
  char letters[8] = "abcdefg";
  int dict_size = 2;
  char dict[][25] = {"abcz", "abcd"};
  char *expected[] = {"abcd", "-1"};
  char **actual = spellingbee(letters, dict, dict_size);

  TEST_ASSERT_EQUAL_STRING_ARRAY(expected, actual, 2);
}

static void test_one_match_size_three_dict(void) {
  char letters[8] = "abcdefg";
  int dict_size = 3;
  char dict[][25] = {"abcz", "abcd", "abcy"};
  char *expected[] = {"abcd", "-1"};
  char **actual = spellingbee(letters, dict, dict_size);

  TEST_ASSERT_EQUAL_STRING_ARRAY(expected, actual, 2);
}

static void test_two_matches_size_three_dict(void) {
  char letters[8] = "abcdefg";
  int dict_size = 3;
  char dict[][25] = {"abcy", "abcd", "abce"};
  char *expected[] = {"abcd", "abce", "-1"};
  char **actual = spellingbee(letters, dict, dict_size);

  TEST_ASSERT_EQUAL_STRING_ARRAY(expected, actual, 3);
}

static void test_match_without_center_letter(void) {
  char letters[8] = "abcdefg";
  int dict_size = 3;
  char dict[][25] = {"bcde", "abcd", "abce"};
  char *expected[] = {"abcd", "abce", "-1"};
  char **actual = spellingbee(letters, dict, dict_size);

  TEST_ASSERT_EQUAL_STRING_ARRAY(expected, actual, 3);
}

static void test_sample_input_partial(void) {
  char letters[8] = "drulyag";
  int dict_size = 1;
  char dict[][25] = {"dryad"};
  char *expected[] = {"dryad", "-1"};
  char **actual = spellingbee(letters, dict, dict_size);

  TEST_ASSERT_EQUAL_STRING_ARRAY(expected, actual, 2);
}

static void test_sample_input_partial2(void) {
  char letters[8] = "drulyag";
  int dict_size = 2;
  char dict[][25] = {"dryad", "duly"};
  char *expected[] = {"dryad", "duly", "-1"};
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
    RUN_TEST(test_sample_input_partial);
    RUN_TEST(test_sample_input_partial2);
    RUN_TEST(test_boolean_match);
    RUN_TEST(test_boolean_not_match);
    RUN_TEST(test_boolean_not_match_center_letter_absent);
    RUN_TEST(test_boolean_not_match_too_short);
    return UnityEnd();
}
