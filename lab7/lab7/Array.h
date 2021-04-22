#pragma once
class MyArray
{
	double* arr;
	int size;
public:
	int GetSize();
	MyArray(int size);
	MyArray(const MyArray& other);
	~MyArray();
	MyArray& operator= (const MyArray& a);
	double Arithmetic_mean();
	double min();
	double max();
	void DownScaleSelectionSort();
	void UpScaleBubbleSort();
	bool ChangeSize(int new_size); 
	MyArray operator+ (MyArray& a);
	MyArray operator- (MyArray& a);
	MyArray operator* (MyArray& a);
	MyArray operator* (double b);
	void operator<< (System::Windows::Forms::DataGridView^ dg);
	void operator>> (System::Windows::Forms::DataGridView^ dg);
};

