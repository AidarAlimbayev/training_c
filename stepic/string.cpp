// sting in C++ training stepik

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int i;
    getline(cin, s);
    for (auto c : s) {
            if (c == ' ') {
                i++;
            }         
    }
    int space = i + 1;
    cout << space;
    return 0; 
}

/*
// sting in C++ training stepik

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    getline(cin, s);
    for (int i = 0 ; i < n; i++){
        getline(cin, s);
        string s2 = "";
        for (auto c : s){ // for upper case
            if (c >= 'a' & c <= 'z') {
                int al_num = c - 'a';
                s2 += 'A' + al_num;
            }
            else {
                s2 += c;
            }
        }
        if (s2.find('RKPT') != -1){ // finding need string
            for (auto c : s2) 
            {   
                if (c >= '0' && c <= '9'){
                    cout << c;
                }
            }
        }
    }
    return 0; 
}

*/