#include "Array.h"
#include <float.h>
MyArray::MyArray(int size)
{
	this->arr = new double[size];
	this->size = size;
}
MyArray::MyArray(const MyArray& other)
{
	this->size = other.size;
	this->arr = new double[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = other.arr[i];
	}
}
MyArray::~MyArray()
{
	delete[] arr;
}
int MyArray::GetSize()
{
	return this->size;
}
double MyArray::Arithmetic_mean()
{
	double sum = 0;
	for (int i = 0; i < this->size; i++)
	{
		sum += this->arr[i];
	}
	return sum / this->size;
}
double MyArray::min()
{
	double min = DBL_MAX ;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
double MyArray::max()
{
	double max = DBL_MIN;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
void MyArray::DownScaleSelectionSort()
{
	for (int i = 0; i < size; i++)
	{
		double max = DBL_MIN;
		int argmax = 0;
		for (int j = i ; j < size; j++)
		{
			if (arr[j] > max)
			{
				max = arr[j];
				argmax = j;
			}
		}
		arr[argmax] = arr[i];
		arr[i] = max;
	}
}
void MyArray::UpScaleBubbleSort()
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				double temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
bool MyArray::ChangeSize( int new_size)
{
	if (this->size == new_size) return true;
	double* temp = new double[new_size];
	if (temp)
	{
		delete[] this->arr;
		this->arr = temp;
		this->size = new_size;
		return true;
	}
	return false;
}
int smax(int a, int b) 
{ 
	if (a >= b) return a;
	return b;
}
int smin(int a, int b)
{
	if (a >= b) return b;
	return a;
}
MyArray MyArray::operator+(MyArray& a)
{
	MyArray temp(smax(this->size, a.size));
	int k = smin(this->size, a.size);
	for (int i = 0; i < k; i++)
	{
		temp.arr[i] = this->arr[i] + a.arr[i];
	}
	for ( int i = k ; i < smax(this->size, a.size) ; i ++)
	{
		if (this->size > a.size) temp.arr[i] = this->arr[i];
		else temp.arr[i] = a.arr[i];
	}
	return temp;
}
MyArray MyArray::operator*(MyArray& a)
{
	MyArray temp(smax(this->size, a.size));
	int k = smin(this->size, a.size);
	for (int i = 0; i < k; i++)
	{
		temp.arr[i] = this->arr[i] * a.arr[i];
	}
	for (int i = k; i < smax(this->size, a.size); i++)
	{
		if (this->size > a.size) temp.arr[i] = this->arr[i];
		else temp.arr[i] = a.arr[i];
	}
	return temp;
}
MyArray MyArray::operator-(MyArray& a)
{
	MyArray temp(smax(this->size, a.size));
	int k = smin(this->size, a.size);
	for (int i = 0; i < k; i++)
	{
		temp.arr[i] = this->arr[i] - a.arr[i];
	}
	for (int i = k; i < smax(this->size, a.size); i++)
	{
		if (this->size > a.size) temp.arr[i] = this->arr[i];
		else temp.arr[i] = -a.arr[i];
	}
	return temp;
}
MyArray MyArray::operator* (double b)
{
	MyArray temp(this->size);
	for (int i = 0; i < this->size; i++)
	{
		temp.arr[i] = this->arr[i] * b;
	}
	return temp;
}

void MyArray::operator>> (System::Windows::Forms::DataGridView^ dg)
{
	this->ChangeSize(dg->RowCount - 1);
	for (int i = 0; i < this->size; i++)
	{
		this->arr[i] = System::Convert::ToDouble(dg->Rows[i]->Cells[0]->Value);
	}
}
void MyArray::operator<<(System::Windows::Forms::DataGridView^ dg)
{
	dg->RowCount = this->size + 1;
	for (int i = 0; i < this->size; i++)
	{
		dg->Rows[i]->Cells[0]->Value = this->arr[i];
	}
}
