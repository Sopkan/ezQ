#include <iostream>
#include <vector>

int main(){
    int n;
    int i = 0;
    std::vector<int> vec;
    while(n != -2){
        std::cin>> n;
        if(n != -1 && n != -2){
            vec.push_back(n);
            i++;
            for(int i = 0; i < vec.size(); i++){
                for(int j = 0; j < vec.size() - i - 1; j++){
                    if(vec[j] > vec[j+1]){
                        std::swap(vec[j], vec[j+1]);
                    }
                }
            }
        }
        else if(n == -1){
            std::cout<<vec[4];
        }
    }
}