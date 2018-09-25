#include <iostream>

using namespace std;


int main()
{
  char board [3][3];
  bool playero = true;
  bool playerx = false;
  bool playing = true;
  int moves = 0;

  while (playing == true && moves <= 9) {
   if (playero == true) {
    cout << "Player O, make a move" << endl;
    moves++;
    cout << moves << endl;
   playero = false;
   playerx = true;
  }
  
  if (playerx == true) {
    cout << "Player X, make a move" << endl;
    moves++;
    cout << moves << endl;
    playero = true;
    playerx = false;
  }
  
  if (moves == 10) {
    playing = false;
    playero = false;
    playerx = false;
    cout << "tie" << endl;
  }
  } 
 

  return 0;
}
