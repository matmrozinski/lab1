#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>


char **charSquare(int n);
void drawCharSquare(char **square, int n);

using namespace std;

int main(int argc, char **argv)
{
	int n;
	drawCharSquare(charSquare(n), n);
}

char **charSquare(int n)
{
	char **square=NULL;
	square= new char*[n];

	for(int i=0;i<n;i++)
	{
		square[i]=new char[n];
	}

	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			square[i][j]='a'+	rand()%('z'-'a');

	return square;
}

void drawCharSquare(char **square, int n)
{
for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
            cout << square[i][j] << " ";
            cout << endl;
}
