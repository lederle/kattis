#include "../../lib/test-framework/unity.h"
#include "libnumberfun.h"

void setUp(void) {
}

void tearDown(void) {
}

static void test_canary(void) {
    TEST_PASS(); 
}

int main(void) {
    UnityBegin("test_numberfun.c");
    RUN_TEST(test_canary);
    
    return UnityEnd();
}
