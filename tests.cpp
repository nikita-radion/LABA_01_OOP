#include <gtest/gtest.h>
#include "polindrom.h"

TEST(EliminateUnsetBitsTest, BasicTests) {
    EXPECT_EQ(check_polindrom("polindrom"), 0);
    EXPECT_EQ(check_polindrom("111"), 1);
    EXPECT_EQ(check_polindrom("madam"), 1);
    EXPECT_EQ(check_polindrom("level"), 1);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}