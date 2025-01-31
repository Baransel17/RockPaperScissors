#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, const char** argv) {

    int player_choice, opponent_choice;
    int player_count = 0;
    int opponent_count = 0;
    int rock = 1;
    int paper = 2;
    int scissors = 3;

    srand((unsigned int) time(NULL));
    
    cout << "           ROCK PAPER SCISSORS!" << endl;
    cout << endl;

  do{

    cout << "Select any of the following options: " << endl;
    cout << "1- ROCK" << endl;
    cout << "2- PAPER" << endl;
    cout << "3- SCISSORS" << endl;
    cout << "Your choice is : ";
    cin >> player_choice;
    cout << endl;
    cout << "-------------------------------------" << endl;

    opponent_choice = (rand() % 3) + 1;
    
    if(opponent_choice == 1){
        cout << "Opponent chose ROCK." << endl;
        cout << endl;
    }
    else if (opponent_choice == 2)
    {
        cout << "Opponent chose PAPER." << endl;
        cout << endl;
    }
    else if (opponent_choice == 3)
    {
        cout << "Opponent chose SCISSORS." << endl;
        cout << endl;
    }

    if(player_choice == opponent_choice){
        cout << "You:" << player_count << " " << opponent_count << ":Opponent" << endl;
        cout << "Draw! Try again." << endl;
        cout << endl;
    }
    else if (player_choice == 1 && opponent_choice == 3)
    {
        player_count++;
        cout << "You:" << player_count << " " << opponent_count << ":Opponent" << endl;
        cout << "YOU WIN!" << endl;
        cout << endl;
    }
    else if (player_choice == 1 && opponent_choice == 2)
    {
       opponent_count++;
       cout << "You:" << player_count << " " << opponent_count << ":Opponent" << endl;
       cout << "YOU LOSE :(" << endl;
       cout << endl; 
    }
    else if (player_choice == 2 && opponent_choice == 1)
    {
        player_count++;
        cout << "You:" << player_count << " " << opponent_count << ":Opponent" << endl;
        cout << "YOU WIN!" << endl;
        cout << endl;
    }
    else if (player_choice == 2 && opponent_choice == 3)
    {
        opponent_count++;
        cout << "You:" << player_count << " " << opponent_count << ":Opponent" << endl;
        cout << "YOU LOSE :(" << endl; 
        cout << endl;
    }
    else if (player_choice == 3 && opponent_choice == 1)
    {
        opponent_count++;
        cout << "You:" << player_count << " " << opponent_count << ":Opponent" << endl;
        cout << "YOU LOSE :(" << endl;
        cout << endl;
    }
    else if (player_choice == 3 && opponent_choice == 2)
    {
        player_count++;
        cout << "You:" << player_count << " " << opponent_count << ":Opponent" << endl;
        cout << "YOU WIN!" << endl;
        cout << endl;
    }

    if(player_count == 3){
        cout << endl;
        cout << "You Won, Congrats!" << endl;
        break;
    }
    else if (opponent_count == 3)
    {
        cout << endl;
        cout << "Opponent Won, Shame -_-" << endl;
        break;       
    }

  }while(player_choice != 4);

    return 0;
}