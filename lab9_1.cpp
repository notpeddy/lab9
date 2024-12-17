#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan, rate, Pay;
cout << "Enter initial loan: ";
cin >> loan;
cout << "Enter interest rate per year (%): ";
cin >> rate;
cout << "Enter amount you can pay per year: ";
cin >> Pay;

//use 'setw' to set width of table and 'left' to set left-alignment
//you can change input argument of 'setw()' to see the effect
//Try to change from 'left' to 'right' and see the effect
cout << setw(13) << left << "EndOfYear#";
cout << setw(13) << left << "PrevBalance";
cout << setw(13) << left << "Interest";
cout << setw(13) << left << "Total";
cout << setw(13) << left << "Payment";
cout << setw(13) << left << "NewBalance";
cout << "\n";

//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
//you can change input argument of 'setprecision()' to see the effect

double NewBalance, PrevBalance = loan, Interest, Total, Payment = Pay ;
int Year = 0;
do{
    Year = Year + 1;
    if(Year!=1) PrevBalance = NewBalance;
    Interest = (rate * PrevBalance) / 100;
    Total = PrevBalance + Interest;
    if(Total<Payment){
        Payment = Total;
    }
    NewBalance = Total - Payment;
    cout << fixed << setprecision(2);
    cout << setw(13) << left << Year;
    cout << setw(13) << left << PrevBalance;
    cout << setw(13) << left << Interest;
    cout << setw(13) << left << Total;
    cout << setw(13) << left << Payment;
    cout << setw(13) << left << NewBalance;
    cout << "\n";
}while (NewBalance!=0);

return 0;
}
