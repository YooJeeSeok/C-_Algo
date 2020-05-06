#include <iostream>

using namespace std;

int sugarCal(int sugar)
{
    int box = 0;
    while(true)
    {
        if(sugar % 5 == 0)
        {
            box += sugar / 5;
            
        }
    }
    return box;
}
int main(){

    int sugar;

    cin >> sugar;

    cout << sugarCal(sugar) << endl;

    return 0;
}