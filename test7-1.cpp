#include <iostream>
#include <fstream>
#include <iomanip>
#include <set>
#include <cassert>
#include <cmath>
using namespace std ;
int main()
{
	int i,j,k,a=1,b=2,c,B[1][9]={0,0,0,0,0,0,0,0,0}; 
	int A[9][9]={{7,2,1,3,6,4,5,9,8},
		{6,5,3,1,8,9,4,7,2},
		{4,8,9,2,7,5,1,6,3},
		{3,4,7,6,2,1,9,8,5},
		{1,9,5,7,4,8,3,2,6},
		{2,6,8,9,5,3,7,4,1},
		{9,3,6,4,1,2,8,5,7},
		{5,7,4,8,3,6,2,1,9},
		{8,1,2,5,9,7,6,3,4},};
    c=abs(a-b);
	for(k=0;k<3;k++)
		for(j=0;j<9;j++)
		{ 
			if(a+b==1||a+b==2||a+b==4)
			{
				B[0][j]=A[k+3c][j];
				A[k+3c][j]=A[k][j];
				A[k][j]=B[0][j];
			}	   
			else if(a+b==3)
			{		   
				B[0][j]=A[k+6][j];
				A[k+6][j]=A[k+3][j]; 
				A[k+3][j]=B[0][j];
			}
		}      	 
	for(i=0;i<9;i++)
		for(j=0;j<9;j++)
		{
			if(j!=8)
				cout<<" "<< A[i][j] ;
			else
				cout<<" "<< A[i][j]<<endl;
		}
	return 0;      
}
