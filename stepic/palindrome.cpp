// sting in C++ training stepik

#include <iostream>
#include <string>
using namespace std;

int main() {
    int mark = 0;
    string s; 
    string temp_s;
    cin >> s;
    temp_s = s;
    int ssize = s.length();
    int n = ssize;
    ssize = ssize - 1;
        for (int i = 0; i < n; i++){
            temp_s[i] = s[ssize];
            ssize--;
        }
        for (int i = 0; i < n; i++){
            if (temp_s[i] != s[i]){
                mark = 1;
                cout << "No";
                return 0;
            } else {
                mark = 0;
            }
        }
        
        //output answer
        if(mark == 0) {
        cout << "Yes";
        }
        return 0; 
}
