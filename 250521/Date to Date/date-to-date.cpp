#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    int elapsed_days = 0;
    
    //                         1.  2.  3.  4.  5.  6.  7.  8.  9. 10. 11. 12.
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    while(true) {
        if(m1 == m2 && d1 == d2)
            break;
    
        elapsed_days++;
        d1++;
    
        if(d1 > num_of_days[m1]) {
            m1++;
            d1 = 1;
        }
    }
    
    cout << elapsed_days+1;

    return 0;
}