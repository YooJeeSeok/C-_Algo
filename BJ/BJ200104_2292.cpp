#include <iostream>

using namespace std;

int bee(int input){
    int n = 1;
    int num;

    while(true)
    {
        num = 3 * n * (n - 1) + 1;
        if(input <= num)
            return n;

        n++;
    }
    return -1;
    
}
int main()
{
    int input;

    cin >> input ;

    cout << bee(input)<< endl;
    
    return 0;
}