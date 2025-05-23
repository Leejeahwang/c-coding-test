#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string line;
    cin >> line; // 한 줄 통째로 받음

    vector<int> binary;
    for (char c : line) {
        binary.push_back(c - '0'); // 문자 '1' → 정수 1
    }

    int num = 0;
    for(int i = 0; i < binary.size(); i++){
        num = num * 2 + binary[i];
    }

    cout << num << endl;
    return 0;
}
