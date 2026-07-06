#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    getline(cin >> ws, text);
    cout << text.length();
    return 0;
}