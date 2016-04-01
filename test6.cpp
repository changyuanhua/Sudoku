#include <iostream>
#include <fstream>
#include <iomanip>
#include <set>
#include <cassert>

using namespace std ;
int main()
{		
  int i,j,a=2,b=3,B[9][9]={0};
  int A[9][9]={{0,2,1,0,6,0,5,9,0},
	  {0,0,0,0,0,0,0,0,2},
	  {4,0,0,2,0,5,0,6,3},
	  {3,0,7,6,0,0,0,0,0},
	  {0,9,5,0,0,0,3,2,0},
	  {0,0,0,0,0,3,7,0,1},
	  {9,3,0,4,0,2,0,0,7},
	  {5,0,0,0,0,0,0,0,0},
	  {0,1,2,0,9,0,0,3,0},};
  for(i=0;i<9;i++)
	  for(j=0;j<9;j++)
		  B[i][j]=A[i][j];
  for(i=0;i<9;i++)
	  for(j=0;j<9;j++)
      {
		  if(B[i][j]==a)
		  	  A[i][j]=b;	 	  
	      if(B[i][j]==b)
			  A[i][j]=a;
		  if(j!=8)
			  cout<<" "<< A[i][j] ;
		  else
     		  cout<<" "<< A[i][j]<<endl;
	  }	  
  return 0;      
}
