#include "intarray.h"
#include "Exceptions.h"
#include <exception>
#include <iostream>
#pragma

using namespace std;

IntegerArray::IntegerArray(int M_len)
{
	m_len = M_len;
	try
	{
		m_data = new int[m_len];
	}
	catch (bad_alloc& m_data)
	{
		cout << "bad_alloc caught!" << endl;
	}
}

IntegerArray::~IntegerArray()
{
	delete[]m_data;
}

void IntegerArray::FillZero()
{
	for (int i = 0; i < m_len; i++)
	{
		m_data[i] = 0;
	}
}

void IntegerArray::ShowArray()
{
	for (int i = 0; i < m_len; i++)
	{
		cout << m_data[i] << endl;
	}
}

void IntegerArray::cpyArray(int* cpy_data)
{
	for (int i = 0; i < m_len; i++)
	{
		m_data[i] = cpy_data[i];
		if (!cpy_data[i + 1])
		{
			break;
		}
	}
}

void IntegerArray::PasteBefore(int a)
{
	if (m_data[m_len - 1] != 0)
	{
		throw bad_length();
	}
	if (a < -2147483647 || a > 2147483646)
	{
		throw bad_value();
	}
	int i = m_len - 1;
	while (i > 0)
	{
		m_data[i] = m_data[i - 1];
		i--;
	}
	m_data[0] = a;
}

void IntegerArray::PasteAfter(int a)
{
	if (m_data[m_len - 1] != 0)
	{
		throw bad_length();
	}
	if (a < -2147483648 || a > 2147483647)
	{
		throw bad_value();
	}
	m_data[m_len - 1] = a;
}

void IntegerArray::getByIndex(int i)
{
	if (i >= m_len || i < 0)
	{
		throw bad_range();
	}
	cout << m_data[i] << endl;
}

void IntegerArray::ChangeSize(int new_len)
{
	if (new_len < m_len || new_len < 0)
	{
		throw bad_length();
	}
	if (new_len > 2147483646)
	{
		throw bad_length();
	}
	try
	{
		int* new_data = new int[new_len];
	}
	catch (bad_alloc& new_data)
	{
		cout << "bad_alloc caught!" << endl;
	}
	int* new_data = new int[new_len];
	int i = 0;
	while (i < m_len)
	{
		new_data[i] = m_data[i];
		i++;
	}
	delete[] m_data;
	while (i < new_len)
	{
		new_data[i] = 0;
		i++;
	}
	
	m_len = new_len;
	m_data = new_data;
}

void IntegerArray::PasteByIndex(int i, int a)
{
	if (a < -2147483647 || a > 2147483646)
	{
		throw bad_value();
	}
	if (i >= m_len || i < 0)
	{
		throw bad_range();
	}
	m_data[i] = a;
}

int IntegerArray::GetByValue(int a)
{
	if (a < -2147483647 || a > 2147483646)
	{
		throw bad_value();
	}
	for (int i = 0; i < m_len; i++)
	{
		if (m_data[i] == a)
		{
			cout << "Index: " << i << endl;
			return 0;
		}
	}
	cout << "Array doesn't have this value!" <<  endl;
	return 0;
}

void IntegerArray::DeleteByIndex(int i)
{
	if (i >= m_len || i < 0)
	{
		throw bad_range();
	}
	m_data[i] = NULL;
}

int IntegerArray::DeleteByValue(int a)
{
	if (a < -2147483647 || a > 2147483646)
	{
		throw bad_value();
	}
	for (int i = 0; i < m_len; i++)
	{
		if (m_data[i] == a)
		{
			cout << "Index being delete: " << i << endl;
			m_data[i] = NULL;
			return 0;
		}
	}
	cout << "Array doesn't have this value!" << endl;
	return 0;
}