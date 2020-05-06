#include <iostream>
#include <iomanip>
#include <cmath>


# define MAX(a,b) (((a) > (b)) ? (a) : (b))
# define MIN(a,b) (((a) < (b)) ? (a) : (b))
# define FOR(x,s,e) for(int (x) = (s); (x) < (e); (x)++)

using namespace std;

template<typename T>

inline void SWAP(T &a, T &b)
{
    do
    {
        T temp = a;
        a = b;
        b = temp;
    }while(0);
}

int main()
{
    int t,x,y;
    int i, diff, res, diff_sq;
    int mid_res;
    cin >> t;

    FOR(i,0,t)
    {
        cin >> x >> y;
        diff = y - x;
        diff_sq = sqrt(diff);

        if(diff_sq * diff_sq == diff)
            res = diff_sq * 2 - 1;
        else
        {
            mid_res = diff_sq * diff_sq + diff_sq;
            if(diff <= mid_res)
                res = diff_sq * 2;
            else
                res = diff_sq * 2 + 1;
            
        }
        

        cout << res << endl;
    }

    return 0;
}