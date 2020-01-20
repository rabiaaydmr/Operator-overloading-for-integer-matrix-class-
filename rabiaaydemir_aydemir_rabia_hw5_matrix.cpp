#include "rabiaaydemir_aydemir_rabia_hw5_matrix.h"
#include <iostream>
using namespace std;

Matrix::Matrix()
{
	rownumber = 0;
	columnnumber = 0;
	elements = NULL ;
}

Matrix::~Matrix()
{
for (int i = 0; i < rownumber; i++)
	{
	delete[] elements[i];
	}
	delete[]elements;
}

Matrix::Matrix(int r, int c, int initial) // constructor
{
	if (r > 0 && c > 0)
	{
		rownumber = r;
		columnnumber = c;
		elements = new int*[r];
		for (int k = 0; k < rownumber; k++)
		{
			elements[k] = new int[columnnumber];
		}
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < columnnumber; j++)
			{
				elements[i][j] = initial;
			}
		}
	}
	else
	{
		rownumber = 0;
		columnnumber = 0;
		elements = NULL;
	}
}


void Matrix::createClone(const Matrix &c)
{
	
	rownumber = c.rownumber;
	columnnumber = c.columnnumber;
	if(c.elements == NULL)
		elements = NULL;
	else
	{
		elements = new int*[rownumber];
		for (int k = 0; k < rownumber; k++)
		{
			elements[k] = new int[columnnumber];
		}
		for(int i = 0; i<rownumber; i++)
		{
			for (int j = 0; j < columnnumber; j++)
			{
				elements[i][j] = c.elements[i][j];
			}
		}
	}
}


Matrix::Matrix(const Matrix &copy) // deep copy constructor; creates a deep copy of the parameter matrix
{
	createClone(copy);
}


int Matrix::getRowNumber() const
{
	return rownumber;
}

int Matrix::getColumnNumber() const
{
	return columnnumber;
}

int Matrix::getElementAt(int r, int c) const
{
	return elements[r][c];
}

void Matrix::setElementAt(int r,int c,int s)
{
	elements[r][c] = s;
}


