#pragma once
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

// struct declaration
struct github_user
{
	string first_name;
	string user_name;
	string email;
	string password;
	int folder_count;
};

// for comparing usernames
bool comparison(string user_A, github_user user_B)
{
	int len_A = strlen(user_A.c_str());						//length of username
	int len_B = strlen(user_B.user_name.c_str());		// length of username

	bool flag = true;				
	if (len_A == len_B)						//checks if lengths are same then starts comparing
	{
		for (int i = 0; i < len_A && flag == true; i++)
		{

			if (user_A[i] != user_B.user_name[i])					//checks letters index by index
			{
				flag = false;					// flag equals false if not matched
			}
		}
	}
	else
		flag = false;
	return flag;				
}

// same as comparison function with different data types 
bool exists(string user_A, string user_B)
{
	//string temp = user_A.user_name;
	int len_A = strlen(user_A.c_str());			//length of  username
	int len_B = strlen(user_B.c_str());			//length of  username

	bool flag = true;
	if (len_A == len_B)								//same as i comparison function 
	{
		for (int i = 0; i < len_A && flag == true; i++)
		{

			if (user_A[i] != user_B[i])
			{
				flag = false;
			}
		}
	}
	else
		flag = false;
	return flag;
}

//function for taking input of usernames
void input(github_user * arr, int size)
{
	int flag = 0;
	for (int i = 0; i < size;)
	{
		flag = 0;
		cout << "Enter the user name: " << endl;
		cin >> arr[i].user_name;												// inputs on the array index
		for (int j = 0; j < i && flag == 0; j++)
		{
			flag = (exists(arr[i].user_name, arr[j].user_name));							// checks if the username exists before or not
		}
		if (flag == 1)
		{
			cout << endl << "Already Exists. Enter Again. " << endl;						// if usename already exists, it asks for a re-entry
		}
		else
		{
			cout << endl;
			i++;							// increments only when user doesn't exists already.. i.e. it is a new user
		}
	}
}

//for searching the username in the struct array and returning its address
void search_user(github_user * users, int size, string username)
{
	int flag = 0;
	int index;
	for (int i = 0; i < size && flag == 0; i++)
	{
		if (comparison(username, users[i]) == true)					// with a loop, it compares the username index by index in the array of struct
		{
			flag = true;
			index = i;
		}
	}
	if (flag == 1)
		cout << "User found at address : " << &users[index];
	else
		cout << "Not Found";
}
