#include <iostream>
using namespace std;

void rules()
{
    system("cls");
    cout << "NUMBER GUESSING RULES!"<<endl;
    cout << "1- You can Choose a number between 1 to 10"<<endl;
    cout << "2- if your bet is wrong , you lose the amount you bet"<<endl;
    cout << "3- if you win , you get 10 times of the money bet "<<endl;
  
    cout << "\t======= BEST OF LUCK - Have a Fun ============"<<endl ; 
}

int main()
{
    string player;
    char choice;
    int balance , bettingAmount , guess , dice ; 


      cout << "\n\n======== WELCOME ======="<<endl;
      cout << "insert your name  : ";
       cin>>player ; 
      cout << " Enter the starting balance to play game : $";
       cin >> balance;
    do {
        
        rules();
        cout << "Your current balance is $ " << balance <<endl ;

        do
        {
            cout << "Hello " <<player<<", enter amount to bet : $";
            cin >> bettingAmount;

            if(bettingAmount > balance)
                cout << "Betting balance can't be more than current balance!"<<endl;
                

        }while(bettingAmount > balance);

        do
        {
            cout << "\nGuess any betting number between 1 and 10 :";
            cin >> guess;

            if(guess <= 0 || guess > 10){
                cout << "Number should be between 1 to 10"<<endl;
                    cout<<"Re-enter number: "<<endl;
                }
        }while(guess <= 0 || guess > 10);


        dice = rand()%10 + 1;

        if(dice == guess)
        {
            cout << "You're lucky ! You have won !" << bettingAmount * 10;
            balance = balance + bettingAmount * 10;
        }

        else
        {
            cout << "\n better luck next time ! You lost $ "<< bettingAmount <<endl;
            balance = balance - bettingAmount;
        }

        cout << " The winning number was : " << dice <<"\n";
        cout << "\n"<<player<<", You have balance of $ " << balance << "\n";
        if(balance == 0)
        {
            cout << "You have no money to play ";
            break;
        }
        cout << "\n Do you want to play again (y/n)? ";
        cin >> choice;
    }while(choice =='Y'|| choice=='y');

    cout << "\n\n"<<endl;
    cout << "Thanks for playing the game "<<endl;
    return 0;
}
