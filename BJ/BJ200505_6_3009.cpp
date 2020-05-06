#include <iostream>
#include <cmath>

#define FOR(i,s,e) for{int (i)=(s); (i)<(e); (i)++}
# define M_PI           3.14159265358979323846 
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    double res_euc,res_pi;
    
    cin >> n;

    res_pi = n * n * M_PI;
    res_euc = n * n * 2;

    cout << fixed;
    cout.precision(6);

    cout << res_pi << '\n' << res_euc;

    return 0;
}