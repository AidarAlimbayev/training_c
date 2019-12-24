#include <iostream>
using namespace std;
unsigned long n, f1 = 0;
int i = 0;
unsigned long f2 = 1;
unsigned long f_new = 0;

void fib(){
    if (n == 1){
        cout << 1;
    } else if (n == 2){
        cout << 1;    
    }else if (n != i){
        //1 1 2 3 5 8
        f_new = f1 + f2;
        f1 = f2;
        f2 = f_new; 
        i++;
        fib();
    } else {
        cout << f_new;
    }
}

int main() 
{
  cin >> n;
  fib();
  return 0;
}