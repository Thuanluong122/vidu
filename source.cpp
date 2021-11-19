#include <iostream>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);

int main()
{
	/*int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;

	cout << "a - b = " << a - b << endl;
	cout << "a + b = " << a + b << endl;*/

	int num;
	cout << "Nhap vao mot so nguyen: ";
	cin >> num;
	if (num % 2 == 0)
		cout << num << " la so chan !! ";
	else
		cout << num << " la so le !!";
	system("pause");
	return 0;
}