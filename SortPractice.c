/*
*I will use count sort to sort the given 
*/
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

void PrintMe(int x) {
    printf("X: %i\n", x);   
    
}

int FindMax(std::vector<int> x) {
    return *std::max_element(x.begin(), x.end());
    
}

void CountSort(std::vector<int> x) {
    // Count array must be include highest value AND 0
    // so size is FindMax(x) + 1
    int count[FindMax(x) + 1];
    int sorted[x.size()];
    
    for(int index = 0; index < x.size(); index++) {
        int indexToInc = x[index];
        count[indexToInc]++;
    
    }
    
    /*
    for(int index = 0; index < count.size(); index++) {
        if(count[index]) {
            
        }
    
    }*/
    
    

}

void startCountSort() {
    
    std::vector<int> toBeSorted;
    unsigned numberOfInputs;
    
    std::cout << "How many ints will you enter? ";
    std::cin >> numberOfInputs;
    
    for(int count = 0; count < numberOfInputs; count++) {
    
        int addThisInput;
        std::cin >> addThisInput;
        toBeSorted.push_back(addThisInput);
        
    }
    
    int printMax = FindMax(toBeSorted);
    printf("Max: %i", printMax);
    
    
    //for_each(toBeSorted.begin(), toBeSorted.end(), PrintMe);    
       
    
}

int main() {

    startCountSort();

}
