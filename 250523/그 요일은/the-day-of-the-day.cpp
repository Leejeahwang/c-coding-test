#include <iostream>

using namespace std;

int m1, m2, d1, d2;
string A;

int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int sumday(int month, int day){
    int sum = 0;
    for(int i = 1; i < month; i++){
        sum += num_of_days[i];
    }
    sum += day;
    return sum;
}

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;

    string week[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    int sum = sumday(m2, d2) - sumday(m1, m1);
    int cnt = sum / 7;

    for(int i = 0; i < sum % 7; i++){
        if(A == week[i]) cnt++;
    }

    cout << cnt;
    return 0;
}