#include <iostream>
#include <string>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string week[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    int end = 0;
    for(int i = 1; i < m2; i++){
        end += num_of_days[i];
    }
    end += d2;

    int first = 0;
    for(int i = 1; i < m1; i++){
        first += num_of_days[i];
    }
    first += d1;

    int sum = 0;

    if(end >= first){
        sum = end - first + 1;
        cout << week[(sum + 6) % 7];
    }
    else {
        sum = first - end;
        cout << week[(7 - sum % 7) % 7];
    }

    return 0;
}
