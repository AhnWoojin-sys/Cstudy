#include <iostream>

int main(void){
    char name[20];
    char PhoneNumber[10];
    
    std::cout<<"What is your Name?";
    std::cin>>name;
    
    std ::cout<<"What is your Phone Number ?";
    std::cin>>PhoneNumber;
    
    std::cout<<"Your Name : "<<name<<std::endl;
    std::cout<<"Your Phone Number : "<<PhoneNumber<<std::endl;

}