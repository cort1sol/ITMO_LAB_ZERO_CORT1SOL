#include <iostream>
#include <string>
int main(){
    std::string Name;
    std::getline(std::cin, Name);
    std::cout << "Hello "<< Name;
    return 0;
}