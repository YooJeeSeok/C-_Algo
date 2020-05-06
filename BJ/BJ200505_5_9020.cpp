// algorithm은 대회에서 사용 가능
// min_element 라는거 있음 잘 사용하셈;;

#include<iostream>
#include<cmath>
#include<algorithm>
#define FOR(i,s,e) for(int (i)=(s); (i)<(e);(i)++)

using namespace std;

const double PI = 3.141593;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int d[3];
    int check;
    long long pow_d[3];

    while(1)
    {
        check = 1;
        FOR(i,0,3)
        {
            cin >> d[i];
        }

        FOR(i,0,3)
        {
            if(d[i] !=0)
                check = 0;
        }
        if(check)
            break;

        sort(d,d+3);

        FOR(i,0,3)
        {
            pow_d[i] = (long long) d[i] * d[i];
        }

        if(pow_d[0] + pow_d[1] == pow_d[2])
        {
            cout << "right" <<'\n';
        }
        else
        {
            cout << "wrong" <<'\n';
        }
    }
    return 0;
}
