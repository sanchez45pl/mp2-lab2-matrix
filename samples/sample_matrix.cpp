
#include <iostream>
#include "utmatrix.h"
//---------------------------------------------------------------------------

void main()
{
	size_t size;

	cout << "Input size of upper triangular matrices: ";
	cin >> size;
		
	TMatrix<int> A(size), B(size);

	cout << "For example: \n 1 2 3\n 0 4 5\n 0 0 6" << endl;
	cout << "Was inputed as 1 2 3 4 5 6" << endl;

	cout << "Input first upper triangular matrix:" << endl;
	cin >> A;
	cout << "Input second upper triangular matrix:" << endl;
	cin >> B;

	TMatrix<int> C = A + B, D = A - B;
	cout << "Matrix A + B:" << endl << C << endl;
	cout << "Matrix A - B:" << endl << D << endl;
}
//---------------------------------------------------------------------------
