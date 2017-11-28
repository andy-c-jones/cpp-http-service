#include <gmock/gmock.h>
#include "../src/service/Something.h"

using ::testing::_;

class ExampleTest : public ::testing::Test {
};

TEST(ExampleTest, test_something) {
    auto something = std::make_unique<Something>();
    EXPECT_EQ(something->doSomething(), 1);
};