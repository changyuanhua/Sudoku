#include <iostream>
#include <fstream>
#include <iomanip>
#include <set>
int tempNum[81] ;   
int tempSp= 0 ; 
int push(int nextblank);
int pop();
using namespace std;
bool check(int A[][9], int nextblank, int num)
{
    int i, j;
	int col=nextblank%9;
	int row=nextblank/9;
    for(i=0;i<9;i++)
	{
	    if(A[row][i]==num)
		    return false;	
		if(A[i][col]==num)
			return false;
	}
	for(i=0;i<3;i++)
    {
		if(A[(row/3)*3][i+(col/3)*3])
				return false;
		else if(A[i+(row/3)*3][(col/3)*3])
				return false;
	}
	return true;
}
int findblank(int A[][9],int blank)
{
    int nextblank;
    for(nextblank=blank;nextblank<81;nextblank++)
	{
	    if(A[nextblank/9][nextblank%9]==0)
		    break;
	}
    return nextblank;
}	

int solve(int A[][9])
{
    int nextblank=findblank(A,0);
	int num;
	for(num=1;num<=10;num++)
    {	
	    if(num>9)
		{
			A[nextblank/9][nextblank%9]=0;
	        pop();
		}
		else
		{
			if(check(A,nextblank,num))
			{
				A[nextblank/9][nextblank%9]=num;
				push(nextblank);
				nextblank=findblank(A,nextblank);
			}
		}
	}
}
int print(int A[][9])
{
    int i,j;
    for (i=0; i<9; i++)
	    for(j=0; j<9; j++)
         	printf("%d%c ", A[i][j],(j+1)%9==0?'\n':' ');
	return 0;
}
int push(int nextblank) 
{
	tempNum[tempSp++]= nextblank ;
}
 	   		
int pop() 
{
	if(tempSp<=0) return(-1) ;
	else return(tempNum[--tempSp]) ;
}
int main()
{
	int i,j;		     
   	int A[9][9]={{0,2,1,0,6,0,5,9,0},			
		{0,0,0,0,0,0,0,0,2},
		{4,0,0,2,0,5,0,6,3},
		{3,0,7,6,0,0,0,0,0},
		{0,9,5,0,0,0,3,2,0},
		{0,0,0,0,0,3,7,0,1},
		{9,3,0,4,0,2,0,0,7},
		{5,0,0,0,0,0,0,0,0},
		{0,1,2,0,9,0,0,3,0}};
	solve(A);
	print(A);
	return 0;
}

