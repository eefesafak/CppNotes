#include <iostream>
using namespace std;

int main()
{
	// differences about const in c and c++
	// const int x; no error in C
	// const int x; syntax error in c++

//---------------------------
	
	//int x = 10;
	//int y = 20;
	//int* const p = &x; // const pointer- top level const
	//*p = 45; // true
	//p = &y; // false

//---------------------------

	// int x = 10;
	// int y = 20;
	// int* p = &x; // low level const (pointer to const int)
	// *p = 56; //false
	// p = &y; // no error

//---------------------------
	
	//int* const p; error
	//const int* p; no error

//---------------------------

	
	return 0;
}