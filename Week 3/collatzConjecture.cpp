#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int i = 0;
    

    while(n != 1){
        
        if( n % 2 == 0){
        n = n / 2; 
        i++ ;
        
        }
        
        else {
            n = 3*n + 1 ; 
            i++;
             
        }

        std::cout << n << "\t";

    
    }

    std::cout << i <<std::endl;

    








}
