#include<iostream>
#include<math.h>
	using namespace std;

	void main() {
		int puz[10];
		for (int i = 0; i < 10; i++) {
			puz[i] = rand() % 10;
		}
		for (int i = 0; i < 10; i++) {
			cout << puz[i] << " ";
		}
		cout << endl;
		for (int i = 0; i < 10; i++) {
			for (int ii = 0; ii < 9; ii++) {
				if (puz[i] < puz[ii]) {
					int	a = puz[i];
					puz[i] = puz[ii];
					puz[ii] = a;
				}
			}
		}
		for (int i = 0; i < 10; i++) {
			cout << puz[i] << " ";
		}
		system("pause");
		int mat[5][5];
		int max = -32768;
		int min = 32767;
		int p, pp, ppp, pppp;

		for (int i = 0; i < 5; i++) {
			for (int ii = 0; ii < 5; ii++) {
				mat[i][ii] = rand() % 15;
				cout << mat[i][ii] << " ";
			}
			cout << endl;
		}
		cout << endl;
		for (int i = 0; i < 5; i++) {
			for (int ii = 0; ii < 5; ii++) {
				if (mat[i][ii] < min) {
					min = mat[i][ii];
					p = i;
					pp = ii;
				}
				if (mat[i][ii] > max) {
					max = mat[i][ii];
					ppp = i;
					pppp = ii;
				}
			}
		}
		mat[p][pp] = max;
		mat[ppp][pppp] = min;
		for (int i = 0; i < 5; i++) {
			for (int ii = 0; ii < 5; ii++) {
				cout << mat[i][ii] << " ";
			}
			cout << endl;
		}


		system("pause");
	}
