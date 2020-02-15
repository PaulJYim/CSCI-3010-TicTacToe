#include <iostream>

class TicTacToe
{
  private:
    //Add turnCount attribute to determine whether we should fill out the board
    //with "O's" or "X's."
    int turnCount_ = 0;
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

    void PlaceMarker(int location[]){
      int row = location[0];
      int col = location[1];

      //Different marker based on turn type.
      if(turnCount_ % 2 == 0)
      {
        board_[row][col] = "X";
      }
      else
      {
        board_[row][col] = "O";
      }

      turnCount_++;
    }
};


int main()
{
  TicTacToe *game = new TicTacToe();
  game->CreateBoard();
  game->DisplayBoard();

  for (int i = 0; i <9; i++)
  {
    int* arr = game->GetPlayerChoice();
    game->PlaceMarker(arr);
    game->DisplayBoard();
  }

}
