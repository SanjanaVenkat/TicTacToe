#include <iostream>

using namespace std;

int main()
{
  char board [3][3];
  bool playero = true;
  bool playerx = false;
  bool playing = true;
  int moves = 0;
  int response = 0;
  bool xwon = false;
  bool owon = false;  
  int row = 0;
  int col = 0;
    
  for (row = 0; row < 3; row++) {
    for (col = 0; col < 3; col++) {
      cout << board[3][3] << '*';       
    }
    cout << endl;
  }
  while (playing = true) {
    //if (playing = false) {
      //cout << "not playing, false" << endl;
      //}
    if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') {
      xwon == true;
      playing == false;
      cout << "test" << endl;
    }
    if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') {
      xwon == true;
    }
    if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') {
      xwon == true;
    }
    if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') {
      xwon == true;
    }
    if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') {
      xwon == true;
    }
    if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') {
       xwon == true;
    }
    if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') {
      xwon == true;
    }
    if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')  {
      xwon == true;
    }
 
    //}
  //while (xwon == false && owon == false && moves <= 9) { 
    if (playing == true && moves == 0 || moves == 2 || moves == 4 || moves == 6 || moves == 8) {
    cout << "Player X, enter a row number, 1-3" << endl;
    cin >> row;
    cout << "Enter a column number, 1-3" << endl;
    cin >> col;
    if (board[row-1][col-1] != 'X' && board[row-1][col-1] != 'O') {
    board[row-1][col-1] = 'X';
    }
    else {
      cout << "Move is not allowed, make a new move" << endl;
      moves--;
    }
    cout << "Row:";
    cout << row << endl;
    cout << "Col:";
    cout << col << endl;
    for (row = 0; row < 3; row++) {
      for (col = 0; col < 3; col++) {
	cout << board[row][col] << ' ';
      }
      cout << endl;
    }
      moves++;
  }
  
   if (playing == true && moves == 1 || moves == 3 || moves == 5 || moves == 7) {
    cout << "Player O, enter a row number, 1-3" << endl;
    cin >> row;
    cout << "Enter a column number, 1-3" << endl;
    cin >> col;
    if (board[row-1][col-1] != 'X' && board[row-1][col-1] != 'O') {
    board[row-1][col-1] = 'O';
    }
    else {
      cout << "Move is not allowed, make a new move" << endl;
      moves--;
    }
    cout << "Row:";
    cout << row << endl;
    cout << "Col:";
    cout << col << endl;
    for (row = 0; row < 3; row++) {
      for (col = 0; col < 3; col++) {
	cout << board[row][col] << ' ';
      }
      cout << endl;
    }
    moves++;
  }
  
  if (playing = true && moves == 9) {
    playing = false;
    cout << "tie" << endl;
    return 0;
    }

   


  if (xwon == true) {
    cout << "x won" << endl;
  }
  if (playing == false) {
    cout << "Not playing" << endl;
    cout << "Play again?" << endl;
    cin >> response;
    if (response == 'n') {
      return 0;
    }
    else if (response == 'y') {
      playing == true;
      moves == 0;
    }
  }
  }

  return 0;
}
