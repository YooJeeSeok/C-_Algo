// while case에 들어가는 것이후에 초기화 할 것

#include <iostream>
#include <cmath>

#define FOR(i,s,e) for(int (i)=(s); (i)<(e);(i)++)

using namespace std;

int IsPrime(int n);
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, cnt;
    
    while(1)
    {
        cnt = 0;
        cin >> n;

        if(n==0)
            break;

        FOR(i,n+1,2*n+1)
        {
            if(IsPrime(i))
                cnt++;    
        }
        cout<<cnt<<'\n';
    }
    
    return 0;
    
}

int IsPrime(int n)
{
    if(n<2)
        return 0;

    for(int i = 2 ; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}