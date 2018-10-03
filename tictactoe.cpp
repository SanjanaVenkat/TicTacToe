#include <iostream>

using namespace std;

int main()
{
  char board [3][3];
  bool playero = true;
  bool playerx = false;
  int playing = 0;
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

  while (moves < 9) {
    // if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') {
      // xwon == true;
      // playing == 1;
      // }
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
  
    while (playing == 0 && moves == 0 || moves == 2 || moves == 4 || moves == 6 || moves == 8) {
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
    if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') {
      playing != 0;
      playing == 1;
      cout << "Game won by x"<< endl;
      cout << "want to play again?" << endl;
      cin >> response;
      if (response == 'y') {
	playing == 0;
	moves == 0;
	for (row = 0; row < 3; row++) {
	  for (col = 0; col < 3; col++) {
	    cout << board[3][3] << '*';
	  }
	  cout << endl;
	}
      }
      if (response == 'n') {
	cout << "no" << endl;
      }
    }
    moves++;
  }
    if (playing == 0 && moves == 1 || moves == 3 || moves == 5 || moves == 7) {
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
  }

  while (playing == 1) {
     cout << "not playing" << endl;
     return 0;
   }
   
  while (playing == 0 && moves == 9) {
    //playing == false;
    cout << "tie" << endl;
    return 0;
    }

    if (playing == 1) {
    cout << "Not playing" << endl;
    cout << "Play again?" << endl;
    cin >> response;
    if (response == 'n') {
      cout << "no" << endl;
      return 0;
    }
    else if (response == 'y') {
      cout << "yes" << endl;
      return 0;
    }
  }
 

  return 0;
}


