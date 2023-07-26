#include "test-framework/unity.h"
#include "libfaktor.h"

void setUp(void) {
}

void tearDown(void) {
}

static void test_faktor(void) {
  TEST_ASSERT_EQUAL_INT(875, faktor(38, 24));
}

static void test_faktor_again(void) {
  TEST_ASSERT_EQUAL_INT(100, faktor(1, 100));
}

static void test_faktor_thrice(void) {
  TEST_ASSERT_EQUAL_INT(91, faktor(10, 10));
}

int main(void) {
  UnityBegin("test_faktor.c");
  RUN_TEST(test_faktor);
  RUN_TEST(test_faktor_again);
  RUN_TEST(test_faktor_thrice);
  return UnityEnd();
}
