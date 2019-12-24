// a^n = (a2)n/2 when n%2 = 0;
// a^n = a × a^n−1 when n%2 != 0;

#include <iostream>
//#include <cmath>
using namespace std;

double power(double p, int m){
    if (m == 0) {
        return 1;
    }else if ((m % 2) != 0){
        return p * power(p, m-1);
    }
    else 
    return power(power(p, 2), (m/2));
}

int main(){
	double a;
    int n;
	cin >> a >> n;
    cout << power(a, n);
	return 0;
}