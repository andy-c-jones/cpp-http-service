#include <gmock/gmock.h>
#include "../src/service/Example.h"

using ::testing::_;

class ExampleTest : public ::testing::Test {
};

TEST(ExampleTest, test_something) {
    auto something = std::make_unique<Example>();
    EXPECT_EQ(something->doSomething(), 1);
};