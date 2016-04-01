#include <iostream>
#include <fstream>
#include <iomanip>
#include <set>
#include <cassert>
using namespace std ;
int main()
{
	int i,j,k,a=0,b=2,B[9][1]={{0},{0},{0},{0},{0},{0},{0},{0},{0}};
	int A[9][9]={{7,2,1,3,6,4,5,9,8},
		{6,5,3,1,8,9,4,7,2},
		{4,8,9,2,7,5,1,6,3},
		{3,4,7,6,2,1,9,8,5},
		{1,9,5,7,4,8,3,2,6},
		{2,6,8,9,5,3,7,4,1},
		{9,3,6,4,1,2,8,5,7},
		{5,7,4,8,3,6,2,1,9},
		{8,1,2,5,9,7,6,3,4}};
	for(i=0;i<9;i++)
		for(k=0;k<3;k++)
		{ 
		    if(a==b)
			    break;	
			else
			{
				if(a+b==1)
				{
                    B[i][0]=A[i][k+3];
				    A[i][k+3]=A[i][k];
					A[i][k]=B[i][0];
			   }	
				else if(a+b==2)
				{
				   B[i][0]=A[i][k+6];
				   A[i][k+6]=A[i][k];
				   A[i][k]=B[i][0];
               }
               else if(a+b==3)
			   {    
			   	   B[i][0]=A[i][k+6];
	   			   A[i][k+6]=A[i][k+3];
		   		   A[i][k+3]=B[i][0];
			   }
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
