#include <iostream>

int main() {

    int size = 15;

    for (int i = size/2; i <= size; i+= 2) { 
        for (int j = 1; j < size - i; j+=2)         
            std::cout << " "; 
        for (int j = 1; j <= i; j++) 
            std::cout << "3"; 
        for (int j = 1; j <= size - i; j++) 
            std::cout << " "; 
        for (int j = 1; j <= i - 1; j++) 
            std::cout << "3";
        std::cout << std::endl; 
    } 
    
    for (int i = size; i >= 0; i--) {
        for (int j = i; j < size; j++) 
            std::cout << " "; 
        for (int j = 1; j <= ((i * 2) - 1); j++) 
            std::cout << "3"; 
        std::cout << std::endl;   
    }

    return 0;

}