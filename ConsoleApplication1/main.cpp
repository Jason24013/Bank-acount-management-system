#include <stdio.h>
#include <conio.h>
#include <iostream>

class bank
{
    char name[100], add[100], y;
        int balance;
public:
    void open_account();
    void deposite_moeny();
    void Widthdraw_money();
    void Display_account();

};

void bank::open_account()
{
    std::cout << "enter your full name :: ";
    std::cin.getline(name, 100);
    std::cout << "enter your address ::";
    std::cin.ignore();
    std::cin.getline(add, 100);
    std::cout << "what type of account you want to open saving (s) or current (c)";
    std::cin >> y;
    std::cout << "enter amount for deposite :: ";
    std::cin >> balance;
    std::cout << "your account is created \n";
}

void bank::deposite_moeny()
{
    int a;
    std::cout << "enter how much you deposite :: ";
    std::cin >> a;
    balance += a;
    std::cout << "total amount you deposite :: \t " << balance;
}

void bank::Display_account()
{
    std::cout << "your full name :: \t" << name;
    std::cout << "your address :: \t " << add;
    std::cout << "type of account that you open :: \t" << y;
    std::cout << "amount you deposite :: \t" << balance;
}

void bank::Widthdraw_money()
{
    float amount;
    std::cout << "\n withdraw :: ";
    std::cout << "enter amount to withdraw :: ";
    std::cin >> amount;
    balance = balance - amount;
    std::cout << "now total amount is left ::" << balance;

}

int main()
{
    int ch,x;
    bank bnk;
    do {
        std::cout << "1) Open account \n";
        std::cout << "2) deposite money \n";
        std::cout << "3) widthdraw money \n";
        std::cout << "4) Display account \n";
        std::cout << "5) Exit \n";
        std::cout << "select the option from above \n";
        std::cin >> ch;
        switch (ch)
        {
        case 1:
            std::cout << "1) open account \n";
            bnk.open_account();
            break;
        case 2:
            std::cout << " 2)deposite money \n";
            bnk.deposite_moeny();
            break;
        case 3:
            std::cout << " 3) withdraw money : \n";
            bnk.Widthdraw_money();
            break;
        case 4:
            std::cout << "4)Display account \n";
            bnk.Display_account();
            break;
        case 5:
            if (ch == 5)
            {
                exit(1);
            }
        default:
            std::cout << "this is not exist try again \n ";
        }
        std::cout << "\n do you want to select next option then press :: y \n";
        std::cout << "if you want to exit then press :: N ";
        x = _getch();
        if (x == 'n' || x == 'N')
            exit(0);
    } while (x == 'y' || x == 'Y');

        _getch();
        return 0;
    
}

