#include <iostream>

using namespace std;

int main()
{
  char board [3][3];
  bool playero = true;
  bool playerx = false;
  bool playing = true;
  int moves = 0;
  bool won = false;
  int row = 0;
  int col = 0;
  
  for (row = 0; row < 3; row++) {
    for (col = 0; col < 3; col++) {
      cout << board[3][3] << '*';       
    }
    cout << endl;
  }
  while (playing == true && moves <= 9) {
    if (moves == 0 || moves == 2 || moves == 4 || moves == 6 || moves == 8) {
    cout << "Player X, enter a row number, 1-3" << endl;
    cin >> row;
    cout << "Enter a column number, 1-3" << endl;
    cin >> col;
    board[row][col] = 'x';
    cout << "Row:";
    cout << row << endl;
    cout << "Col:";
    cout << col << endl;
    cout << board[row][col] << endl;
    moves++;
  }
  
  if (moves == 1 || moves == 3 || moves == 5 || moves == 7) {
    cout << "Player O, enter a row number, 1-3" << endl;
    cin >> row;
    cout << "Enter a column number, 1-3" << endl;
    cin >> col;
    board[row][col] = 'o';
    cout << "Row:";
    cout << row << endl;
    cout << "Col:";
    cout << col << endl;
    cout << board << endl;
    moves++;
  }
  
  if (moves == 9) {
    playing = false;
    cout << "tie" << endl;
  }
  } 
 

  return 0;
}
