// sting in C++ training stepik

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string s;
    int i, space = 0;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                space++;
            }         
        //cout << s[i] << endl;
    }
    cout << space + 1 << endl;
    //cout << s.size() << endl;
    return 0; 
}
