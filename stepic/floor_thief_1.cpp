#include <iostream>
using namespace std;

int i_old, m, n, answer;
int i = 1;

int rec_sum(){
    if (n == 1 || n == 2 || n == 0 || n < 0){ 
        return i;
    } else {
        i++;
        n = n - i;
        rec_sum();
    }
}

int main (){
    cin >> n;
    answer = rec_sum();
    cout << answer << endl;
    return 0;
}