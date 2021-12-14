#include<iostream>
#include<iomanip> 
using namespace std;

int main(){	
	double loan, interest, pyear; 
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> pyear;


	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	 
	do{
		int x = x + 1;
		cout << fixed << setprecision(2);
		cout << setw(13) << left << x; 
		cout << setw(13) << left << loan;
		cout << setw(13) << left << loan*interest*0.01;
		cout << setw(13) << left << loan + loan * interest * 0.01; 
		if ((loan + loan * interest * 0.01) - pyear <= 0){
			pyear = loan + loan * interest * 0.01;
		}
		cout << setw(13) << left << pyear; 
		cout << setw(13) << left << (loan + loan * interest * 0.01) - pyear; 
		loan = (loan + loan * interest * 0.01) - pyear;
		if (loan == 0) break;
		cout << "\n";	
	}while(true);

	return 0;
}
