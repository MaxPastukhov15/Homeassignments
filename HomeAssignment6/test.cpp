#include <gtest/gtest.h>
#include "template.hpp"
#include "template_classes.hpp"

TEST(TemplateClassTest, Class1_ReturnsTrue) {
    Class1 obj_instance;
    TemplateClass<Class1, float> obj(5.0f, {}, obj_instance);
    EXPECT_TRUE(obj.foo());
}

TEST(TemplateClassTest, Class1_ReturnsFalse) {
    Class1 obj_instance;
    TemplateClass<Class1, float> obj(-5.0f, {}, obj_instance);
    EXPECT_FALSE(obj.foo());
}

TEST(TemplateClassTest, Class2_ReturnsTrue) {
    Class2 obj_instance;
    std::vector<float> vec = {1.0f, 2.0f};
    TemplateClass<Class2, float> obj(0.0f, vec, obj_instance);
    EXPECT_TRUE(obj.foo());
}

TEST(TemplateClassTest, Class2_ReturnsFalse) {
    Class2 obj_instance;
    std::vector<float> vec;
    TemplateClass<Class2, float> obj(0.0f, vec, obj_instance);
    EXPECT_FALSE(obj.foo());
}

TEST(TemplateClassTest, Class3_ReturnsTrue) {
    Class3 obj_instance;
    std::vector<float> vec = {1.0f, 2.0f};
    TemplateClass<Class3, float> obj(-2.0f, vec, obj_instance);
    EXPECT_TRUE(obj.foo());
}

TEST(TemplateClassTest, Class3_ReturnsFalse) {
    Class3 obj_instance;
    std::vector<float> vec = {1.0f, 2.0f};
    TemplateClass<Class3, float> obj(2.0f, vec, obj_instance);
    EXPECT_FALSE(obj.foo());
}

TEST(TemplateClassSpecializationTest, IntSpecializationAlwaysTrue) {
    Class1 obj_instance;
    std::vector<float> vec = {1.0f, 2.0f};
    TemplateClass<Class1, int> obj(5, vec, obj_instance);
    EXPECT_TRUE(obj.foo());
}

TEST(TemplateClassSpecializationTest, DoubleSpecializationAlwaysFalse) {
    Class1 obj_instance;
    std::vector<float> vec = {1.0f, 2.0f};
    TemplateClass<Class1, double> obj(5.0, vec, obj_instance);
    EXPECT_FALSE(obj.foo());
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

