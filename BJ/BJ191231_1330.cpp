#include<iostream>

using namespace std;
int main(){

    int a,b;
    string out;
    cin >> a >> b;

    if (a>b) 
        out = ">";
    else if (a<b)
        out = "<";
    else 
        out = "==";

    cout << out << endl;

    return 0;
}