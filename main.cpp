#include <iostream>

using namespace std;

const int ASCII_VALUES = 256;

//Checks if strings are anagrams of eachother

int main() {
    string input1,input2;
    cin >> input1 >> input2;
    int charCount1[ASCII_VALUES] = {0};
    int charCount2[ASCII_VALUES] = {0};
    bool result = true;
    for (auto i : input1) {
        charCount1[i]++;
    }
    for (auto i : input2) {
        charCount2[i]++;
    }
    for (int i=0; i<ASCII_VALUES; i++) {
        if (charCount1[i] != charCount2[i]) {
            result = false;
            break;
        }
    }
    cout << boolalpha << result << endl;
    return 0;
}