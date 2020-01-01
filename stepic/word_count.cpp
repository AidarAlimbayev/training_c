// word counter

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string s;
    string word_max;
    string word_temp;
    int i, n = 0;
    getline(cin, s);
    s = s + ' ';
    cout << s.size() << endl;
    for (int i = 0; i < s.size(); i++) {
            word_temp[n] = s[i];
            cout << word_temp[n];
            n++;
                if (s[i] == ' ') {
                    n = 0;
                        if (word_temp.size() > word_max.size()){
                            word_max = word_temp;
                        }
                    }
                    //cout << word_max << endl;
                }
    //cout << word_max << endl;
    return 0; 
}