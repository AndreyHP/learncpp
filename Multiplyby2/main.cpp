#include <iostream>


int main(){
    
    std::cout << "Enter an integer: ";   
    
    int num{};
    std::cin >> num;
    std::cout << "Double is: " << num * 2 << '\n';
    std::cout << "Triple is: " << num * 3 << '\n';
    return 0;
}
