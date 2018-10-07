//Sanjana Venkat
//10.4.18
//Two player tic tac toe
#include <iostream>

using namespace std;

//initial setup, variables
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
  int xwincount = 0;
  int owincount = 0;
     board[row][col] = ' ';
        board[0][0]  = ' ';
        board[0][1]  = ' ';
        board[0][2]  = ' ';
        board[1][0]  = ' ';
        board[1][1]  = ' ';
        board[1][2]  = ' ';
        board[2][0]  = ' ';
        board[2][1]  = ' ';
        board[2][2]  = ' ';


  //print blank board with stars
  for (row = 0; row < 3; row++) {
    for (col = 0; col < 3; col++) {
      cout << board[3][3] << '*';       
    }
    cout << endl;
  }

  //loop to play game
  while(moves <= 9) {
    // x turn
    if (playing == 0 && moves == 0 || moves == 2 || moves == 4 || moves == 6 || moves == 8) {
      //has x choose valid playing spot
    cout << "Player X, enter a row number, 1-3" << endl;
    cin >> row;
  while (row > 3 || row < 1) {
      cout << "Not a valid row, enter a row from 1-3" << endl;
      cin >> row;
    }
    cout << "Enter a column number, 1-3" << endl;
    cin >> col;
     while (col > 3 || col < 1) {
      cout << "Not a valid column, enter a row from 1-3" << endl;
      cin >> col;
    }

    if (board[row-1][col-1] != 'X' && board[row-1][col-1] != 'O') {
    board[row-1][col-1] = 'X';
    }
    else {
      cout << "Move is not allowed, make a new move" << endl;
      moves--;
    }
    //prints board with x move
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
    //X win test 1, reprints blank board to play again once game has been won
    if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') {
      playing != 0;
      playing == 1;
      cout << "Game won by x"<< endl;
       xwincount++;
         cout << "X has won ";
         cout << xwincount;
         cout << " times" << endl;
         cout << "O has won ";
         cout << owincount;
         cout << " times" << endl;
      board[row][col] = ' ';
	board[0][0]  = ' ';
	board[0][1]  = ' ';
	board[0][2]  = ' ';
	board[1][0]  = ' ';
	board[1][1]  = ' ';
	board[1][2]  = ' ';
	board[2][0]  = ' ';
	board[2][1]  = ' ';
	board[2][2]  = ' ';
	 for (row = 0; row < 3; row++) {
          for (col = 0; col < 3; col++) {
           cout << board[row][col] << '*';
            }
          cout << endl;
          }
	moves = 0;
	playing == 0;
    }
    //X win test 2
    else if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') {
      playing != 0;
      playing == 1;
      cout << "Game won by x"<< endl;
       xwincount++;
         cout << "X has won ";
         cout << xwincount;
         cout << " times" << endl;
         cout << "O has won ";
         cout << owincount;
         cout << " times" << endl;
      board[row][col] = ' ';
        board[0][0]  = ' ';
        board[0][1]  = ' ';
        board[0][2]  = ' ';
        board[1][0]  = ' ';
        board[1][1]  = ' ';
        board[1][2]  = ' ';
        board[2][0]  = ' ';
        board[2][1]  = ' ';
        board[2][2]  = ' ';
         for (row = 0; row < 3; row++) {
          for (col = 0; col < 3; col++) {
           cout << board[row][col] << '*';
            }
          cout << endl;
          }
        moves = 0;
        playing == 0;
    }
    //X win test 3
    else if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') {
      playing != 0;
      playing == 1;
      cout << "Game won by x"<< endl;
       xwincount++;
         cout << "X has won ";
         cout << xwincount;
         cout << " times" << endl;
         cout << "O has won ";
         cout << owincount;
         cout << " times" << endl;

      board[row][col] = ' ';
        board[0][0]  = ' ';
        board[0][1]  = ' ';
        board[0][2]  = ' ';
        board[1][0]  = ' ';
        board[1][1]  = ' ';
        board[1][2]  = ' ';
        board[2][0]  = ' ';
        board[2][1]  = ' ';
        board[2][2]  = ' ';
         for (row = 0; row < 3; row++) {
          for (col = 0; col < 3; col++) {
           cout << board[row][col] << '*';
            }
          cout << endl;
          }
        moves = 0;
        playing == 0;
    }
