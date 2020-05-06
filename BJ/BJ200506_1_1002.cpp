#include <iostream>
#include <cmath>

#define FOR(i,s,e) for(int (i)=(s); (i)<(e);(i)++)
using namespace std;

inline void SWAP(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t, res;
    int x1,y1,r1;
    int x2,y2,r2;
    double d;

    cin >> t;

    FOR(i,0,t)
    {
        cin >> x1 >> y1 >> r1;
        cin >> x2 >> y2 >> r2;
        if (r1 > r2)
        {
            SWAP(&r1, &r2);
        }
        d = sqrt(pow((x1-x2), 2) + pow((y1-y2), 2));
         
        if (d <= r2) {
            // 동일원
            if (x1 == x2 && y1 == y2 && r1 == r2)
                res = -1;
            // 한 점
            else if (r1 + d == r2)
                res = 1;
            // 두 점
            else if (r1 + d > r2) 
                res = 2;
            // 만나지 않음
            else if (r1 + d < r2) 
                res = 0;
        } 
        else {
            // 만나지 않음
            if (r1 + r2 < d)
                res = 0;
            // 두 점
            else if (r1 + r2 > d)
                res = 2;
            // 한 점
            else if (r1 + r2 == d)
                res = 1;
        }
        cout << res << '\n';
    }
    return 0;
}