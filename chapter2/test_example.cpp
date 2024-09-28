#include <iostream>
#include <numbers>

int main(){
    int count { 5 }, k { 10 };
    double t { 6.0d };
    k = k++ + count;
    std::cout << k << std::endl;
    std::cout << t + count << std::endl;
    std::cout << std::numbers::pi << std::endl;
    std::cout << std::numbers::e << std::endl;
    std::cout << std::numbers::sqrt2 << std::endl;
    std::cout << std::numbers::phi << std::endl;
    std::cout << std::numbers::pi_v<long double> << std::endl;
    // return 0;
}