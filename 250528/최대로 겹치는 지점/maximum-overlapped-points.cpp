#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];
int offset = 100;
int arr[200];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    for(int i = 0; i < n; i++){
        int start = x1[i] + offset;
        int end = x2[i] + offset;
        for(int j = start; j <= end; j++){
            arr[j]++;
        }
    }

    int max = 0;
    for(int i = 0; i < 200; i++){
        if(max < arr[i]) max = arr[i];
    }

    cout << max;

    return 0;
}