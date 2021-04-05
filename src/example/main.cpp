#include <UFunction.hpp>

#include <iostream>

int main() {
    Ubpa::function<void()> f = [] {
        std::cout << "hello world!" << std::endl;
    };
    f();
    return 0;
}
