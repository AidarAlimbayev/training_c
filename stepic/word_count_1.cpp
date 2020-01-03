#include <iostream>
#include <string>

using namespace std;

int main()
{
string s;
getline(cin , s) ; 
int counter = 0;
int max_word = -1;
int len = s.length(); 
string max = " ";
string counter_word = " ";

for (int i = 0; i < len; i++) {
    if(s[i] != ' ') {
        counter++;
    }
        if(s[i] == ' ' || i == len - 1) {
            if(counter > max_word)
                {
                max_word = counter;
                if (i == len - 1) {
                    max = s.substr(i + 1 - max_word, max_word); 
                } else {
                    max = s.substr(i - max_word, max_word);
                }
                counter = 0;
            }
        }
}
    cout << max;
    return 0;
}