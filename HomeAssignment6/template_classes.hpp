#ifndef TEMPLATE_CLASSES_HPP
#define TEMPLATE_CLASSES_HPP

#include <vector>
#include <iostream>

class Class1 {
public:
    bool bar(int number, const std::vector<float>& vec) {
        return number > 0;
    }

    int c1_1() { return 1; }
    float c1_2() { return 1.0f; }
    void c1_3() { std::cout << "Class1::c1_3()" << std::endl; }
};

class Class2 {
public:
    bool bar(int number, const std::vector<float>& vec) {
        return !vec.empty();
    }

    int c2_1() { return 2; }
    float c2_2() { return 2.0f; }
    void c2_3() { std::cout << "Class2::c2_3()" << std::endl; }
};

class Class3 {
public:
    bool bar(int number, const std::vector<float>& vec) {
        return number == -static_cast<int>(vec.size());
    }

    int c3_1() { return 3; }
    float c3_2() { return 3.0f; }
    void c3_3() { std::cout << "Class3::c3_3()" << std::endl; }
};

#endif // TEMPLATE_CLASSES_HPP

