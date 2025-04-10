#include <iomanip>
#include <iostream>

using namespace std;

int current_balance ;
int interface_choice;
string name ;
string surname;
short age;
long long user_id;
long long card_number;
short card_ccv;
string card_date;

void sign_in ();
void signed_in();

void deposit () {
    int deposit;
    int deposit_choice;

    while (true) {
        cout << "------------------------------------" << endl;
        cout << "---------- Deposit Page ------------" << endl;
        cout << "1 for Deposit" << endl;
        cout << "2 for Previous Page" << endl;
        cin >> deposit_choice;

        switch (deposit_choice) {
            case 1:
                cout << "How much money you want to deposit: " << endl;
                cin >> deposit;
                if (deposit < 0) {
                    cout << "Your deposit is negative." << endl;
                    cout << "Your deposit must be positive." << endl;
                    continue;
                }else if (deposit > 100'000) {
                    cout << "Currently you can not deposit. " << "$" <<deposit << endl;
                    cout <<"Please try again. " << endl;
                    continue;
                 }else {
                     cout << "Please prepare your money: " << endl;
                    cout << "Please put the money carefully... " << endl;
                    current_balance += deposit;
                    cout << "Current balance is " << current_balance << endl;
                    cout << "Have a nice day" << endl;
                }break;
            case 2:
                signed_in();
                break;
            default:
                cout << "Invalid number. Please try again. " << endl;
                continue;
        }

    }
}

void withdrawal() {
    int withdrawal;
    int withdrawal_choice;
    do {
        cout << "------------------------------------" << endl;
        cout << "--------- Withdrawal Page ----------" << endl;
        cout << "1 for Withdrawal" << endl;
        cout << "2 for Previous Page" << endl;
        cin >> withdrawal_choice;

        switch (withdrawal_choice) {
            case 1:
                cout << "How much money you want to withdraw: " << endl;
            cin >> withdrawal;
            if (withdrawal < 0) {
                cout << "Your withdrawal is negative." << endl;
                cout << "Your withdrawal must be positive." << endl;
                signed_in();
                return;
            }else if (withdrawal > current_balance) {
                cout << "You dont have enough balance: " << current_balance << endl;
                cout << "Please try again: " << endl;
                signed_in();
                return;
            }
            else {
                cout << "Your withdrawal preparing please wait " << endl;
                cout << "Your " << withdrawal << " Prepared You can take your money" << endl;
                current_balance -= withdrawal;
                cout << "Current balance is " << current_balance << endl;
                cout << "Have a nice day" << endl;
                signed_in();
                return;

            }
            case 2:
                signed_in();
                break;
            default:
                cout << "Invalid number. Please try again. " << endl;
                continue;
        }
    }while (withdrawal_choice == 2);

}

void balance_shower() {

    int withdrawal_choice;

    while (true) {
        cout << "-----------------------------------------" << endl;
        cout << "---------- Balance Shower Page ----------" << endl;
        cout << "1 for Current Balance" << endl;
        cout << "2 for Previous Page" << endl;
        cin >> withdrawal_choice;

        switch (withdrawal_choice) {
            case 1:
                cout << "Current Balance: " << current_balance << endl;
                break;
            case 2:
                signed_in();
                return;
            default:
                cout << "Invalid number. Please try again. " << endl;
                break;
        }
    }
}

void helper() {

    int helper_choice;

    while (true) {
        cout << "------------------------------------" << endl;
        cout << "----------- Helper Page ------------" << endl;
        cout << "1 for I Cant Deposit: " << endl;
        cout << "2 for I Cant Withdrawal: " << endl;
        cout << "3 for I Cant See My Balance: " << endl;
        cout << "4 for Contact Informations: " << endl;
        cin >> helper_choice;

        switch (helper_choice) {
            case 1:
                cout << "------------------------------------" << endl;
                cout << "----------- Deposit Help -----------" << endl;
                cout << "Option 1: You might put your card wrong . Please put the card where the chipset" << endl;
                cout << "Option 2: Your card might be limited . Please contact with us! " << endl;
                cout << "Option 3: You might try to deposit more then ATM limit . Please try another ATM" << endl;
                signed_in();
                return;
            case 2:
                cout << "------------------------------------" << endl;
                cout << "---------- Withdrawal Help ---------" << endl;
                cout << "Option 1: You might put your card wrong . Please put the card where the chipset" << endl;
                cout << "Option 2: Your card might be limited . Please contact with us! " << endl;
                cout << "Option 3: You might try to withdrawal more then your current balance . Please check your current balance!" << endl;
                signed_in();
                return;
            case 3:
                cout << "------------------------------------" << endl;
                cout << "--------- See Balance Help ---------" << endl;
                cout << "Option 1: ATM might be broken . Please try another ATM." << endl;
                cout << "Option 2: Your account might be blocked . Please contact with us! " << endl;
                signed_in();
                return;
            case 4:
                cout << "---------- Contact Informations ---------" << endl;
                cout << setw(20) << "Phone Number: " << "0212 212 22 22" << endl;
                cout << setw(20) << "Mail adress: " << "bank@gmail.com" << endl;
                cout << setw(20) << "Fax: " << "22 22 22 22" << endl;
                signed_in();
                return;
             }
    }
}

