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
  int xwincount = 0;
  int owincount = 0;
    
  for (row = 0; row < 3; row++) {
    for (col = 0; col < 3; col++) {
      cout << board[3][3] << '*';       
    }
    cout << endl;
  }

  while(moves <= 9) {  
    if (playing == 0 && moves == 0 || moves == 2 || moves == 4 || moves == 6 || moves == 8) {
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
    //X win test 1
    if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') {
      playing != 0;
      playing == 1;
      cout << "Game won by x"<< endl;
       xwincount++;
         cout << "X has won";
         cout << xwincount;
         cout << "times";
         cout << "O has won";
         cout << owincount;
         cout << "times";
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
         cout << "X has won";
         cout << xwincount;
         cout << "times";
         cout << "O has won";
         cout << owincount;
         cout << "times";
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
         cout << "X has won";
         cout << xwincount;
         cout << "times";
         cout << "O has won";
         cout << owincount;
         cout << "times";

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
         cout << "X has won";
         cout << xwincount;
         cout << "times";
         cout << "O has won";
         cout << owincount;
         cout << "times";

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
         cout << "X has won";
         cout << xwincount;
         cout << "times";
         cout << "O has won";
         cout << owincount;
         cout << "times";

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
         cout << "X has won";
         cout << xwincount;
         cout << "times";
         cout << "O has won";
         cout << owincount;
         cout << "times";

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
         cout << "X has won";
         cout << xwincount;
         cout << "times";
         cout << "O has won";
         cout << owincount;
         cout << "times";

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
         cout << "X has won";
         cout << xwincount;
         cout << "times";
         cout << "O has won";
         cout << owincount;
         cout << "times";

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

    else {
    moves++;
    }
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
    //O win test 1
    if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') {
       playing != 0;
       playing == 1;
       cout << "Game won by o"<< endl;
        owincount++;
         cout << "X has won";
         cout << xwincount;
         cout << "times";
         cout << "O has won";
         cout << owincount;
         cout << "times";

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
         cout << "X has won";
         cout << xwincount;
         cout << "times";
         cout << "O has won";
         cout << owincount;
         cout << "times";
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
         cout << "X has won";
         cout << xwincount;
         cout << "times";
         cout << "O has won";
         cout << owincount;
         cout << "times";
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
         cout << "X has won";
         cout << xwincount;
         cout << "times";
         cout << "O has won";
         cout << owincount;
         cout << "times";
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
         cout << "X has won";
         cout << xwincount;
         cout << "times";
         cout << "O has won";
         cout << owincount;
         cout << "times";
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
         cout << "X has won";
         cout << xwincount;
         cout << "times";
         cout << "O has won";
         cout << owincount;
         cout << "times";
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
         cout << "X has won";
         cout << xwincount;
         cout << "times";
         cout << "O has won";
         cout << owincount;
         cout << "times";
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
         cout << "X has won";
         cout << xwincount;
         cout << "times";
         cout << "O has won";
         cout << owincount;
         cout << "times"; 
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

    else {
    moves++;
       }
    }
 
    if (moves == 9) {
    cout << "tie" << endl;
         cout << "X has won";
         cout << xwincount;
         cout << "times";
         cout << "O has won";
         cout << owincount;
         cout << "times";
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


