//[21BSA10113] Q5

#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
	char string[100];
  	cout<<"Enter the string : ";
	cin >> string;
	char temp;
	int i, j;
	int n = strlen(string);
	for (i = 0; i < n-1; i++) {
		for (j = i+1; j < n; j++) {
			if (string[i] > string[j]) {
				temp = string[i];
				string[i] = string[j];
				string[j] = temp;
			}
		}	
	}

	cout << "sorted string is :" << string;
	return 0;
}