void loan() {
    double income ;
    int loaner_choice;
    double years_of_experience ;
    double loan_amount ;


    cout << "---------------------------" << endl;
    cout << "-------- Loan Page --------" << endl;
    cout << "1 for House Loan." << endl;
    cout << "2 for Car Loan." << endl;
    cout << "3 for Personal Loan." << endl;
    cout << "4 for Previous Page." << endl;
    cin >> loaner_choice;


    if (loaner_choice == 4) {
        signed_in();

    }

    while (true) {

        cout << "What is your income: " << endl;
        cin >> income;
        cout << "How many years of experience you have: " << endl;
        cin >> years_of_experience;

        switch (loaner_choice) {
            case 1:
                if (income < 40'000 || years_of_experience < 2) {
                    loan_amount = (income * years_of_experience) /2;
                    cout << "Our Loan Offer For You: " << loan_amount << endl;
                }else if (income < 80'000 || years_of_experience < 5) {
                    loan_amount = (income * years_of_experience) /1.5;
                    cout << "Our Loan Offer For You: " << loan_amount << endl;
                }else {
                    loan_amount = (income * years_of_experience) /1.2;
                    cout << "Our Loan Offer For You: " << loan_amount << endl;
                }
                signed_in();

            case 2:
                if (income < 40'000 || years_of_experience < 2) {
                    loan_amount = (income * years_of_experience) /3;
                    cout << "Our Loan Offer For You: " << loan_amount << endl;
                }else if (income < 80'000 || years_of_experience < 5) {
                    loan_amount = (income * years_of_experience) /2;
                    cout << "Our Loan Offer For You: " << loan_amount << endl;
                }else {
                    loan_amount = (income * years_of_experience) /1.5;
                    cout << "Our Loan Offer For You: " << loan_amount << endl;
                }
                signed_in();

            case 3:
                if (income < 40'000 || years_of_experience < 2) {
                    loan_amount = (income * years_of_experience) /4;
                    cout << "Our Loan Offer For You: " << loan_amount << endl;
                }else if (income < 80'000 || years_of_experience < 5) {
                    loan_amount = (income * years_of_experience) /3;
                    cout << "Our Loan Offer For You: " << loan_amount << endl;
                }else {
                    loan_amount = (income * years_of_experience) /2;
                    cout << "Our Loan Offer For You: " << loan_amount << endl;
                }
                signed_in();

            default:
                cout << "Invalid Choice. Please try again." << endl;

        }
    }
}


void display_card() {
    int  card_choice;

    while (true) {
        cout << "1 for Show Card: " << endl;
        cout << "2 for Previous Page: " << endl;
        cin >> card_choice;
        switch (card_choice) {
            case 1:
                cout << "------------------------------" << endl;
                cout << "--------- Bank Card ----------" << endl;
                cout << "-----------------------------" << endl;
                cout << setw(15) << "Holder Name: " << name << endl;
                cout << setw(15) << "Holder Surname: " << surname << endl;
                cout << setw(15) << "Card Number: " << card_number << endl;
                cout << setw(15) << "Expiry date: " << card_date << endl;
                cout << setw(15) << "Security Code: " << card_ccv << endl;
                cout << "------------------------------" << endl;
                cout << "------------------------------" << endl;
                cout << endl << endl;
                signed_in();

            case 2:
                signed_in();

            default:
                cout << "Invalid Choice" << endl;

        }
    }
}

void sign_in () {


    cout << "----------- Bank System -----------" << endl;
    cout << "------------------------------------" << endl;
    cout << "What is your name: " << endl;
    cin >> name;
    cout << "What is your surname: " << endl;
    cin >> surname;
    cout << "What is your id: " << endl;
    cin >> user_id;
    while (true) {
        cout << "What is your age: " << endl;
        cin >> age;
        if (age < 18) {
            cout << "Your age is not enough for bank." << endl;
            exit(0);
        }
         if (age >= 100) {
            cout << "It is not safe to open account alone at this age" << endl;
            cout << "Please contact with our help service" << endl;
            exit(0);
        }
        cout << "Age Checking... " << endl << "Age Approved... " << endl;
        break;
    }
    cout << "What is your card number: " << endl;
    cin >> card_number;
    cout << "What is your card ccv: " << endl;
    cin >> card_ccv;
    cout << "What is your card date: " << endl;
    cin >> card_date;

    signed_in();

}
void signed_in() {
    cout << "--------------- Signing ---------------" << endl;
    cout << "---------------------------------------" << endl;
    cout << "---------------- PUDUK ----------------" << endl;
    cout << "---------------- Bank -----------------" << endl;
    cout << "---------------------------------------" << endl;
    cout << "1 for Deposit: " << endl;
    cout << "2 for Withdrawal: " << endl;
    cout << "3 for Current Balance: " << endl;
    cout << "4 for Help: " << endl;
    cout << "5 Loan Page: " << endl;
    cout << "6 Bank Card: " << endl;
    cout << "7 for Quit: " << endl;


    while (true) {
        cin >> interface_choice;
        switch (interface_choice) {
            case 1:
                deposit();
                break;
            case 2:
                withdrawal();
                break;
            case 3:
                balance_shower();
                break;
            case 4:
                helper();
                break;
            case 5:
                loan();
                break;
            case 6:
                display_card();
                break;
            case 7:
                cout << "Have a nice day!" << endl;
                exit(0);
            default:
                cout << "Invalid choice." << endl;

        }
    }
}
int main() {
    short first_choice ;
    cout << "-----------------------------------" << endl;
    cout << "------------ Puduk Bank -----------" << endl;
    cout << "------------------------------------" << endl;
    while (true) {
        cout << "1 for sign in the bank account: " << endl;
        cout << "2 for quit: " << endl;
        cin >> first_choice;

        switch (first_choice) {
            case 1:
                cout << "Signing the account : " << endl;
                cout << "This can take a while" << endl;
                cout << endl;
                sign_in();
                break;
            case 2:
                cout << "Quiting...  " << endl;
                exit(0);
            default:
                cout << "Invalid Choice" << endl;
                break;
        }
    }
}
