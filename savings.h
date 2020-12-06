/*
 * savings.h
 *
 *  Created on: Nov 28, 2020
 *      Author: andrew
 */

#ifndef SAVINGS_H_

#define SAVINGS_H_

class savings{

    public:

        savings(double investment, double monthDeposit, double rate, int years);

        virtual ~savings();

        void reportNoMonthlyDeposits();

        void reportWithMonthlyDeposits();



    private:

        double initialDeposit;

        double monthlyDeposit;

        double interestRate;

        int numYears;

};

#endif /* SAVINGS_H_ */

