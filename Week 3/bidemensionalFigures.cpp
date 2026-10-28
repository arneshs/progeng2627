#include <iostream>



void drawingShapes(){
    int n;
    std::cin >> n;

    int c1 = 0;
    int c2 = 0;

    while (c1 < n){
        c1++ ; 
        while(c2 < n){
            c2++ ;
            std::cout << "*" ; 

        }
        std::cout << std::endl;
    }

}


void multiplicationTables() {
    int n; 
    std::cin >> n;

    for(int i = 1; i<n+1; i++){

        for(int j = 1; j<n+1; j++){
            std::cout << j*i << "\t";
        }

        std::cout << std::endl ;

    }


}

int main(){ 
    multiplicationTables();

}