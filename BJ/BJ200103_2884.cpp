#include <iostream>

using namespace std;
int main(){
    int h,m;

    cin >> h >> m;

    if(m > 44)
        cout << h << " " << (m-45) << endl;
    else{
        h = (h + 24 - 1) % 24;
        m = (m + 15) % 60;

        cout << h << " " << m << endl;
    }
    return 0;
}