#include <iostream>
#include <complex>
#include <vector>


int main() {
    std::cout << "Hi" << '\n';

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::vector<int> zeros(5, 0);
    for(auto z : zeros){
        std::cout << z << '\n';
    }

    std::cout << "Hi, Konstantin" << '\n';
}
