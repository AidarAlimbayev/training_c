// a^n = (a2)n/2 when n%2 = 0;
// a^n = a × a^n−1 when n%2 != 0;

#include <iostream>
//#include <cmath>
using namespace std;

double power(double p, int m){
    if (m == 0) {
        return 1;
    }
    if (m > 0){
        return p * power(p, m-1);
    }
    else return 1/p * power(p, m+1);
}


double fs_even_odd(double a, int n){
    if (n == 0) {
        return 1;
    } else if ((n % 2) != 0){
        return a * power(a, n-1);
    } else { 
        return power(power(a, 2), (n/2));
    }
}

int main(){
	double a;
    int n;
	cin >> a >> n;
    cout << fs_even_odd(a, n);
	return 0;
}