// 오답사유 : for(int j = 0; j <= sqrt(i); j++) 와
// for(int j = 0; j < sqrt(i)+1; j++)는 다르다

#include <iostream>
#include <cmath>
#define FOR(x,s,e) for(int (x) = (s); (x) < (e); x++) 

using namespace std;


int main()
{
    int in_start, in_end, p_min;
    long long p_sum;
    int check;

    p_sum = 0;
    p_min = -1;

    cin >> in_start >> in_end;

    FOR(i,in_start,in_end+1)
    {
        check = 1;
        if(i < 2)
            continue;
        for(int j = 2; j <= sqrt(i); j++)
        {
            if(i % j == 0)
            {
                check = 0;
                break;
            }
        }
        if(check)
        {
            p_sum += i;
            if(p_min == -1)
                p_min = i;
            if(i < p_min)
                p_min = i;
        }
    }

    if(p_min == -1)
        cout << p_min;
    else
        cout << p_sum << endl << p_min;
    
    return 0;
}