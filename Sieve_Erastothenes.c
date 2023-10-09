//Prime function to check if a number is prime or not using a basic form of Sieve of Eratosthenes;
void SmartPrimes(int A)
{
                /*Note here that memory usage can be improved using dynamic memory allocation instead of
                declaring Primes[A/2];
                */
                int i,j,a,Primes[A/2],k=1;
                Primes[0]=1;
                Primes[1]=2;
                for(i=3;i<=A;i++)
                {
                                a=0;j=1;
                                while(Primes[j]*Primes[j]<=i)
                                {

                                                if((i%Primes[j])==0)
                                                {
                                                                a=1;
                                                                break;
                                                }
                                                j++;
                                }
                                if(a==0)
                                {
                                                k++;
                                                Primes[k]=i;
                                }
                }
                for(i=0;i<=k;i++)
                {
                                printf("%d is a prime number.\n", Primes[i]);
                }
}
//Simple implementation to check for prime numbers up to a threshold n
int main()
{
                int n=1000;
                SmartPrimes(n);
}
