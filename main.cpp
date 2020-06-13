#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>

	int current = 2;
    int index = 1;
    
    // Check if given number is a prime
    bool isPrime(int num) {
        for (int i = 2; i <= (num / 2); i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
    
    
    //Find nth Prime number in set of primes recursive

    int findPrime(int n) {      
        // base case:
        //int Answwer
        if (n == index) {
            return current;
        }
        
        // check next number
        current++;
        if (isPrime(current)) {
            // we found next prime, increment index
            index++;
        }
			//return is prefect
        return findPrime(n);
    }
    
//referencec of formula
//https://byjus.com/maths/perfect-numbers/
//return perfect using prime 
int Perfect(int pri){

	return pow(2,(pri-1))*(pow(2,pri)-1);
}
    main() {
        int n = 0;
        printf("Enter number to find nth perfect number (1+)");
        scanf("%d", &n);
		printf("the perfect at index number %d",perfect(findPrime(n)));
        getch();
    }
