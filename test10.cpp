#include <iostream>
#include <fstream>
#include <iomanip>
#include <set>
int print(int A[][9]);
int p=0;
int B[9][9];
using namespace std;
bool check(int A[][9], int nextblank, int num)
{
    int i;
	int col=nextblank%9;
	int row=nextblank/9;
    for(i=0;i<9;i++)
	    if(A[row][i]==num||A[i][col]==num)
		    return false;	
	for(i=0;i<3;i++)
		if(A[(row/3)*3][i+(col/3)*3]==num||A[i+(row/3)*3][(col/3)*3]==num)
				return false;
	return true;
}
int findblank(int A[][9],int blank)
{
    int nextblank;
    for(nextblank=blank;nextblank<81;nextblank++)
	{
	    if(A[nextblank/9][nextblank%9]==0)
		    return nextblank;
	}
    return 81;
}	
int solve(int A[][9],int blank)
{
	int nextblank=findblank(A,blank);
	int i,j,num;
	if(p>1)
		return 0;
	if(nextblank==81)
	{
		p++;
		for (i=0; i<9; i++)
			for (j=0; j<9; j++)
				B[i][j]=A[i][j];
	    return 0;
		
	}
	for(num=1;num<=9;num++)
	{
			if(check(A,nextblank,num))
			{
				A[nextblank/9][nextblank%9]=num;
				if(solve(A,nextblank+1)==1)
					return 1;
				A[nextblank/9][nextblank%9]=0;
			}
		
	}
	return 0;
}
int print(int A[][9])
{
    int i,j;
	cout << p << endl;
    if(p==0)
		return 0;
	for (i=0; i<9; i++)
	    for(j=0; j<9; j++)
		{
         	if(j!=8)
				      cout<<" "<< A[i][j] ;
	        else
			          cout<<" "<< A[i][j]<<endl;
		}
	
	return 0;
}
int main()
{
	int i,j;		     
   	int A[9][9]={{2,3,1,9,0,6,7,8,0},
		{0,8,6,7,5,0,2,3,1},
		{7,0,0,1,2,3,0,0,6},
		{3,2,8,0,6,7,1,0,5},
		{5,6,7,8,1,0,3,2,0},
		{0,1,0,2,3,0,8,6,7},
		{1,0,2,6,0,5,0,7,3},
		{6,7,3,0,8,2,5,1,0},
		{0,5,0,3,7,1,6,0,2}};
	solve(A,0);
	print(B);
	return 0;
}

