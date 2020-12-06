//============================================================================
// Name        : Airgead.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "savings.h"

using namespace std;

int main()

{

    while(1)

    {

        //Print heading

        cout << "*************************************" << endl;

        cout << "*************Data Input**************" << endl;

        cout << "Initial Investment Amount: " << endl;

        cout << "Monthly Deposit: " << endl;

        cout << "Annual Interest: " << endl;

        cout << "Number of years: " << endl;

        //system("PAUSE");

        system("read -p 'Press Enter to continue . . .' var");

        cout << endl;

        //Get the inputs from user

        cout << "*************************************" << endl;

        cout << "*************Data Input**************" << endl;

        cout << "Initial Investment Amount: $";

        double investment, monthlydeposit, interestrate;

        int years;

        cin >> investment;

        cout << "Monthly Deposit: $";

        cin >> monthlydeposit;

        cout << "Annual Interest: %";

        cin >> interestrate;

        cout << "Number of years: ";

        cin >> years;



        //system("PAUSE");

        system("read -p 'Press Enter to continue . . .' var");



        //Create savings object using the given inputs

        savings mysavings = savings(investment, monthlydeposit, interestrate, years);

        cout << endl;

        //Invoke the report methods

        mysavings.reportNoMonthlyDeposits();

        cout << endl;



        //call monthly deposit report, if it has monthly deposit at least $1

        if(monthlydeposit > 0){

            mysavings.reportWithMonthlyDeposits();

        }



        //Get the user choice if they want to try another

        cout << endl << "Do you want to try another? (y/n): ";

        string choice;

        cin >> choice;

        //If user doesnot want to try another, break the loop

        if(choice != "y"){

            break;

        }

        cout << endl;

    }

    return 0;

}
