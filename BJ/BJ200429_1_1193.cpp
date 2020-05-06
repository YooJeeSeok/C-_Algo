#include <iostream>
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

int solve(int);

int main()
{
    int dia_e, fra_sum,  mol, deno;
    int n;
    
    cin >> n;
    dia_e = 1;
    fra_sum = 1;
    // 속한 대각선 찾기
    
    while(dia_e <= n)
    {
        dia_e += fra_sum++;
    }
    if(fra_sum%2==1)
    {
        // 홀수면 첫 시작이 분자
        deno = dia_e - n;
        mol = fra_sum - deno;
    }
    else
    {
        mol = dia_e - n;
        deno = fra_sum - mol;
    
    }

    cout<< mol <<"/"<< deno <<endl;
    
    return 0;
}