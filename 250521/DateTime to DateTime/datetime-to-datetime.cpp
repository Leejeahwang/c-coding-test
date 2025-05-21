#include <iostream>

using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;

    int end = c + b * 60 + a * 24 * 60;

    int sum = end - (11 + 11 * 60 + 11 * 24 * 60);

    if(sum < 0) cout << -1;
    else cout << sum;

    return 0;
}