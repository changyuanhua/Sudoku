#include <iostream>
#include <fstream>
#include <iomanip>
#include <set>
#include <cassert>
using namespace std ;
int main()
{
	  int i,j,n=3,B[9][9]={0};
	    int A[9][9]={{7,2,1,3,6,4,5,9,8},
			               {6,5,3,1,8,9,4,7,2},
						                  {4,8,9,2,7,5,1,6,3},
										                 {3,4,7,6,2,1,9,8,5},
														                {1,9,5,7,4,8,3,2,6},
																		               {2,6,8,9,5,3,7,4,1},
																					                  {9,3,6,4,1,2,8,5,7},
																									                 {5,7,4,8,3,6,2,1,9},
																												 	           {8,1,2,5,9,7,6,3,4},};
	  for(i=0;i<9;i++)
		for(j=0;j<9;j++)
     		B[i][j]=A[i][j];	
for(i=0;i<9;i++)
    for(j=0;j<9;j++)
   	{
      if(n%4==2)
	  { 
	     A[j][8-i]=B[i][j];}
	  else if(n%4==3){
	    A[8-i][8-j]=B[i][j];}
      else if(n%4==0){
	    A[8-j][i]=B[i][j]; } 
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
