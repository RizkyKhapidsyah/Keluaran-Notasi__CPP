#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main() {
	cout << "Penggunaan ios::scientific dan ios::fixed" << endl;
	cout << "\nHasil ios::scientific dari 75.45 adalah ";
	cout << setiosflags(ios::scientific) << 75.45 << endl;
	cout << "Hasil ios::fixed dari 56.65 adalah ";
	cout << setiosflags(ios::fixed) << 56.65;

	_getch();
	return 0;
}