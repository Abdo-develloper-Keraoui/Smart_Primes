# Smart_Primes
//Prime function to check if a number is prime or not using a basic form of Sieve of Eratosthenes
/*
This code takes in a threshold A>=3 to check for prime numbers up to it:
-It declares an array with size of A/2
-fills the first 2 elements of the array with 1 and 2
-starts a loop from 3 to the threshold A using :
                -checks iteratively if a number is prime by dividing the current iterative variable i by prime numbers less than or equal to
                sqrt(i)
                -if the number is not prime than it is flagged (a=1) and nothing else will be done until the next iteration
                -if the number is prime than it is added to the array of primes
-finally it prints all prime numbers found
*/
