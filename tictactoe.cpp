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
      cout << board[3][3] << "*";       
    }
    cout << endl;
  }
  while (playing == true && moves <= 9) {
    if (moves == 0 || moves == 2 || moves == 4 || moves == 6 || moves == 8) {
    cout << "Player X, make a move" << endl;
    moves++;
  }
  
  if (moves == 1 || moves == 3 || moves == 5 || moves == 7) {
    cout << "Player O, make a move" << endl;
    moves++;
  }
  
  if (moves == 9) {
    playing = false;
    cout << "tie" << endl;
  }
  } 
 

  return 0;
}
