#include <iostream>

void Factorial(){
    int x;
    std::cout << "What number do you want to find the factorial of?" << std::endl ;
    std::cin >> x;
    int latestFactorial = 1;

    for(int i = 1; i<x+1; i++){
        latestFactorial = latestFactorial * i; 
    }

    std::cout << latestFactorial << std::endl ;




}

int main(){
    Factorial();


}