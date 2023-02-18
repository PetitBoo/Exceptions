#include "intarray.h"
#include "Exceptions.h"
#include <exception>
#include <iostream>

using namespace std;

int main()
{
	IntegerArray *arr = new IntegerArray(5);
	
	IntegerArray* big = new IntegerArray(4000000000);

	arr->FillZero();
	try
	{
		arr->PasteByIndex(0, 1);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	try
	{
		arr->PasteByIndex(1, 2);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	try
	{
		arr->PasteByIndex(2, 3);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	try
	{
		arr->PasteByIndex(3, 4);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	try
	{
		arr->PasteByIndex(4, 0);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	try
	{
		arr->PasteByIndex(4, -2147483648);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	try
	{
		arr->ChangeSize(3);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	try
	{
		arr->ChangeSize(6);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	try
	{
		arr->ChangeSize(-1);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	try
	{
		arr->ChangeSize(4000000000);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	try
	{
		arr->PasteBefore(2);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	try
	{
		arr->PasteAfter(10);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	try
	{
		arr->PasteAfter(10);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	try
	{
		arr->getByIndex(1);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	try
	{
		arr->getByIndex(10);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	try
	{
		arr->GetByValue(3);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	try
	{
		arr->GetByValue(100);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	try
	{
		arr->GetByValue(2147483647);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	try
	{
		arr->DeleteByIndex(0);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	try
	{
		arr->DeleteByIndex(-2);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	try
	{
		arr->DeleteByIndex(7);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	try
	{
		arr->DeleteByValue(10);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	try
	{
		arr->DeleteByValue(2147483647);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	arr->ShowArray();

	delete arr;
		
	return 0;
}