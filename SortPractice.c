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

    for_each(toBeSorted.begin(), toBeSorted.end(), PrintMe);    
       
    
}

int main() {

    startCountSort();

}
