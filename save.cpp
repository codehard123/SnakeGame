#include<bits/stdc++.h>
# define m 20
#define n 20
#include<iostream>
#include<conio.h>
using namespace std;
int direction=1;
	int speed=1;
	int headRow=10,headCol=12;
	int tailRow=10,tailCol=8;
	char grid[20][20];
	int width=20;
	int height=20;
	int snakeLength=4;
	


bool fullyturned(int a,int b,int c,int d)
{
	//See Euclidean Distances
	if(abs(a-c)||abs(b-d)==0)
	return true;
	else return false;
}
int main()
{
	
	grid[headRow][headCol]='@';
	grid[tailRow][tailCol]='@';
	grid[10][9]='@';
	grid[10][10]='@';
	grid[10][11]='@';
	while(true)
	{
	_sleep(1000);
	system("cls");
	 
	while(!kbhit() && fullyturned(headRow,headCol,tailRow,tailCol))
	{
		noKhbitdirection
	}
	
}
return 0;
}
void noKhbitdirection(char grid[m][n],int dir)
{
	if(dir==1)
	{
	//Move straight
	int TempLength=snakeLength;
	int headCols=headCol;
	while(TempLength--)
	{
		
		grid[headRow][headCols+1]=grid[headRow][headCols];
		headCols--;
	}
}
	if(dir==2)
	{
	int TempLength=snakeLength;
	int headRows=headRow;
	while(TempLength--)
	{
		
		grid[headRows-1][headCol]=grid[headRows][headCol];
		headRows++;
	}
		
	}
	if(dir==3)
	{
	int TempLength=snakeLength;
	int headCols=headCols;
	while(TempLength--)
	{
		
		grid[headRow][headCols-1]=grid[headRow][headCols];
		headCols++;
	}
		
	}	
	if(dir==4)
	{
		int TempLength=snakeLength;
	int headRows=headRow;
	while(TempLength--)
	{
		
		grid[headRows+1][headCol]=grid[headRows][headCol];
		headRows--;
	}
	}
}

void Display(char grid[m][n])
{
for(int i=0;i<20;i++)
{
	for(int j=0;j<20;j++)
	cout<<grid[i][j];
	cout<<endl;
	}
}

