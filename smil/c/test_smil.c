#include "../../lib/test-framework/unity.h"
#include "libsmil.h"

void setUp(void) {
}

void tearDown(void) {
}

static void test_canary(void) {
    TEST_PASS(); 
}

static void test_one_smile(void) {
    char line[3] = { ':', ')', '\n' };
    int *a = smil(line);
    int expected[2] = { 0, -1 };
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, a, 2);
}

static void test_second_variation(void) {
    char line[3] = { ';', ')', '\n' };
    int *a = smil(line);
    int expected[2] = { 0, -1 };
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, a, 2);
}

static void test_third_variation(void) {
    char line[4] = { ';', '-', ')', '\n' };
    int *a = smil(line);
    int expected[2] = { 0, -1 };
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, a, 2);
}

static void test_fourth_variation(void) {
    char line[4] = { ':', '-', ')', '\n' };
    int *a = smil(line);
    int expected[2] = { 0, -1 };
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, a, 2);
}

static void test_first_sample_input(void) {
    char line[2049] = ":)xsy:->>;-)::)3\n";
    int *a = smil(line);
    int expected[4] = { 0, 9, 13, -1 };
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, a, 4);
}

static void test_second_sample_input(void) {
    char line[2049] = ":-):);-):)\n";
    int *a = smil(line);
    int expected[5] = { 0, 3, 5, 8, -1 };
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, a, 5);
}

static void test_third_sample_input(void) {
    char line[2049] = "::))(:\n";
    int *a = smil(line);
    int expected[2] = { 1, -1 };
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, a, 2);
}

static void test_fourth_sample_input(void) {
    char line[2049] = "):):\n";
    int *a = smil(line);
    int expected[2] = { 1, -1 };
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, a, 2);
}

int main(void) {
    UnityBegin("test_smil.c");
    RUN_TEST(test_canary);
    RUN_TEST(test_one_smile);
    RUN_TEST(test_second_variation);
    RUN_TEST(test_third_variation);
    RUN_TEST(test_fourth_variation);
    RUN_TEST(test_first_sample_input);
    RUN_TEST(test_second_sample_input);
    RUN_TEST(test_third_sample_input);
    RUN_TEST(test_fourth_sample_input);
    
    return UnityEnd();
}
