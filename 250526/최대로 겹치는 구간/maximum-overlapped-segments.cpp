#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }
    int checked[100] = {0};
    int num = n;
    while(num > 0){
        int index = 0;
        for(int i = x1[index]; i < x2[index]; i++){
            checked[i]++;
        }
        index++;
        num--;
    }

    int max = 0;
    for(int i = 0; i < 100; i++){
        if(max < checked[i]) max = checked[i];
    }

    cout << max;
    
    return 0;
}