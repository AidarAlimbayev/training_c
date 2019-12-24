#include <iostream>
using namespace std;
int n, n_old;

void summa(){
    cin >> n;
    if (n != 0){
      n_old = n + n_old;
      summa();
    } else {
      cout << n_old;
    }
}

int main() 
{
  summa();
  return 0;
}