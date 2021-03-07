//*****************
//Program Name: Lab 7-1 (Simple Cryptography)
//Author: Caleb Clements
//IDE Used: Visual Studio
//Program description: Writing a simple program that encrypts text to a textfile 
// named through user input.
//*****************
#include <iostream>
#include <map>
using namespace std;

void plagiarismReq();

const int SIZE = 26;


int main()
{
	map<string, string> Encrypt;
	map<string, string> Decrypt;



	plagiarismReq();
	return 0;
}

//plagiarismReq(): Displays required text for plagiarism requirement in this course.
//Arguments: None | Returns: None
void plagiarismReq()
{
	cout << "This is my original work; apart from standard tutoring or class collaboration, "
		<< "I neither received help nor copied this code from another source.";
}