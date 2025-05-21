#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int a = 0;
    for(int i = 1; i <= m2; i++){
        a += num_of_days[i];
    }

    int b = 0;
    for(int i = 1; i <= m1; i++){
        b += num_of_days[i];
    }

    cout << (a+d2) - (b+d1);

    return 0;
}