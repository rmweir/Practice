
/* In this warmup we will create a fib program that utilizes
   memoization.
*/

#include <stdio.h>
#include <iostream>

#include <map>


static std::map<unsigned, unsigned> memo;


unsigned fib(unsigned n) {
    
    if (n < 2) 
        return n;
        
    if(memo.count(n) > 0)
        return memo[n];
        
    unsigned retValue = fib(n-1) + fib(n-2);
    
    memo[n] = retValue;
    
    return retValue;
    
}

int main() {

    unsigned input;
    int valueToPrint;

    printf("Please enter an argument for the fib sequence: ");
    
    std::cin >> input;
    valueToPrint = fib(input);
    
    // Possible values start at 0
    printf("Value: %i\n", valueToPrint);   

}
