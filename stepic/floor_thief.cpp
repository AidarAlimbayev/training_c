#include <iostream>
using namespace std;

int n, n_old, i_old, m;
int i = 0;
int i_answer = 0;


int rec_sum(){
    if (n_old >= 0){
        i++;
        i_answer = i;
        i_old = i_old + i;
        
        rec_sum();
    } else {
        return i_answer;
    }
}

int main (){
    cin >> n;
    n = n_old;
    if (n == 1 || n == 2){
       cout <<  1;
    }else if (n == 4 || n == 3){
        cout <<  2;
    }
    m = rec_sum();
    cout << m << endl;
    return 0;
}