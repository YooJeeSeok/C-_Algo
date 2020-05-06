// 오답사유 : std::endl 과 '\n' 속도차이는 어마어마하다
// 웬만하면 \n 쓰자

#include <iostream>
#include <cmath>

#define FOR(x,s,e) for(int (x) = (s); (x) < (e); x++) 

using namespace std;

const int MAX_SIZE = 1000000 + 1;

// void set_p_nums(int*nums);

int nums[MAX_SIZE];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int in_start, in_end;
    
    
    FOR(i,0,MAX_SIZE)
        nums[i] = i;

    nums[0] = -1;
    nums[1] = -1;

    cin >> in_start >> in_end;

    for(int i = 2; i * i <=MAX_SIZE ;i++)
    {
        if(nums[i] == i)
        {
            for(int j = i * i; j < MAX_SIZE; j+=i)
            {
                nums[j] = i;
            }
        }
    }

    for(int i = in_start ; i <=in_end; i++)
    {
        if(nums[i] == i)
            cout<<i<<'\n';
    }
    
    return 0;
}

