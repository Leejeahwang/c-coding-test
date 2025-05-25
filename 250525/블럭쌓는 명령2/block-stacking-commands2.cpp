#include <iostream>

using namespace std;

int N, K;
int A[100], B[100];

int main() {
    cin >> N >> K;

    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];
    }

    int cleaned[100] = {0};

    for(int i = 0; i < K; i++){
        for(int j = A[i]; j <= B[i]; j++){
            cleaned[j]++;
        }
    }

    int max = 0;
    for(int i = 0; i < N; i++){
        if(max < cleaned[i]) max = cleaned[i];
    }

    cout << max;

    return 0;
}