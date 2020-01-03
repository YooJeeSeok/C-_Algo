#include <iostream>
#define N 1001

bool arr[N];
using namespace std;

bool oneNum(int n){
    if(n < 100)
        return true;
    else
    {
        int dif;
        int post, prev;

        prev = n%10;
        n /= 10;
        post = n%10;
        dif = post - prev;
        while(n>=10){
            
            prev = post;
            n /= 10;
            post = n%10;
            
            if(post - prev != dif) 
                return false;
        }
        return true;
    }
    
}
int main(){
    int n;
    int sum = 0;
    cin >> n;
    
    for(int i = 1; i<= n; i++){
        if(oneNum(i)) sum += 1;
    }

    cout << sum << endl;

    return 0;
}