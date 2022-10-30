#include <iostream>
#include <cstdio>

template<typename res_type>
res_type single_loop(int n) {
    res_type sum = 0;
    res_type fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
        sum += fact;
    }
    return sum;
}

int main() {
    while (true) {
        int n;
        std::cin >> n;
        if (n == 0) break;
        // max: 12
        std::cout << "Using int: " << single_loop<int>(n) << std::endl;
        // max: 20
        std::cout << "Using long long: " << single_loop<long long>(n) << std::endl;
        // max: 34
        std::cout << "Using float: " << single_loop<float>(n);
        std::printf(" %.0f\n", single_loop<float>(n));
        // max: 170
        std::cout << "Using double: " << single_loop<double>(n);
        std::printf(" %.0f\n", single_loop<double>(n));
        // max: 170
        std::cout << "Using long double: " << single_loop<long double>(n);
        std::printf(" %.0f\n", single_loop<long double>(n));
    }
    return 0;
}