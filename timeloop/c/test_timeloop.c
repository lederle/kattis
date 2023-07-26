#include "test-framework/unity.h"
#include "libtimeloop.h"

void setUp(void) {
}

void tearDown(void) {

}

static void test_timeloop(void) {
  char dest[100];
  char *expected = "1 Abracadabra\n2 Abracadabra\n3 Abracadabra\n4 Abracadabra\n5 Abracadabra\n";
  TEST_ASSERT_EQUAL_STRING(expected, timeloop(dest, 5));
}

static void test_timeloop_again(void) {
  char dest[200];
  char *expected = "1 Abracadabra\n2 Abracadabra\n3 Abracadabra\n4 Abracadabra\n5 Abracadabra\n6 Abracadabra\n7 Abracadabra\n8 Abracadabra\n9 Abracadabra\n10 Abracadabra\n";

  TEST_ASSERT_EQUAL_STRING(expected, timeloop(dest, 10));
}

int main(void) {
  UnityBegin("test_timeloop.c");
  RUN_TEST(test_timeloop);
  RUN_TEST(test_timeloop_again);
  return UnityEnd();
}
