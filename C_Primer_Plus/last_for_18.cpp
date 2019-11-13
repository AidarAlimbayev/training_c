#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
	//setlocale(LC_ALL, "");
	int n, m;
	int counter = 0;
    int counter2 = 0;
	cin >> n >> m;

	// ввод
	int array_fill[30][30];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			array_fill[i][j] = 0;
		}
	}

	// заполнение
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
		    if (((i + j) % 2) == 0 ) {
                counter++;
				array_fill[i][j] = counter;
            } else {
                array_fill[i][j] = 0;
            }
        }
	}
	
	// вывод
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			//std::cout.width(2); std::cout << array_fill[i][j];
			cout << setw(3) << array_fill[i][j] << " ";
			//printf(" %4d", array_fill[i][j]);
			//printf(" %4d", array_fill[i][j]);
		}
		cout << endl;
	}
	return 0;
}