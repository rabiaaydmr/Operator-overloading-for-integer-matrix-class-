#include<iostream>
#include <sstream>
#include <string>
//#include  your header file here
//do not change anything else

using namespace std;

void printByCopy(Matrix copy) {
	copy.print();
}

void fillMatrix(Matrix & mat) {
	for (int i = 0; i < mat.getRowNumber(); i++) {
		for (int j = 0; j < mat.getColumnNumber(); j++) {
			mat.setElementAt(i, j, (i + j + 1)*mat.getElementAt(i,j));
		}
	}
}

int main()
{
	//get matrices
	int row, column, init;
	cout << "Please enter the row number of Matrix m1:" << endl;
	cin >> row;
	cout << "Please enter the column number of Matrix m1:" << endl;
	cin >> column;
	cout << "Please enter the init value of Matrix m1:" << endl;
	cin >> init;
	cout << endl;
	Matrix m1(row, column, init);
	fillMatrix(m1);
	cout << "Matrix m1:" << endl;
	printByCopy(m1);
	cout << endl;

	cout << "Please enter the row number of Matrix m2:" << endl;
	cin >> row;
	cout << "Please enter the column number of Matrix m2:" << endl;
	cin >> column;
	cout << "Please enter the init value of Matrix m2:" << endl;
	cin >> init;
	cout << endl;
	Matrix m2(row, column, init);
	fillMatrix(m2);
	cout << "Matrix m2:" << endl;
	printByCopy(m2);
	cout << endl;

	cout << "Please enter the row number of Matrix m3:" << endl;
	cin >> row;
	cout << "Please enter the column number of Matrix m3:" << endl;
	cin >> column;
	cout << "Please enter the init value of Matrix m3:" << endl;
	cin >> init;
	cout << endl;
	Matrix m3(row, column, init);
	fillMatrix(m3);
	cout << "Matrix m3:" << endl;
	printByCopy(m3);
	cout << endl;

	//assigment example
	Matrix m4;
	m4 = m3;
	cout << "Matrix m4:" << endl;
	printByCopy(m4);
	cout << endl;

	//equals example
	if (m1 == m2) {
		cout << "m1 is equal to m2." << endl;
		cout << endl;
	}
	else {
		cout << "m1 is not equal to m2." << endl;
		cout << endl;
	}

	//addition example
	cout << "m3 = m1 + m2 + m1:" << endl;
	if (m1.getColumnNumber()== m2.getColumnNumber() && m1.getRowNumber() == m2.getRowNumber()) {
		m3 = m1 + m2 + m1;
		m3.print();
		cout << endl;
	}
	else {
		cout << "Matrix m1 and m2 do not have the same dimensions. Cannot be added." << endl;
		cout << endl;
	}

	//substraction example
	cout << "m4 = m2 - m1 - m2:" << endl;
	if (m1.getColumnNumber() == m2.getColumnNumber() && m1.getRowNumber() == m2.getRowNumber()) {
		m4 = m2 - m1 - m2;
		m4.print();
		cout << endl;
	}
	else {
		cout << "Matrix m1 and m2 do not have the same dimensions. Cannot be subtracted." << endl;
		cout << endl;
	}

	//transpose example
	cout << "Transpose of m3:" << endl;
	m3 = !m3;
	m3.print();
	cout << endl;

	//cascaded assignment
	cout << "Assigning m4 = m2 = m3." << endl;
	m4 = m2 = m3;
	cout << "Matrix m4:" << endl;
	m4.print();
	cout << endl;
	cout << "Matrix m2:" << endl;
	m2.print();
	cout << endl;
	cout << "Matrix m3:" << endl;
	m3.print();
	cout << endl;


	cin.get();
	cin.ignore();
	return 0;
}