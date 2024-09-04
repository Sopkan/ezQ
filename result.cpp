#include <iostream>
#include <vector>

int main(){
    int user = 0;
    int sum;
    std::vector<int> vec(1);
    int i = 0;
    while(user != -1){
        std::cout << "Enter " << i << " value: ";
        std::cin >> user;
        if(user != -1)
            vec.push_back(user);
        i++;
        
    }
    std::cout <<"Enter result sum: ";
    std::cin >> sum;
    for(int i = 0; i < vec.size()-1; i++){
        if(vec[i]+vec[i+1] == sum){
            std::cout << vec[i] << " + " << vec[i+1] << " = " << sum;
            break;
        }
        
    }
}