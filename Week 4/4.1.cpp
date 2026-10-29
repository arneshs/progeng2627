#include <iostream>
#include <cmath>


void absolute(){
    int n;
    std::cout << "Please enter a number" << std::endl;
    std::cin >> n ;
    std::cout << "|" << n << "| = " <<std::abs(n) << std::endl;
}

int main() {
    absolute();

}

