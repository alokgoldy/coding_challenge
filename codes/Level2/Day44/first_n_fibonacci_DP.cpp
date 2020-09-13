// first n fibonacci number

vector<long long> printFibb(int n) {
    vector<long long> v;
    
    for(long long i=0;i<n;i++)
    {
        if(i==1||i==0)
        v.push_back(1);
        else
        {long long k=v[i-1]+v[i-2];
        v.push_back(k);}
    }
    return v;