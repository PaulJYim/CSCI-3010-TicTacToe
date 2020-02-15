#include <iostream>

class TicTacToe
{
  private:
    //Add turnCount attribute to determine whether we should fill out the board
    //with "O's" or "X's."
    int turnCount = 0;
    std::string board_[3][3];
  public:
    void CreateBoard()
    {
      for (int i = 0; i < 3; i++)
      {
        for (int j = 0; j < 3; j++)
        {
          board_[i][j] = "_";
        }
      }
    }

    void DisplayBoard(){
      for (int i = 0; i < 3; i++)
      {
        for (int j = 0; j < 3; j++)
        {
          std::cout << board_[i][j] << " \n"[j == 2];
        }
      }
    }

    void PlaceMarker(int location[], int turn){
      int row = location[0];
      int col = location[1];

      //Different marker based on turn type.
      if(turn % 2 == 0)
      {
        board_[row][col] = "X";
      }
      else
      {
        board_[row][col] = "O";
      }
    }
};


int main()
{
  TicTacToe *game = new TicTacToe();
  game->CreateBoard();
  game->DisplayBoard();
}