//X win test 4
    else if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') {
      playing != 0;
      playing == 1;
      cout << "Game won by x"<< endl;
       xwincount++;
         cout << "X has won ";
         cout << xwincount;
         cout << " times" << endl;
         cout << "O has won ";
         cout << owincount;
         cout << " times" << endl;

      board[row][col] = ' ';
        board[0][0]  = ' ';
        board[0][1]  = ' ';
        board[0][2]  = ' ';
        board[1][0]  = ' ';
        board[1][1]  = ' ';
        board[1][2]  = ' ';
        board[2][0]  = ' ';
        board[2][1]  = ' ';
        board[2][2]  = ' ';
         for (row = 0; row < 3; row++) {
          for (col = 0; col < 3; col++) {
           cout << board[row][col] << '*';
            }
          cout << endl;
          }
        moves = 0;
        playing == 0;
    }
//X win test 5
    else if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') {
      playing != 0;
      playing == 1;
      cout << "Game won by x"<< endl;
       xwincount++;
         cout << "X has won ";
         cout << xwincount;
         cout << " times" << endl;
         cout << "O has won ";
         cout << owincount;
         cout << " times" << endl;

      board[row][col] = ' ';
        board[0][0]  = ' ';
        board[0][1]  = ' ';
        board[0][2]  = ' ';
        board[1][0]  = ' ';
        board[1][1]  = ' ';
        board[1][2]  = ' ';
        board[2][0]  = ' ';
        board[2][1]  = ' ';
        board[2][2]  = ' ';
         for (row = 0; row < 3; row++) {
          for (col = 0; col < 3; col++) {
           cout << board[row][col] << '*';
            }
          cout << endl;
          }
        moves = 0;
        playing == 0;
    }
//X win test 6
    else if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') {
      playing != 0;
      playing == 1;
      cout << "Game won by x"<< endl;
       xwincount++;
         cout << "X has won ";
         cout << xwincount;
         cout << " times" << endl;
         cout << "O has won ";
         cout << owincount;
         cout << " times" << endl;

      board[row][col] = ' ';
        board[0][0]  = ' ';
        board[0][1]  = ' ';
        board[0][2]  = ' ';
        board[1][0]  = ' ';
        board[1][1]  = ' ';
        board[1][2]  = ' ';
        board[2][0]  = ' ';
        board[2][1]  = ' ';
        board[2][2]  = ' ';
         for (row = 0; row < 3; row++) {
          for (col = 0; col < 3; col++) {
           cout << board[row][col] << '*';
            }
          cout << endl;
          }
        moves = 0;
        playing == 0;
    }
//X win test 7
    else if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') {
      playing != 0;
      playing == 1;
      cout << "Game won by x"<< endl;
       xwincount++;
         cout << "X has won ";
         cout << xwincount;
         cout << " times" << endl;
         cout << "O has won ";
         cout << owincount;
         cout << " times" << endl;

      board[row][col] = ' ';
        board[0][0]  = ' ';
        board[0][1]  = ' ';
        board[0][2]  = ' ';
        board[1][0]  = ' ';
        board[1][1]  = ' ';
        board[1][2]  = ' ';
        board[2][0]  = ' ';
        board[2][1]  = ' ';
        board[2][2]  = ' ';
         for (row = 0; row < 3; row++) {
          for (col = 0; col < 3; col++) {
           cout << board[row][col] << '*';
            }
          cout << endl;
          }
        moves = 0;
        playing == 0;
    }
