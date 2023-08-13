#include "../../lib/test-framework/unity.h"
#include "libstatistics.h"

void setUp(void) {
}

void tearDown(void) {
}

static void test_canary(void) {
    TEST_PASS(); 
}

int main(void) {
    UnityBegin("test_statistics.c");
    RUN_TEST(test_canary);
    
    return UnityEnd();
}
