#include <gtest/gtest.h>
#include "polindrom.h"

TEST(PolindromTest, Polindrom) {
    std::string input = "polindrom";
    int result = check_polindrom(input);
    EXPECT_EQ(result, 0);
}

TEST(PolindromTest, Numeric) {
    std::string input = "111";
    int result = check_polindrom(input);
    EXPECT_EQ(result, 1);
}

TEST(PolindromTest, Madam) {
    std::string input = "madam";
    int result = check_polindrom(input);
    EXPECT_EQ(result, 1);
}

TEST(PolindromTest, Level) {
    std::string input = "level";
    int result = check_polindrom(input);
    EXPECT_EQ(result, 1);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
