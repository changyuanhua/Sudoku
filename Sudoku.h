#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
class Sudoku
{
	public:
		Sudoku();
		void giveQuestion();
		void readIn();
		void solve();
		bool check(int A[][9],int nextblank,int num);
		int findblank(int A[][9],int blank);
		int print(int A[][9]);
		void changeNum(int a, int b);
		void changeRow(int a, int b);
		void changeCol(int a, int b);
		void rotate(int n);
		void flip(int n);
	private:
		int C[9][9];
		int p;
};					                                                        };
