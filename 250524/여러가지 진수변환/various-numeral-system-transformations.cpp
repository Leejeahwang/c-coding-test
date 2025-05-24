#include <iostream>
#include <stack>

using namespace std;

int N, B;

int main() {
    cin >> N >> B;

    stack<int> num;

    while(N > 0){
        num.push(N % B);
        N /= B;
    }
    
    while(!num.empty()){
        cout << num.top();
        num.pop();
    }
    // for(int j = 0; j < 100; j++){
    //     cout << num[i];
    // }

    return 0;
}