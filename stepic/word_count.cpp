// word counter

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string s;
    string next_word;
    string max_word;
    int i, n = 0;
    cin >> next_word;
    while(EOF){
        if (next_word > max_word){
            max_word = next_word;
            cout << max_word << endl;
        }

    }
    s = s + ' ';
    
    return 0; 
}