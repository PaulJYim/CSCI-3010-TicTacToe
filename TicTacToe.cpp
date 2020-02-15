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

    void DisplayBoard(){
      for (int i = 0; i < 3; i++)
      {
        for (int j = 0; j < 3; j++)
        {
          std::cout << board_[i][j] << " \n"[j == 2];
        }
      }
    }

    int* GetPlayerChoice()
    {
      int row;
      int col;
      std::cout<< "Which row?" <<std::endl;
      std::cin >> row;
      std::cout << std::endl;
      std::cout << "Which col?" <<std::endl;
      std::cin >> col;
      std::cout<<std::endl;
      int* moves = new int[2];
      moves[0] = row;
      moves[1] = col;
      return moves;
    }
};


int main()
{
  TicTacToe *game = new TicTacToe();
  game->CreateBoard();
  game->DisplayBoard();
  int* arr = game->GetPlayerChoice();

}
