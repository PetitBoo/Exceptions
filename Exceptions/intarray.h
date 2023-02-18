#pragma once

class IntegerArray
{
public:
	IntegerArray(int M_len);
	~IntegerArray();
	void FillZero();
	void ShowArray();
	void cpyArray(int* cpy_data);
	void PasteBefore(int a);
	void PasteAfter(int a);
	void getByIndex(int i);
	void ChangeSize(int new_len);
	void PasteByIndex(int i, int a);
	void DeleteByIndex(int i);
	int GetByValue(int a);
	int DeleteByValue(int a);
private:
	int m_len;
	int* m_data;
}; 