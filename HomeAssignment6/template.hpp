#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <vector>
#include <iostream>

template <typename L, typename T>
class TemplateClass {
public:
    T number;
    std::vector<float> vec;
    L example;

    TemplateClass(const T& number, const std::vector<float>& vec, const L& expl)
        : number(number), vec(vec), example(expl) {}

    bool foo() {
        return example.bar(static_cast<int>(number), vec);
    }
};

// Partial specialization for `int`
template <typename L>
class TemplateClass<L, int> {
public:
    int number;
    std::vector<float> vec;
    L example;

    TemplateClass(const int& number, const std::vector<float>& vec, const L& expl)
        : number(number), vec(vec), example(expl) {}

    bool foo() {
        return true;
    }
};

// Partial specialization for `double`
template <typename L>
class TemplateClass<L, double> {
public:
    double number;
    std::vector<float> vec;
    L example;

    TemplateClass(const double& number, const std::vector<float>& vec, const L& expl)
        : number(number), vec(vec), example(expl) {}

    bool foo() {
        return false;
    }
};

#endif 

