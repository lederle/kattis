#include "../../lib/test-framework/unity.h"
#include "libzanzibar.h"

void setUp(void) {
}

void tearDown(void) {
}

static void test_canary(void) {
    TEST_PASS(); 
}

static void test_zanzibar(void) {
  int n = 2;
  int pop[1024] = {1, 100};
  TEST_ASSERT_EQUAL_INT(98, zanzibar(n, pop));
}

static void test_zanzibar_again(void) {
  int n = 9;
  int pop[1024] = {1, 1, 1, 2, 2, 4, 8, 8, 9};
  TEST_ASSERT_EQUAL_INT(0, zanzibar(n, pop));
}

static void test_zanzibar_thrice(void) {
  int n = 3;
  int pop[1024] = {1, 28, 72};
  TEST_ASSERT_EQUAL_INT(42, zanzibar(n, pop));
}

int main(void) {
    UnityBegin("test_zanzibar.c");
    RUN_TEST(test_canary);
    RUN_TEST(test_zanzibar);
    RUN_TEST(test_zanzibar_again);
    RUN_TEST(test_zanzibar_thrice);

    return UnityEnd();
}
