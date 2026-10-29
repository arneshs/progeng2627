#include <iostream>

bool leapYear(int year) {

    bool ly;

    if( year % 4 == 0 ) {

        ly = true;

        if (year % 400 == 0) {
             ly = true;
        }

        else if ( year % 100 == 0){
             ly = false;
        }

        
    }

    else{
         ly = false;
    }

    return ly;

}

int main(){
    int input_year;

    std::cout <<"Please enter what year you would like to check?" <<std::endl;
    std::cin >> input_year;

    if(leapYear(input_year)){
        std::cout << "it's a leap year" << std::endl;
    }
    else{
        std::cout << "it's not a leap year" << std::endl;
    }
}