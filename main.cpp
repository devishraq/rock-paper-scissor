#include <iostream>
#include <ctime>

using namespace std;


char getPlayerInput();
char getComputerInput();
void showInput(char Input);
void resultSelector(char Player, char Computer);


int main(){

    char player, computer;

    player = getPlayerInput();
    cout << "Your ";
    showInput(player);

    computer = getComputerInput();
    cout << "Computer ";
    showInput(computer);

    resultSelector(player, computer);

    return 0;
}

char getPlayerInput(){
    char gesture;

    cout<<"Rock, Paper, Scissor\n";
    cout<<"*********************\n";

    cout << "R -> Rock \n" << "P -> Paper \n" << "S -> Scissor \n";
    cout<<"Enter Your Gesture:- ";
    cin >> gesture;

    return gesture;
}
char getComputerInput(){
    srand(time(nullptr));

    int rand_num = rand()%3;
    char gesture;

    switch (rand_num) {
        case 0: gesture = 'R'; break;
        case 1: gesture = 'P'; break;
        case 2: gesture = 'S'; break;
    }

    return gesture;
}
void showInput(char Input){
    string returned = "Gesture is: ";
    switch (Input) {
        case 'R':
            cout << returned + "Rock\n"; break;
        case 'P':
            cout << returned + "Paper\n"; break;
        case 'S':
            cout<< returned + "Scissor\n"; break;
    }

}
void resultSelector(char Player, char Computer){
    string result;
    switch (Player) {
        case 'R':
            if (Computer == 'R') {result = "Match Tie!";}
            else if(Computer == 'P'){result = "Computer Wins!";}
            else{result = "You Win!";}; break;
        case 'P':
            if (Computer == 'P') {result = "Match Tie!";}
            else if(Computer == 'R'){result = "You Win!";}
            else{result = "Computer Wins!!";}; break;
        case 'S':
            if(Computer == 'S'){result = "Match Tie!";}
            else if(Computer == 'R'){result = "Computer Wins!";}
            else{result = "You win!";} ; break;
    }

    cout << result;

}

