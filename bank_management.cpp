#include<bits/stdc++.h>
#include<conio.h>
#include<stdio.h>

using namespace std ;

class Bank{

    char name[50] , address[50] , y ;
    int amount ;

    public : 

    void open_account() ;
    void deposit_money() ;
    void withdraw_money() ;
    void display_account() ;
};

void Bank :: open_account(){

    cout << "Enter your full Name : " ;
    cin.ignore() ;
    cin.getline(name,50) ;

    cout << "Enter your address :" ;
    cin.ignore() ;
    cin.getline(address,50) ;

    cout << "What type of account you want to open saving (s) or current (c) ? " << endl ;
    cin >> y ;
    
    cout << "Enter amount for deposit " << endl ;
    cin >> amount ;

    cout << "Your account is succefully created " << endl ;
}

void Bank :: deposit_money(){

    int a ;
    cout << "Enter how much money do you want to deposit ?" << endl ;
    cin >> a ;
    amount += a ;

    cout << "Your total balamce is " << amount << endl ;
}

void Bank :: display_account(){

    cout << "Your Full name : " << name << endl ;
    cout << "Address : " << address << endl ;
    cout << "Type of account you creates " << y << endl ;
    cout << "Available balance = " << amount << endl ;
}

void Bank :: withdraw_money(){

    float amt ;

    cout << "\n Withdraw :: " << endl ;
    cout << "Enter the amount you want to withdraw " << endl ;
    cin >> amt ;  
    amount -= amt ;
    cout << " Succesfully Withdraw ! " << endl ;
    cout << "Available balance = " << amount << endl ;  
}

int main(){

    int choice , x ;
    Bank obj ;

    do{
        cout << "1) Open account " << endl ;
        cout << "2) Deposit Money " << endl ;
        cout << "3) Withdraw Money " << endl ;
        cout << "4) Display account " << endl ;
        cout << "5) Exit " << endl ;
        cout << "Select the option from above " << endl ;
        cin >> choice ;

        switch(choice){

            case 1 : " 1) Open Account \n " ;
            obj.open_account() ;
            break;

            case 2 : " 2) Deposit Money \n" ;
            obj.deposit_money() ;
            break;

            case 3 : "3) Withdraw Money \n " ;
            obj.withdraw_money() ;
            break;

            case 4 : "4) Display \n " ;
            obj.display_account() ;
            break;

            case 5 : 
            if(choice == 5){
                exit(1) ;
            }

            default:
            cout << "This is not exist choice " << endl ;
        }

        cout << "\n Do you want to select next option then press :: y \n " ;
        cout << "if you want exist then press :: N " ;
        x = getch() ;

        if(x == 'N' || x == 'n')
           exit(0) ;
    }while(x == 'Y' || x == 'y') ;

    getch() ;
    return 0 ;
}