#include <iostream>
using namespace std;

const int ROWS = 100, COLS = 100;

void initMatrix(int arr[][COLS], int rows, int cols)
{
  for(int i = 0; i < rows; i++)
  {
    for(int j = 0; j < cols; j++)
    {
      cout << "arr[" << i << "][" << j << "] = ";
      cin >> arr[i][j];
    }
  }
}
void printMatrix(int arr[][COLS], int rows, int cols)
{
  for(int i = 0; i < rows; i++)
  {
    for(int j = 0; j < cols; j++)
    {
      cout << arr[i][j] << "    ";
    }
    cout << endl;
  }
}
void transMatrix(int arr[][COLS], int rows, int cols)
{
	for(int j = 0; j < cols; j++)
	{
		for(int i = 0; i < rows; i++)
		{
			cout << arr[i][j] << "    ";
		}
		cout << endl;
	}
}
int main()
{

    int rows, cols;
    int matrix[ROWS][COLS];
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    cout << "Enter the elements of the matrix" << endl;
    initMatrix(matrix, rows, cols);
    cout << "The matrix is: " << endl;
    printMatrix(matrix, rows, cols);
    cout << endl;

    cout << "The transponed matrix is:" << endl;
    transMatrix(matrix, rows, cols);
    cout << endl;

	return 0;
}
