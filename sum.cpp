#include <iostream>
#include <vector>


int main(){
    std::vector<int> a = {-2, 1, -3, 4, -1 ,2 ,1 , 5 ,4};
    int maxSum = 0, sum = 0, indI, indJ;
    for(int j = a.size(); j > 0; j--){
        for(int i = 0; i < j; i++){
            for(int k = i; k < j; k++){
                sum += a[k];
            }
            if(maxSum < sum){
                maxSum = sum;
                indI = i;
                indJ = j - 1;
            }
            sum = 0;
        }
        
    }
    std::cout << indI << " " << indJ;
}   