// fibonacci bottom up

long long findNthFibonacci(int number)
{
    long long m[number+1];
    m[0]=0;
    m[1]=1;
    
    for(int i=2;i<=number;i++)
    m[i]=m[i-1]+m[i-2];
    
    return m[number];   
}