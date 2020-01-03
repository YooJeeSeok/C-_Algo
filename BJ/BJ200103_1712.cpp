#include<iostream>

using namespace std;

int main(){
    int fix, var, sell;
    int x;
    
    cin >> fix >> var >> sell;

   
    if (sell <= var)
        x = -1;
    else
        x = fix / (sell - var) + 1;

    cout << x << endl;

    return 0;
}