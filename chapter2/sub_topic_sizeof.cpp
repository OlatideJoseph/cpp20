#include <iostream>

int main(void)
{
    int height{ 74 };
    std::cout << "The height variable occupies " << sizeof height << " bytes." << std::endl;
    std::cout << "Type \"long long\" occupies " << sizeof(long long) << " bytes." << std::endl;
    std::cout << "The result of the expression height * height/2 occupies "
                    << sizeof(height * height/2) << " bytes." << std::endl;
}