#include <iostream>


int main(){
    int mas[6] = {-100, -50, -5, 1, 10, 15};
    for(int i = 0; i < 5;i++){
        for(int j = 0; j < 6 - i - 1; j++){
            if(abs(mas[j]) > abs(mas[j+1]))
                std::swap(mas[j], mas[j+1]);
        }
    }   
    for(int i = 0; i < 6; i++){
        std::cout<<mas[i] << " ";
    }
}