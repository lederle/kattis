#include "../../lib/test-framework/unity.h"
#include "libspeeding.h"

void setUp(void) {
}

void tearDown(void) {
}

static void test_canary(void) {
    TEST_PASS(); 
}

static void test_one_input(void) {
    int time[2] = { 0, 1 };
    int dist[2] = { 0, 1 };
    TEST_ASSERT_EQUAL_INT(1, speeding(time, dist, 2));
}

static void test_two_input(void) {
    int time[3] = { 0, 1, 2 };
    int dist[3] = { 0, 1, 2 };
    TEST_ASSERT_EQUAL_INT(1, speeding(time, dist, 3));
}

static void test_sample_input_two(void) {
    int time[5] = { 0, 5, 10, 15, 20 };
    int dist[5] = { 0, 24, 98, 222, 396 };
    TEST_ASSERT_EQUAL_INT(34, speeding(time, dist, 5));
}

int main(void) {
    UnityBegin("test_speeding.c");
    RUN_TEST(test_canary);
    RUN_TEST(test_one_input);
    RUN_TEST(test_two_input);
    RUN_TEST(test_sample_input_two);
    
    return UnityEnd();
}
