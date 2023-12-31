#include <iostream>
#include <cstring>
using namespace std;

char highestOccurringChar(char input[]) {
    int freq[26] = { 0 };
    int max = -1;
    char result;
    for (int i = 0; i !='\0'; i++)
        freq[input[i]-'a']++;

    for (int i = 0; i < 26; i++)
        if (max < freq[i]) {
            max = freq[i];
            result = (char)(i + 'a');
        }
    return result;
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}