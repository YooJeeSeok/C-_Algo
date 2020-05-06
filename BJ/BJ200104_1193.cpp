#include <iostream>

using namespace std;

int* fun(int input)
{
    static int arr[2];  // x, y
    int n = 1;
    int num, tmp;
    while(true)
    {
        num = n * (n+1) / 2;
        
        if(input > num) 
            break;
        n++;
    }
    n -= 1;
    num = n * (n+1) / 2;
    tmp = input - num;

    if(n % 2 ==0)
    {
        arr[0] = n - tmp;
        arr[1] = tmp + 1;
    }
    else
    {
        arr[1] = n - tmp;
        arr[0] = tmp + 1;
        
    }
    return arr;
}

int main()
{
    int input;

    // cin >> input;

    int* arr;

    for(int input = 1; input < 15; input++)
    {
        arr = fun(input);
        cout <<arr[0]<<"/"<<arr[1] << endl;
    }
    return 0;
}