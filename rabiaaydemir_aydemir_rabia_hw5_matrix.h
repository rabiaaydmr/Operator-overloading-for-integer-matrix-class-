#ifndef _RABIAAYDEMIR_AYDEMIR_RABIA_HW5_MATRIX
#define _RABIAAYDEMIR_AYDEMIR_RABIA_HW5_MATRIX

class Matrix
{
	public:
		Matrix(); //default constructor
		Matrix(const Matrix&); // deep copy constructor
		Matrix operator+(const Matrix&); // + overload operator
		Matrix operator-(const Matrix&);// - overload operator
		Matrix(int r,int c,int initial); //constructor with rowNumber,ColumnNumber,initial parameter
		~Matrix();//destructor
		int getRowNumber()const;// return row number
		void print(); // prints the matrix
		int getColumnNumber()const; // return column number
		int getElementAt(int,int)const; // return the element at position
		void setElementAt(int,int,int);// set the element at position
		const Matrix&operator=(const Matrix&);// = overload operator
		bool operator==( const Matrix&);// == overload operator
		Matrix operator!();// ! overload operator
	private:
		int rownumber;
		int columnnumber;
		int **elements;
		void createClone(const Matrix&);
	};


#endif