#include <iostream>

int comparator(int a, int b, int c){

    if( a> b && a >c) {
        return a;
    }

    if( b> a && b >c) {
        return b;
    }

    if( c > a && c >b ) {
        return c;
    }


}

int main(){
int x,y,z ;

std::cout << "Please enter Number 1:" << std::endl;
std::cin >> x ;
std::cout << "Please enter Number 2:" << std::endl;
std::cin >> y ;
std::cout << "Please enter Number 3:" << std::endl;
std::cin >> z ;

std::cout << "The largest number is "<< comparator(x,y,z) << std::endl;



}