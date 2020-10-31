#include <iostream>

int main(void){
    int arr[5];
    int sum = 0;
    
    for(int i=0;i<5;i++){
        std::cout<<"Type "<<sum<<" integer ";
        std::cin>>arr[i];
    }

    for(int i=0;i<5;i++){
        sum += arr[i];
    }
    std::cout<<"It is Sum of array :"<<sum<<std::endl;
}