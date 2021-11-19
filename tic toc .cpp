#include<bits/stdc++.h>

using namespace std;
int row;
int col;
char curr_marker;
char curr_player;
int draw_broard();

char board[3][3]=
{
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}

};
void draw()
{
    cout<<" "<<board[0][0]<<" "<<"|"<<" "<<board[0][1]<<" "<<"|"<<" "<<board[0][2]<<" "<<"|"<<endl;
    cout<<"------------"<<endl;
    cout<<" "<<board[1][0]<<" "<<"|"<<" "<<board[1][1]<<" "<<"|"<<" "<<board[1][2]<<" "<<"|"<<endl;
    cout<<"------------"<<endl;
    cout<<" "<<board[2][0]<<" "<<"|"<<" "<<board[2][1]<<" "<<"|"<<" "<<board[2][2]<<" "<<"|"<<endl<<endl;
}


bool pace_maker(int slot)
{
    row=slot/3;

    if(slot%3==0)
    {
        col=2;
        row=(slot/3)-1;
    }
    else
    {
        col=(slot%3)-1;

    }

   if(board[row][col]=='X' || board[row][col]=='O')
      {
          return false;
      }else
      {
              board[row][col]=curr_marker;
              return true;
          }
}

int winner()
{
    for(int i=0; i<3; i++)
    {
        if(board[i][0]==board[i][1] &&board[i][1]==board[i][2]) return curr_player;
        if(board[0][i]==board[1][i] && board[0][i]==board[2][i]) return curr_player;
    }
    if(board[0][0]==board[1][1] && board[0][0]==board[2][2]) return curr_player;
    if(board[0][2]==board[1][1] && board[1][1]==board[2][0]) return curr_player;
    return 0;

}
void swap_player()
{
    if(curr_player==1)
        curr_player=2;
    else
        curr_player=1;

    if(curr_marker=='X')
        curr_marker='O';
    else
        curr_marker='X';

}
void game()
{
    cout<<"1st player choice marker from X or 0 "<<endl;
    char p1_marker;
    cin>>p1_marker;
    draw();
    curr_marker=p1_marker;
    curr_player=1;
    int i;
    for( i=0; i<9; i++)
    {
        int slot;
        cout<<"its "<<(i%2)+1<<" turns so chose your slot"<<endl;
        cin>>slot;
        if(slot>9 || slot <0)
        {
            cout<<"enter a vaild slot between 1 to 9 ";
            cin>>slot;
        }
        if(!pace_maker(slot))
        {
            i--;
            cout<<"this slot is all ready occupied enter anoter slot"<<endl;
            continue;

        }
        swap_player();
        draw();
        int w=winner();
        if(w==1)
        {
            cout<<"the winner is 2 congratulation!";
            break;
        }
        if(w==2)
        {
            cout<<"the winner is 1 congratulation!";
            break;
        }
    }
    if(i==9)cout<<"its a tie";
}
int main()
{
    game();



    return 0;
}
