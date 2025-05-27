#include <iostream>

using namespace std;

int n;
int offset = 100;
int x, y;

int main() {
    cin >> n;
    int arr[200] = {0};

    for(int i = 0; i < n; i++){
        cin >> x >> y;
        int start = x + offset;
        int end = y + offset - 1;

        for(int j = start; j < end; j++){
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