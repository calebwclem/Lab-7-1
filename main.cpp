//*****************
//Program Name: Lab 7-1 (Simple Cryptography)
//Author: Caleb Clements
//IDE Used: Visual Studio
//Program description: Writing a simple program that encrypts text to a textfile 
//named through user input.
//*****************
#include <iostream>
#include <map>
#include <fstream>
using namespace std;

void plagiarismReq();
void printMap(map<string, string> m);

const int SIZE = 26;


int main()
{	
	//Initialzie maps for encyrption as well as decryption
	map<string, string> Encrypt;
	map<string, string> Decrypt;

	//Initialize arrays that will be used within the maps
	string Alphabet[SIZE] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K",
		"L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z" };

	string codedAlphabet[SIZE] = { "L", "Y", "%", "8", "9", "Z", "O", "W", "1", "2",
	"7", "5", "3", "B", "A", "M", "B", "C", "Z", "X", "E", "F", "G", "4", "`", "N" };

	//Set the two arrays to be key:value for both maps
	for (int i = 0; i < SIZE; i++)
	{
		Encrypt.emplace(Alphabet[i], codedAlphabet[i]);
		Decrypt.emplace(codedAlphabet[i], Alphabet[i]);
	}
	//printMap(Encrypt);
	//printMap(Decrypt);
	
	//Open file that needs to be read.
	fstream myFile;
	myFile.open("cryptography.txt", ios::in);
	//Ask user for input to name new text file
	cout << "Please give a name for new file:\n";
	cin >> entry;
	//Write the encrypted text to user named text file
	fstream newFile;
	newFile.open(entry, ios::out);

	//Open user named text file

	//Convert text with decryption
	
	//Print decrypted text to the console

	plagiarismReq();
	return 0;
}

void printMap(map<string, string> m)
{
	cout << "Map legend:\n";
	for (auto it : m)
		cout << "Key: " << it.first << " Value: " << it.second << endl;
}

//plagiarismReq(): Displays required text for plagiarism requirement in this course.
//Arguments: None | Returns: None
void plagiarismReq()
{
	cout << "This is my original work; apart from standard tutoring or class collaboration, "
		<< "I neither received help nor copied this code from another source.";
}