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
	int array_fill[n][m];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			array_fill[i][j] = 0;

		}
	}

	printf("test burnt\n");

	
    // int d, s, a, w;
    // s = a = w = 0;
    // d = 1;
    // int finish = 1;


    // while(finish != 0){
    // if(d == 1){
    //     for (int i = 0; i < n; i++) {
    //         for (int j = 0; j < m; j++) {
    //             counter++;
	// 			array_fill[i][j] = counter;
    //         }
    // //     d = 0;
    // //     s = 1;
    // //     }
    // // } else if (s == 1){
    // //     for (int j = 0; j < m; j++) {
    // //         for (int i = 0; i < n; i++) {
    // //             counter++;
	// // 			array_fill[i][j] = counter;
    // }

    // finish = 0;
    // } 
    
	// заполнение
    for (int j = 0; j < n; j++) {
		for (int i = 0; i < m; i++) {
	                counter++;
				array_fill[i][j] = counter;
          
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