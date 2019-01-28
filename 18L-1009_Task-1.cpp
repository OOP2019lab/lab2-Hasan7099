#include <iostream>
#include <conio.h>
#include <string>
#include "Task-1.h"

//Functions and Structs are in header file

using namespace std;


int main()
{
	github_user * users_array;							//dynamic array
	users_array = new github_user[10];			//size is set to 10
	int temp;

	input(users_array, 3);
	cout << endl;
	search_user(users_array, 3, "hasan");
	_getch();

}