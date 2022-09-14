#include <iostream>
#include <vector>
#include <string.h>

//Function
void layout (std::vector<char> input)  {

    std::cout<< "  ____________________ \n";
    std::cout<< " |1     |2     |3     |\n";
    std::cout<< " |   " <<input[0]<<"  |   "<< input[1]<< "  |   "<<  input[2]<<"  |\n";  
    std::cout<< " |______|______|______|\n";       
    std::cout<< " |4     |5     |6     |\n";
    std::cout<< " |   " <<input[3]<<"  |   "<< input[4]<< "  |   "<<  input[5]<<"  |\n";  
    std::cout<< " |______|______|______|\n";
    std::cout<< " |7     |8     |9     |\n"; 
    std::cout<< " |   " <<input[6]<<"  |   "<< input[7]<< "  |   "<<  input[8]<<"  |\n";  
    std::cout<< " |______|______|______|\n \n \n";

}
// Function 2
int win (std::vector<char> input, int o=0, int x=0) {
if (input[0] == 'O' && input [1] == 'O' && input [2] == 'O') {
    std::cout<<" Player 1 Wins. Flawless Victory. \n\n\n"; o++; return o;
    }
else if (input[0] == 'X' && input[1] == 'X' && input[2]== 'X') {
    std::cout<< " Player 2 Wins. Flawless Victory. \n"; x++; return x;
    }

else if (input[3] == 'O' && input[4] == 'O' && input[5]) {
    std::cout<<" Player 1 Wins. flawless victory. \n";o++; return o;
    }
else if (input[3] == 'X' && input[4] == 'X' && input[5]== 'X') {
    std::cout<< " Player 2 Wins. Flawless Victory. \n";x++; return x;
    }

else if (input[6] == 'O' && input [7] == 'O' && input [8] == 'O') {
    std::cout<<" Player 1 Wins. Flawless Victory. \n";o++; return o;
    }
else if (input[6] == 'X' && input[7] == 'X' && input[8]== 'X') {
    std::cout<< " Player 2 Wins. Flawless Victory. \n";x++; return x;
    }

else if (input[0] == 'O' && input [4] == 'O' && input [8] == 'O') {
    std::cout<<" Player 1 Wins. Flawless Victory. \n";o++; return o;
    }
else if (input[0] == 'X' && input[4] == 'X' && input[8]== 'X') {
    std::cout<< " Player 2 Wins. Flawless Victory. \n";x++; return x;
    }

else if (input[2] == 'O' && input [4] == 'O' && input [6] == 'O') {
    std::cout<<" Player 1 Wins. Flawless Victory. \n";o++; return o;
    }
else if (input[2] == 'X' && input[4] == 'X' && input  [6] == 'X') {
    std::cout<< " Player 2 Wins. Flawless Victory. \n";x++; return x;
    }

else if (input[0] == 'O' && input [3] == 'O' && input [7] == 'O') {
    std::cout<<" Player 1 Wins. Flawless Victory. \n";o++; return o;
    }
else if (input[0] == 'X' && input[3] == 'X' && input[7]== 'X') {
    std::cout<< " Player 2 Wins. Flawless Victory. \n";x++; return x;
    }

else if (input[1] == 'O' && input [4] == 'O' && input [7] == 'O') {
    std::cout<<" Player 1 Wins. Flawless Victory. \n";o++; return o;
    }
else if (input[1] == 'X' && input[4] == 'X' && input[7]== 'X') {
    std::cout<< " Player 2 Wins. Flawless Victory. \n";x++; return x;
    }

else if (input[2] == 'O' && input[5] == 'O' && input[8] == 'O') {
    std::cout<<" Player 1 Wins Flawless Victory. \n";o++; return o;
    }
else if (input[2] == 'X' && input[5] == 'X' && input[8]== 'X') {
    std::cout<< " Player 2 Wins. Flawless Victory. \n";x++; return x;
    }
else { return 0;}
}

//int Main

int main() {

//Variable Declaring

std::vector<char> input = {'-','-','-','-','-','-','-','-','-'};
int playeroneinput = 0;
int playertwoinput = 0;
int a = 1;
int b = 1;

//Output
std::cout<< "Developed By Palash Gaikwad. \n\n";
std::cout<< "Hello! Welcome To Palash's Tic-Tac-Toe! \n \n \n";
std::cout<<"Tic-Tac-Toe is a paper-and-pencil game for two players, X and O, who take turns marking the spaces in a 3x3 grid. The player who succeeds in placing three of their marks in a horizontal, vertical or diagonal row wins the game. \n \n";
std::cout<<"Instructions: \nPlayer 1 - O Sign \nPlayer 2 - X Sign \n \nEnter Numbers According To The Available Blocks.\n\n\n";
std::cout<<"*************START**************\n";
std::cout<< "Here Is A Simple Visual Image for a 3X3 Tic-Tac-Toe! \n\n";

//Visual Image
layout(input);



//Beginning of For Loop!

for (int turns = 1; turns < 9; turns++)  {

//PLAYER1 Section
std::cout<<" Player 1! Your turn! Enter Here!:";
std::cin>> playeroneinput;

// Beginning Of Player 1 If Section

if (playeroneinput == 1)  {input[0] = 'O';}
else if (playeroneinput == 2) {input[1] = 'O';}
else if (playeroneinput == 3)  {input[2] = 'O';}
else if (playeroneinput == 4)  {input[3] = 'O';}
else if (playeroneinput == 5)  {input[4] = 'O';}
else if (playeroneinput == 6)  {input[5] = 'O';}
else if (playeroneinput == 7)  {input[6] = 'O';}
else if (playeroneinput == 8)  {input[7] = 'O';}
else if (playeroneinput == 9)  {input[8] = 'O';}
// Error 
else {
     std::cout<< "DEAR PLAYER 1: YOU HAVE ENTERED WRONG INPUT, PLEASE RESTART THE GAME ! \n\n\n";
     break;
    }
   // Winner
    layout(input);
if (a <= win(input)) {
    break;
} // Draw
if (turns == 4) {
    std::cout<< "***********\n";
    std::cout<< "GAME DRAW\n";
    std::cout<< "***********\n\n\n";
    break;
}

    
// Player 2 Section
std::cout<<" Player 2! Your up next! Please Enter Here!:";
std::cin>> playertwoinput;

// Player 2 If Section
    
if (playertwoinput == 1)  { input[0] = 'X';}
else if (playertwoinput == 2) {input[1] = 'X';}
else if (playertwoinput == 3) {input[2] = 'X';}
else if (playertwoinput == 4) {input[3] = 'X';}
else if (playertwoinput == 5) {input[4] = 'X';}
else if (playertwoinput == 6) {input[5] = 'X';}
else if (playertwoinput == 7) {input[6] = 'X';}
else if (playertwoinput == 8) {input[7] = 'X';}
else if (playertwoinput == 9) {input[8] = 'X';}
else  {       // Error
     std::cout<< "DEAR PLAYER 2: YOU HAVE ENTERED WRONG INPUT, PLEASE RESTART THE GAME ! \n\n\n";
     break;;
    }
// Winner
layout(input);
if (b <= win(input)) {
    break;
}
win(input);
}
layout(input);
std::cout<<"****************************************************************************************************";
}