//X win test 8
    else if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X') {
      playing != 0;
      playing == 1;
      cout << "Game won by x"<< endl;
       xwincount++;
         cout << "X has won ";
         cout << xwincount;
         cout << " times" << endl;
         cout << "O has won ";
         cout << owincount;
         cout << " times" << endl;

      board[row][col] = ' ';
        board[0][0]  = ' ';
        board[0][1]  = ' ';
        board[0][2]  = ' ';
        board[1][0]  = ' ';
        board[1][1]  = ' ';
        board[1][2]  = ' ';
        board[2][0]  = ' ';
        board[2][1]  = ' ';
        board[2][2]  = ' ';
         for (row = 0; row < 3; row++) {
          for (col = 0; col < 3; col++) {
           cout << board[row][col] << '*';
            }
          cout << endl;
          }
        moves = 0;
        playing == 0;
 }
    //if not won, moves on to o turn
    else {
    moves++;
    }
    }
    // o turn
    if (playing == 0 && moves == 1 || moves == 3 || moves == 5 || moves == 7) {
      //has o make a valid move
      cout << "Player O, enter a row number, 1-3" << endl;
    cin >> row;
    while (row > 3 || row < 1) {
      cout << "Not a valid row, enter a row from 1-3" << endl;
      cin >> row;
    }
    cout << "Enter a column number, 1-3" << endl;
    cin >> col;
    while (col > 3 || col < 1) {
      cout << "Not a valid column, enter a row from 1-3" << endl;
      cin >> col;
    }
    if (board[row-1][col-1] != 'X' && board[row-1][col-1] != 'O') {
    board[row-1][col-1] = 'O';
    }
    else {
      cout << "Move is not allowed, make a new move" << endl;
      moves--;
    }
    // prints out o move
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
    //O win test 1
    if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') {
       playing != 0;
       playing == 1;
       cout << "Game won by o"<< endl;
        owincount++;
         cout << "X has won ";
         cout << xwincount;
         cout << " times" << endl;
         cout << "O has won ";
         cout << owincount;
         cout << " times" << endl;

      board[row][col] = ' ';
        board[0][0]  = ' ';
        board[0][1]  = ' ';
        board[0][2]  = ' ';
        board[1][0]  = ' ';
        board[1][1]  = ' ';
        board[1][2]  = ' ';
        board[2][0]  = ' ';
        board[2][1]  = ' ';
        board[2][2]  = ' ';
         for (row = 0; row < 3; row++) {
          for (col = 0; col < 3; col++) {
           cout << board[row][col] << '*';
            }
          cout << endl;
          }
        moves = 0;
        playing == 0;
    }
    //O win test 2
    else if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') {
      playing != 0;
      playing == 1;
      cout << "Game won by o"<< endl;
       owincount++;
         cout << "X has won ";
         cout << xwincount;
         cout << " times" << endl;
         cout << "O has won ";
         cout << owincount;
         cout << " times" << endl;
      board[row][col] = ' ';
        board[0][0]  = ' ';
        board[0][1]  = ' ';
        board[0][2]  = ' ';
        board[1][0]  = ' ';
        board[1][1]  = ' ';
        board[1][2]  = ' ';
        board[2][0]  = ' ';
        board[2][1]  = ' ';
        board[2][2]  = ' ';
         for (row = 0; row < 3; row++) {
          for (col = 0; col < 3; col++) {
           cout << board[row][col] << '*';
            }
          cout << endl;
          }
        moves = 0;
        playing == 0;
    }
 //O win test 3
    else if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') {
      playing != 0;
      playing == 1;
      cout << "Game won by o"<< endl;
       owincount++;
         cout << "X has won ";
         cout << xwincount;
         cout << " times" << endl;
         cout << "O has won ";
         cout << owincount;
         cout << " times" << endl;
      board[row][col] = ' ';
        board[0][0]  = ' ';
        board[0][1]  = ' ';
        board[0][2]  = ' ';
        board[1][0]  = ' ';
        board[1][1]  = ' ';
        board[1][2]  = ' ';
        board[2][0]  = ' ';
        board[2][1]  = ' ';
        board[2][2]  = ' ';
         for (row = 0; row < 3; row++) {
          for (col = 0; col < 3; col++) {
           cout << board[row][col] << '*';
            }
          cout << endl;
          }
        moves = 0;
        playing == 0;
    }
//O win test 4
    else if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') {
      playing != 0;
      playing == 1;
      cout << "Game won by O"<< endl;
       owincount++;
         cout << "X has won ";
         cout << xwincount;
         cout << " times" << endl;
         cout << "O has won ";
         cout << owincount;
         cout << " times" << endl;
      board[row][col] = ' ';
        board[0][0]  = ' ';
        board[0][1]  = ' ';
        board[0][2]  = ' ';
        board[1][0]  = ' ';
        board[1][1]  = ' ';
        board[1][2]  = ' ';
        board[2][0]  = ' ';
        board[2][1]  = ' ';
        board[2][2]  = ' ';
         for (row = 0; row < 3; row++) {
          for (col = 0; col < 3; col++) {
           cout << board[row][col] << '*';
            }
          cout << endl;
          }
        moves = 0;
        playing == 0;
    }
