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
// =========================================
// basic code 
// =========================================

void set_Mat(int **nums);

int main()
{
    int **nums = new int*[15];
    int i,j;
    int k,n,T;

    FOR(i,0,15)
    {
        nums[i] = new int[15];
    }
    

    set_Mat(nums);

    cin >> T;

    FOR(i,0,T)
    {
        cin>>k;
        cin>>n;
        cout<<nums[k][n-1]<<endl;
    }

    FOR(i,0,14)
    {
        delete [] nums[i];
    }
    delete [] nums;

    return 0;
}

void set_Mat(int **nums)
{
    int i, j, temp;

    FOR(i,0,15)
    {
        nums[0][i] = i+1;
    }

    FOR(i,1,15)
    {
        nums[i][0] = 1;
        FOR(j,1,15)
        {
            nums[i][j] = nums[i][j-1] + nums[i-1][j];
            
        }
    }

}