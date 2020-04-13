#include "gtest/gtest.h"
#include "../src/checksum.cpp"

TEST(checksumTest, checksum) {
    std::cout << "GTEST *** checksum: " << (int)checksum(123456) << std::endl;
    //ASSERT_EQ(checksum(4245), 49);
    ASSERT_EQ(checksum(4245), 133);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}