//O win test 5
    else if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') {
      playing != 0;
      playing == 1;
      cout << "Game won by o"<< endl;
       owincount++;
         cout << "X has won ";
         cout << xwincount;
         cout << " times" << endl;
         cout << "O has won ";
         cout << owincount;
         cout << " times" << endl;
      board[row][col] = ' ';
        board[0][0]  = ' ';
        board[0][1]  = ' ';
        board[0][2]  = ' ';
        board[1][0]  = ' ';
        board[1][1]  = ' ';
        board[1][2]  = ' ';
        board[2][0]  = ' ';
        board[2][1]  = ' ';
        board[2][2]  = ' ';
         for (row = 0; row < 3; row++) {
          for (col = 0; col < 3; col++) {
           cout << board[row][col] << '*';
            }
          cout << endl;
          }
        moves = 0;
        playing == 0;
    }
//O win test 6
    else if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') {
      playing != 0;
      playing == 1;
      cout << "Game won by o"<< endl;
       owincount++;
         cout << "X has won ";
         cout << xwincount;
         cout << " times" << endl;
         cout << "O has won ";
         cout << owincount;
         cout << " times" << endl;
      board[row][col] = ' ';
        board[0][0]  = ' ';
        board[0][1]  = ' ';
        board[0][2]  = ' ';
        board[1][0]  = ' ';
        board[1][1]  = ' ';
        board[1][2]  = ' ';
        board[2][0]  = ' ';
        board[2][1]  = ' ';
        board[2][2]  = ' ';
         for (row = 0; row < 3; row++) {
          for (col = 0; col < 3; col++) {
           cout << board[row][col] << '*';
            }
          cout << endl;
          }
        moves = 0;
        playing == 0;
    }
//O win test 7
    else if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') {
      playing != 0;
      playing == 1;
      cout << "Game won by o"<< endl;
       owincount++;
         cout << "X has won ";
         cout << xwincount;
         cout << " times" << endl;
         cout << "O has won ";
         cout << owincount;
         cout << " times" << endl;
      board[row][col] = ' ';
        board[0][0]  = ' ';
        board[0][1]  = ' ';
        board[0][2]  = ' ';
        board[1][0]  = ' ';
        board[1][1]  = ' ';
        board[1][2]  = ' ';
        board[2][0]  = ' ';
        board[2][1]  = ' ';
        board[2][2]  = ' ';
         for (row = 0; row < 3; row++) {
          for (col = 0; col < 3; col++) {
           cout << board[row][col] << '*';
            }
          cout << endl;
          }
        moves = 0;
        playing == 0;
    }
    //O win test 8
    else if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O') {
      playing != 0;
      playing == 1;
      cout << "Game won by o"<< endl;
     owincount++;
         cout << "X has won ";
         cout << xwincount;
         cout << " times" << endl;
         cout << "O has won ";
         cout << owincount;
         cout << " times" << endl; 
      board[row][col] = ' ';
        board[0][0]  = ' ';
        board[0][1]  = ' ';
        board[0][2]  = ' ';
        board[1][0]  = ' ';
        board[1][1]  = ' ';
        board[1][2]  = ' ';
        board[2][0]  = ' ';
        board[2][1]  = ' ';
        board[2][2]  = ' ';
         for (row = 0; row < 3; row++) {
          for (col = 0; col < 3; col++) {
           cout << board[row][col] << '*';
            }
          cout << endl;
          }
        moves = 0;
        playing == 0;
 }
    // if not won by O, goes back to x turn
    else {
    moves++;
       }
    }
    // if board is full, and not won, tied, restarts game
    if (moves == 9) {
    cout << "tie" << endl;
         cout << "X has won ";
         cout << xwincount;
         cout << " times" << endl;
         cout << "O has won ";
         cout << owincount;
         cout << " times" << endl;
      board[row][col] = ' ';
        board[0][0]  = ' ';
        board[0][1]  = ' ';
        board[0][2]  = ' ';
        board[1][0]  = ' ';
        board[1][1]  = ' ';
        board[1][2]  = ' ';
        board[2][0]  = ' ';
        board[2][1]  = ' ';
        board[2][2]  = ' ';
         for (row = 0; row < 3; row++) {
          for (col = 0; col < 3; col++) {
           cout << board[row][col] << '*';
            }
          cout << endl;
          }
     moves = 0;
  }
  }

  return 0;
}


