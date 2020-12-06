/*
 * savings.cpp
 *
 *  Created on: Nov 28, 2020
 *      Author: andrew
 */
#include <iomanip>

#include <iostream>

#include "savings.h"

using namespace std;

//Parameterized constructor

//Sets values for member variables

savings::savings(double investment, double monthDeposit,

    double rate, int years){

     this->initialDeposit = investment;

     this->monthlyDeposit = monthDeposit;

   this->interestRate = rate;

     this->numYears = years;

}

//Destructor

savings::~savings(){

}

//Prints report not considering monthly deposit

void savings::reportNoMonthlyDeposits(){

    //Print heading

    cout << "   Balance and Interest without additional Monthly Deposits" << endl;

    cout << "==========================================================================" << endl;

   //Print table heading

    cout << setw(10) << "Year"

        << setw(20) << "Year End Balance"

        << setw(35) << "Year End Earned Interest Rate" << endl;

    cout << "--------------------------------------------------------------------------" << endl;

    //Iterate for given years and calculate interest earned

    int currentyear = 1;

    double yearendBalance = this->initialDeposit;

    while(currentyear <= this->numYears){

        //Calculate interest

        double interestearned = yearendBalance * this->interestRate / 100;

        //Add it to year end Balance

        yearendBalance += interestearned;

        //Print the results for each year

        cout << right << setw(10) << currentyear << fixed << setprecision(2)

             << setw(20) << yearendBalance

            << setw(35) << interestearned << endl;

        //Increase the year by one

        currentyear++;

    }

}

//Prints report considering monthly deposit

void savings::reportWithMonthlyDeposits(){

    //Print heading

    cout << "   Balance and Interest without additional Monthly Deposits" << endl;

    cout << "==========================================================================" << endl;

    //Print table heading

    cout << setw(10) << "Year"

        << setw(20) << "Year End Balance"

        << setw(35) << "Year End Earned Interest Rate" << endl;

    cout << "--------------------------------------------------------------------------" << endl;

    //Iterate for given years and calculate interest earned

    int currentyear = 1;

    double yearendBalance = this->initialDeposit;

    while(currentyear <= this->numYears){

        //calulate interest monthly and find compoud interest

        int month = 1;

        double interestearned = 0.0;

        double monthendbalance = yearendBalance;

        while(month <= 12){

            //Add monthly deposit

            monthendbalance += this->monthlyDeposit;

            //Calculate monthly interest, interest rate is for annual. so divide the rate by 12

            double monthlyinterest = monthendbalance * this->interestRate / (100*12);

            //Add the monthly interest to yearly interest earned

            interestearned += monthlyinterest;

            // add the interest to monthend balance

            monthendbalance += monthlyinterest;

            //Increase the month by 1

            month++;

        }

        //After 12 months

        yearendBalance = monthendbalance;

        //Print the results

        cout << right << setw(10) << currentyear << fixed << setprecision(2)

            << setw(20) << yearendBalance

            << setw(35) << interestearned << endl;

        //Increase the year count by one

        currentyear++;

    }

}



