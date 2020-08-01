import java.io.*;
import java.lang.*;
import java.util.*;

class NQueensProblem
{
	static int N;
	static int k = 1;
	static void printSolution(int board[][]) 
	{
		// for (int i = 0; i < N; i++) 
		// {
		// 	for (int j = 0; j < N; j++)
		// 		System.out.printf(" " + board[i][j] + " ");
		// 	System.out.println();
		// }
		// System.out.println();
		System.out.print("[");
		for (int i = 0; i < N; i++) 
		{
			for (int j = 0; j < N; j++)
			{
				if(board[i][j] == 1)
					System.out.print((j+1)+ " ");
			}
		}
		System.out.println("]");
	}
	static boolean isSafe(int board[][], int row, int col) 
	{
		int i, j;
		for (i = 0; i < col; i++)
			if (board[row][i] == 1)
				return false;
		for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
			if (board[i][j] == 1)
				return false;
		for (i = row, j = col; j >= 0 && i < N; i++, j--)
			if (board[i][j] == 1)
				return false;
		return true;
	}
	static boolean solveNQUtil(int board[][], int col) 
	{
		if (col == N) 
		{
			printSolution(board);
			return true;
		}
		boolean res = false;
		for (int i = 0; i < N; i++) 
		{
			if (isSafe(board, i, col)) 
			{
				board[i][col] = 1;
				res = solveNQUtil(board, col + 1) || res;
				board[i][col] = 0;
			}
		}
		return res;
	}
	public static void solveNQ() 
	{
		int board[][] = new int[N][N];
		if (solveNQUtil(board, 0) == false) 
		{
			System.out.println("Solution does not exist");
			return;
		}
		return;
	}
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter N: ");
		N = sc.nextInt();
		solveNQ();
	}
}
