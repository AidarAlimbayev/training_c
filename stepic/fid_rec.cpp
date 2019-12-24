#include <iostream>
using namespace std;
int n, n_old, i;

void fib(){
    cin >> n;
    if (n != 0){
      n_old = n + n_old;
      fib();
    } else {
      cout << n_old;
    }
}

int main() 
{
  fib();
  return 0;
}