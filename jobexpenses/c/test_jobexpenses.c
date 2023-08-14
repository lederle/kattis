#include "../../lib/test-framework/unity.h"
#include "libjobexpenses.h"

void setUp(void) {
}

void tearDown(void) {
}

static void test_canary(void) {
    TEST_PASS(); 
}

int main(void) {
    UnityBegin("test_jobexpenses.c");
    RUN_TEST(test_canary);
    
    return UnityEnd();
}
