#include <iostream>

int factorial(int myint){

    int fact = 1;

    for(int i ; i < myint+1; i++ ){
        fact = fact * i;
    
    }

    return fact;


}

int main() {
    int n;
    std::cin >> n;
    std::cout << "The factorial of " << n << " is " << factorial(n) << std::endl;


}