#include "gtest/gtest.h"

namespace {

TEST(AsanTest, Overrun) {
  char* buf = (char*)malloc(100);
#ifdef ADDRESS_SANITIZER
  EXPECT_DEATH({ buf[101] = 'x'; }, "heap-buffer-overflow");
#endif
  // LeakSanitizer catches free() missing.
  free(buf);
}

}  // namespace
