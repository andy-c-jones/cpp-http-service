#include <gmock/gmock.h>

using ::testing::_;

class ExampleTest : public ::testing::Test {

};

TEST(ExampleTest, test_something) {
        EXPECT_EQ(2, 2);
};