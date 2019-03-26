#include<iostream>
#include<math.h>
using namespace std;

void main() {
	cout << "Hello world!" << endl;
	int a, b, c, x1, x2, d;
	cout << "ax^2+bx+c=0" << endl;
	cout << "a = ";
	cin >> a;
	cout << endl;
	cout << "b = ";
	cin >> b;
	cout << endl;
	cout << "c = ";
	cin >> c;
	cout << endl;
	d = sqrt(b*b - 4 * a*c);
	if (d > 0) {
		x1 = (b*(-1) - d) / 2 * a;
		x2 = (b*(-1) + d) / 2 * a;
		cout << "X1 = " << x1 << " " << "X2 = " << x2 << endl;
	}
	else if (d == 0) {
		x1 = (b*-1) / (2 * a);
		cout << "X = " << x1 << endl;
	}
	else {
		cout << "Net korney" << endl;
	}
	system("pause");
	int ar[10];
	x1 = 0;

	for (int i = 0; i < 10; i++) {
		ar[i] = rand() % 10;
		cout << ar[i] << " ";
	}
	cout << endl;
	x2 = ar[1];
	for (int i = 0; i < 10; i++) {
		x1 += ar[i];
		x2 *= ar[i];
	}
	cout << x1 << " " << x2 << endl;
	system("pause");
}
#include<iostream>
#include<math.h>
	using namespace std;
	void main() {

	int j = 0;
	int k = 0;
	char aa[100] = { 0 };
	cout << "Vvedite stroky: ";
	cin.getline(aa, 100);
	if (aa[0] == ' ') {
		cout << "Vvedite stroky: ";
		cin.getline(aa, 100);
	}
	for (int i = 0; i < strlen(aa) - 1; i++) {
		if ((aa[i] == ' ') && (aa[i + 1] != '.') && (aa[i - 1] != ' ')) {
			j++;

		}
		k = i;
	}
	if ((aa[k - 1] != ' ') || (aa[k - 1] != '.'))
		j++;
	cout << j << endl;
	system("pause");
}
