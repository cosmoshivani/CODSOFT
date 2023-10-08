
#include <iostream>
#include <typeinfo>
#include <unistd.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "" << "\n";
    cout << "------------" << "\n";
    cout << "TIC TAC TOE" << "\n";
    cout << "------------" << "\n";
    
    /* Show the current state of the board */
    cout << "" << "\n";
    cout << " a " "|"    " b " "|" " c " "\n" "---+---+---" "\n" " d " "|"    " e " "|" " f " "\n" "---+---+---" "\n" " g " "|"    " h " "|" " i " <<"\n";
    cout << "" << "\n";
    /* Show the current state of the board */
    
    string player1, player2, Player1, Player2;
    string inp1, inp2;
    
    /* Assign x and o to two players */
    cout << "Player 1 - Choose \"x\" or \"o\": "<< "\n";
    cin >>player1;
    cout << "Player 1: " <<player1<< "\n";
    if (player1 != "x" && player1 != "o") {
        cout << "Invalid Input";
        return 0;
    }
    cout << "Player 2 - Choose \"x\" or \"o\": "<< "\n";
    cin >>player2;
    cout << "Player 2: " <<player2<< "\n";
    
    if (player2 != "x" && player2 != "o") {
        cout << "Invalid Input";
        return 0;
    }
    /* Assign x and o to two players */

    string Board[9] = {"a", "b", "c", "d", "e", "f", "g", "h", "i"};
    
   /* for loop for printing the updated output */
    for (int k = 0; k < 5; k++) {
        
    cout << "Player 1 - Choose where you would like to enter your "<<player1<< "\n";
    cin >>inp1;
    
    if (inp1 == "a"){
        Board[0] = player1;
    }    
    else if(inp1 == "b"){
        Board[1] = player1;
    }
    else if(inp1 == "c"){
        Board[2] = player1;
    }
    else if(inp1 == "d"){
        Board[3] = player1;
    }
    else if(inp1 == "e"){
        Board[4] = player1;
    }
    else if(inp1 == "f"){
        Board[5] = player1;
    }
    else if(inp1 == "g"){
        Board[6] = player1;
    }
    else if(inp1 == "h"){
        Board[7] = player1;
    }
    else if(inp1 == "i"){
        Board[8] = player1;
    }
    
    /* Show the current state of the board */
    cout << "" << "\n";
    cout << "  " <<Board[0]<< "  |  "<<Board[1]<< "  |  " <<Board[2]<<"\n" "  ---+---+---  " "\n" "  "<<Board[3]<< "  |  " <<Board[4]<< "  |  " <<Board[5]<< "\n" "  ---+---+---  " "\n" "  "<<Board[6]<< "  |  " <<Board[7]<< "  |  " <<Board[8]<<"\n";
    cout << "" << "\n";
    /* Show the current state of the board */
    
    /*Checking if player1 has won */
    if (Board[0] == Board[1] && Board[1] == Board[2]){
        cout << "You won!";
        exit(0);
    }
    else if(Board[3] == Board[4] && Board[4] == Board[5]){
        cout << "You won!";
        exit(0);
    }
    else if(Board[6] == Board[7] && Board[7] == Board[8]){
        cout << "You won!";
        exit(0);
    }
    else if(Board[0] == Board[3] && Board[3] == Board[6]){
        cout << "You won!";
        exit(0);
    }
    else if(Board[1] == Board[4] && Board[4] == Board[7]){
        cout << "You won!";
        exit(0);
    }
    else if(Board[2] == Board[5] && Board[5] == Board[8]){
        cout << "You won!";
        exit(0);
    }
    else if(Board[0] == Board[4] && Board[4] == Board[8]){
        cout << "You won!";
        exit(0);
    }
    else if(Board[2] == Board[4] && Board[4] == Board[6]){
        cout << "You won!";
        exit(0);
    }
    /*Checking if player1 has won */

    cout << "Player 2 - Choose where you would like to enter your "<<player2<< "\n";
    cin >>inp2;
    
    if (inp2 == "a"){
        Board[0] = player2;
    }    
    else if(inp2 == "b"){
        Board[1] = player2;
    }
    else if(inp2 == "c"){
        Board[2] = player2;
    }
    else if(inp2 == "d"){
        Board[3] = player2;
    }
    else if(inp2 == "e"){
        Board[4] = player2;
    }
    else if(inp2 == "f"){
        Board[5] = player2;
    }
    else if(inp2 == "g"){
        Board[6] = player2;
    }
    else if(inp2 == "h"){
        Board[7] = player2;
    }
    else if(inp2 == "i"){
        Board[8] = player2;
    }
    
    /* Printing the updated numbered board*/
    cout << "" << "\n";
    cout << "  " <<Board[0]<< "  |  "<<Board[1]<< "  |  " <<Board[2]<<"\n" "  ---+---+---  " "\n" "  "<<Board[3]<< "  |  " <<Board[4]<< "  |  " <<Board[5]<< "\n" "  ---+---+---  " "\n" "  "<<Board[6]<< "  |  " <<Board[7]<< "  |  " <<Board[8]<<"\n";
    cout << "" << "\n";
    /* Printing the updated numbered board */
    
    /*Checking if player2 has won */
    if (Board[0] == Board[1] && Board[1] == Board[2]){
        cout << "You won!";
        exit(0);
    }
    else if(Board[3] == Board[4] && Board[4] == Board[5]){
        cout << "You won!";
        exit(0);
    }
    else if(Board[6] == Board[7] && Board[7] == Board[8]){
        cout << "You won!";
        exit(0);
    }
    else if(Board[0] == Board[3] && Board[3] == Board[6]){
        cout << "You won!";
        exit(0);
    }
    else if(Board[1] == Board[4] && Board[4] == Board[7]){
        cout << "You won!";
        exit(0);
    }
    else if(Board[2] == Board[5] && Board[5] == Board[8]){
        cout << "You won!";
        exit(0);
    }
    else if(Board[0] == Board[4] && Board[4] == Board[8]){
        cout << "You won!";
        exit(0);
    }
    else if(Board[2] == Board[4] && Board[4] == Board[6]){
        cout << "You won!";
        exit(0);
    }
    /*Checking if player2 has won */
    
    }
    

    return 0;
}
