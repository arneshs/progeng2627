#include <iostream>

void Powers(){
    int n, x;
    std::cout << "What power do you want to raise to " << std::endl;
    std::cin >> n;
    std::cout << "What number do you want to raise to " << std::endl;
    std::cin >> x; 
    
    int num = 1;
    for (int i = 0; i<n; i++){
         num = x * num ;
    }

    std::cout << num << std::endl;
    
}



int main(){
    Powers();

}