#include<iostream>

namespace network{
    int name {76};
}

int main()
{
    int answer {43};
    std::cout << "The answer to life, the universe, and everything is"
            << answer
            << std::endl;
    std::cout << network::name << answer << std::endl;
    return 0;
}