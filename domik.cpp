#include <iostream>
#include <stdlib.h>  // rand(), srand()
#include <windows.h> // time()
#include <math.h>    // библиотека матеши
#include <time.h>
using namespace std;

int main()
{
	setlocale(0, "");
	//system("color B5");

	int size = 20;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i + j == size - 1 || i == j) {
				if (i < j || i == j && i + j < size) {
					cout << "     ";
				}
				else {
					cout << "|###|";
				}
			}
			else {
				cout << "     ";
			}
		}
		cout << "\n";
	}
		for (int i1 = 0; i1 < size; i1++) {
			for (int j1 = 0; j1 < size; j1++){
			
				cout << "|###|";
				
		}
		cout << endl;
	    }
}
