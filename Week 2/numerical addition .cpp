#include <iostream>

void sum_of_two_numbers(){
   double n1,n2, sum;
    std :: cout << "please enter your first number " << std::endl;
    std :: cin >> n1 ;

    std :: cout << "please enter your second number" << std::endl;
    std :: cin >> n2;
    
    sum = n1 + n2;
    
    std :: cout << n1 << "+" << n2 << "=" << sum << std:: endl;


}

void odd_or_even(){
    int n, remainder ;

    std::cout << "please enter a number"<< std::endl;
    std:: cin >> n;
    remainder = n % 2;

    if (remainder == 1) {
        std::cout << "Your number is odd" << std::endl ;

     } else {
        std::cout << "Your number is even" << std::endl ; }


}

void currencyConversion(){
    double pounds, conversion;
    std :: cout << "Please enter the amount of money you have in pounds" << std::endl;
    std :: cin >> pounds ;
    conversion = pounds * 1.18 ;
    std::cout << "You have €" << conversion << std::endl; 



}

void BMIcalculator(){
    double height, weight, BMI;

    std:: cout << "Please enter your height" << std::endl ;
    std :: cin >> height ; 

    std :: cout << "Please enter your weight" << std::endl;
    std :: cin >> weight;

    BMI = weight / (height * height);

    std :: cout << "Your BMI is " << BMI << std::endl;
}




int main() {
    BMIcalculator();
 
}
