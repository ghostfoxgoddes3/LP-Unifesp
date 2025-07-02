#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

char board[9];
void pc();
void smart();
void human();
void start_game();
void set_board();
void show_board();
int best_move();
int check(int);
void player_move(char, char*);
int empty();
char check_winner();
void upper_case();

void start_game(){
  int choice, cont = 0;
  printf("Seja bem vindo!\nTecle 1 ---- humano x humano\nTecle 2 ---- humano x computador randomizado\nTecle 3 ---- humano x computador inteligente\n");
  scanf("%d", &choice);
  while(choice < 0 || choice > 3){
    if(cont > 10){
      printf("Voce eh incapaz de jogar jogo da velha.");
      break;
    }
    printf("Escolha invalida. Tente novamente.");
    scanf("%d", &choice);
    ++cont;
  }
  if(choice == 1){
    human();
  }
  else if(choice == 2)
    pc();
  else
    smart();
}

void set_board(){
  for(int i = 0; i<9; ++i)
    board[i] = ' ';
}

void show_board(){
  system("clear");
  for(int i = 0; i<9; ++i){
    if(board[i] != ' ')
      printf("  %c  ", board[i]);
    else
      printf("  %d  ", i+1);
    
    if(i%3 != 2)
      printf("|");
  
    if(i == 2 || i == 5)
      printf("\n- - - - - - - - -\n");
    else if(i == 8)
      printf("\n");
  }
}


void pc_move(char icon){
  int move = (rand()%9)+1;
  while(!check(move)){
    move = (rand()%9)+1;
  }
  board[move-1] = icon;
}

void pc(){
  char winner = ' ';
  while(winner == ' ' && empty()){
    player_move('x', "");
    winner = check_winner();
    if(winner != ' ')
      break;
    if(!empty())
      break;
    pc_move('o');
    winner = check_winner();
  }

  upper_case();
  show_board();
  if(winner == ' ')
    printf("Deu velha!\n");
  else if(winner == 'x')
    printf("Vitória do jogador humano! Fim do jogo\n");
  else
    printf("Vitória do computador! Fim do jogo\n");

  exit(0);
}

int check(int move){
  if(move < 1 || move > 9)
    return 0;
  else if(board[move-1] != ' ')
    return 0;
  else
    return 1;
}

void upper_case(){
  int win[8][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6}};
  for(int i = 0; i < 8; ++i){
    if(board[win[i][0]] == board[win[i][1]] && board[win[i][1]] == board[win[i][2]]){
      for(int j = 0; j<3; ++j)
        board[win[i][j]] -= 32;
    }
  }
}

void player_move(char icon, char* player){
  int move, cont = 0;
  show_board();
  printf("\nEscolha sua jogada, %s:\t", player);
  scanf("%d", &move);
  while(!check(move)){
    printf("Posição incorreta/ocupada. Escolha sua jogada:\t");
    scanf("%d", &move);
    ++cont;
    if(cont>=10){
      printf("Jogo encerrado");
      exit(1);
    }
  }
  board[move-1] = icon;
}

void human(){
  char p1[40], p2[40];

  printf("Digite o nome do primeiro jogador: ");
  scanf("%s", p1);

  printf("Digite o nome do primeiro jogador: ");
  scanf("%s", p2);

  char winner = ' ';
  while(winner == ' ' && empty()){
    player_move('x', p1);
    winner = check_winner();
    if(winner != ' ')
      break;
    if(!empty())
      break;
    player_move('o', p2);
    winner = check_winner();
  }

  upper_case();
  show_board();
  if(winner == ' ')
    printf("Deu velha!\n");
  else if(winner == 'x')
    printf("Vitória de %s! Fim do jogo\n", p1);
  else
    printf("Vitória de %s! Fim do jogo\n", p2);
  exit(0);
}

char check_winner(){
  if(board[0] == board[4] && board[4] == board[8])
    return board[0];
  else if(board[2] == board[4] && board[4] == board[6])
    return board[2];
    

  for(int i = 0; i <3; ++i){
    if(board[i*3] == board[i*3 + 1] && board[i*3 + 1] == board[i*3 +2])
      return board[i*3];
    else if(board[i] == board[i+3] && board[i+3] == board[i+6])
      return board[i];
  }

  return ' ';
}

int empty(){
  for(int i = 0; i<9; ++i){
    if(board[i] == ' ')
      return 1;
  }
  return 0;
}

void smart(){

}


int best_move(){

}

int main(){
  srand((unsigned int)time((void*)0));

  set_board();
  start_game();

  return 0;
}
