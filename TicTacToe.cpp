#include <iostream>

class TicTacToe
{
  private:
    std::string board_[3][3];
  public:
    void CreateBoard()
    {
      for (int i = 0; i < 3; i++)
      {
        for (int j = 0; j < 3; j++)
        {
          board_[i][j] = " ";
        }
      }
    }
};


int main()
{
  TicTacToe *game = new TicTacToe();
  game->CreateBoard();
}
