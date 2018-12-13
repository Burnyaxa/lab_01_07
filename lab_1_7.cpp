#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	double b, q;
	int n;
	cout << "b = "; cin >> b;
	cout << "q = "; cin >> q; 
	cout << "n = "; cin >> n;
	double S = (b*(pow(q, n) - 1)) / (q - 1);
	cout << "S = " << S << endl;
	system("pause");
	return 0;

}
