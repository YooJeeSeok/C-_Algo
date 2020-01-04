#include <iostream>
#define N 10001

using namespace std;
bool arr[N];

int creator(int n){
    int sum = n;

    while(true){
        if(n == 0) break;
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main(){



    for (int i = 0; i < N; i++){
        int idx = creator(i);
        if(idx <= N){
            arr[idx] = true;
        }
    }

    for(int i = 0; i < N; i++){
        if(!arr[i]) cout << i << endl;
    }

    return 0;
}