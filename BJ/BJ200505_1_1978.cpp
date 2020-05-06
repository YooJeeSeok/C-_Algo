#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    int t, cnt, num;
    bool check;

    cnt = 0;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        check = true;
        
        cin >> num;

        if(num == 1)
            continue;

        for(int j = 2; j <= sqrt(num); j++)
        {
            if(num%j==0)
            {   
                check = false;
                break;
            }
        }
        if(check)
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}