#include <iostream>

int addNumbers( int first_param, int second_param){
    
    int result = first_param + second_param;
    return result;
}

int main()
{
    int first_number{13}; // Statement
    int second_number {7};
    
    std::cout << "First number : " << first_number << std::endl;
    std::cout << "Second number : " << second_number << std::endl;

    int sum = first_number + second_number;
    std::cout << "Sum : " << sum << std::endl; // 20

    sum = addNumbers(30, 50);
    std::cout << "Adding the numbers 30 and 50" << std::endl;
    std::cout << "Sum : " << sum << std::endl; // 80

    sum = addNumbers(12, 13);
    std::cout << "Adding the numbers 12 and 13 : " << sum << std::endl;

    int sum1 = addNumbers(123, 321);
    std::cout << "Adding the numbers 123 and 321 : " << sum1 << std::endl;

    return 0;
}