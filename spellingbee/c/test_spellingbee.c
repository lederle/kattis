#include "../../lib/test-framework/unity.h"
#include "libspellingbee.h"
#include <math.h>

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
    char *dict[] = { "abcd" };
    char *expected[] = { "abcd" };
    char **actual = spellingbee(letters, dict, dict_size);

    TEST_ASSERT_EQUAL_STRING_ARRAY(expected, actual, 1);
}

int main(void) {
    UnityBegin("test_spellingbee.c");
    RUN_TEST(test_canary);
    RUN_TEST(test_one_match_size_one_dict);
    
    return UnityEnd();
}
