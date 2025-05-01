#include <iostream>

int main() {
    int X;
    std::cin >> X;

    int result = 1;
    for (int i = 0; i < X; ++i) {
        result = (result * 5) % 100;
    }
    std::cout << result << std::endl;

    return 0;
}