#include <iostream>
using namespace std;
int n;
int i;


void func(){
    if (n == 1){
        cout << 1;
    } else if (n == 4){
        cout << 2;    
    }else if (n >= i){
        i++;
        
        func();
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