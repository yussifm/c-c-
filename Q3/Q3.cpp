#include <iostream>

using namespace std;

void Deposit(double &balance){
	int amount;
	cout<<"How much Money do you want to deposit: "<<endl;
	cin>>amount;
	if(amount <= 0){
		cout<<"reenter amonut"<<endl;
		cin>>amount;
	}
	else{
		balance += amount;
		cout<<"deposit succeesfull"<<endl;
		cout<<"New amount is: GHc"<<balance<<endl;
	}
	
	
}

void Check_Balance(double balance){
	cout<<"Your balance is: GHc"<< balance<<endl;
}

void withdraw(double balance){
	int amount;
	
	cout<<"How much Money do you want to withdraw: "<<endl;
	cin>>amount;
	if(amount <= 0){
		cout<<"reenter amonut"<<endl;
		cin>>amount;
	}
	else{
		int notes[] = {50,20,10,5,2,1};
		if (notes[0]% amount == 0){
			cout<<"You have requested for "<<amount<<" and will be issue with "<<notes[1]<<" pieces of 20GHs notes +";
			cout<<notes[2]<< "piecse of 10Ghs notes + "<<notes[3]<<" pieces of 5GHs notes + "<<notes[4]<< "pieces of 2GHs notes + "<<notes[5]<<"pieces of 1GHs notes"<<endl;
			
		}
		
		if(notes[1]% amount == 0){
			cout<<"You have requested for "<<amount<<" and will be issue with "<<notes[0]<<" pieces of 50GHs notes + ";
			cout<<notes[2]<< "piecse of 10Ghs notes + "<<notes[3]<<" pieces of 5GHs notes + "<<notes[4]<< "pieces of 2GHs notes + "<<notes[5]<<"pieces of 1GHs notes"<<endl;
	
		}
		
		if(notes[2]% amount == 0){
			cout<<"You have requested for "<<amount<<" and will be issue with "<<notes[0]<<" pieces of 50GHs notes + "<<notes[1]<<" pieces of 20GHs notes +";
			cout<<notes[3]<<" pieces of 5GHs notes + "<<notes[4]<< "pieces of 2GHs notes + "<<notes[5]<<"pieces of 1GHs notes"<<endl;
	
			
		}
		
		if(notes[3]% amount == 0){
			cout<<"You have requested for "<<amount<<" and will be issue with "<<notes[0]<<" pieces of 50GHs notes + "<<notes[1]<<" pieces of 20GHs notes +";
			cout<<notes[2]<< "piecse of 10Ghs notes + "<<notes[4]<< "pieces of 2GHs notes + "<<notes[5]<<"pieces of 1GHs notes"<<endl;
	
		}
		
		if(notes[4]% amount == 0){
			cout<<"You have requested for "<<amount<<" and will be issue with "<<notes[0]<<" pieces of 50GHs notes + "<<notes[1]<<" pieces of 20GHs notes +";
			cout<<notes[2]<< "piecse of 10Ghs notes + "<<notes[3]<<" pieces of 5GHs notes + "<<notes[5]<<"pieces of 1GHs notes"<<endl;
	
		}
		
		if(notes[5]% amount == 0){
			cout<<"You have requested for "<<amount<<" and will be issue with "<<notes[0]<<" pieces of 50GHs notes + "<<notes[1]<<" pieces of 20GHs notes +";
			cout<<notes[2]<< "piecse of 10Ghs notes + "<<notes[3]<<" pieces of 5GHs notes + "<<notes[4]<<endl;
	
		}
		else{
			cout<<"You have requested for "<<amount<<" and will be issue with "<<notes[0]<<" pieces of 50GHs notes + "<<notes[1]<<" pieces of 20GHs notes +";
			cout<<notes[2]<< "piecse of 10Ghs notes + "<<notes[3]<<" pieces of 5GHs notes + "<<notes[4]<< "pieces of 2GHs notes + "<<notes[5]<<"pieces of 1GHs notes"<<endl;
	
		}
		
//		int fifty = amount%50;
//		int twi = amount%20;
//		int ten = amount%10;
//		int fiv = amount%5;
//		int two = amount%2;
//		int one = amount%1; 
//		balance -= amount;
	
		balance -= amount;
		cout<<endl;
		cout<<" withdraw successfull \n amount withdraw: Ghc"<<amount<<" and amount left is GHc"<<balance;
	
	}

	
}

int main(){
	double balance = 10000; 
	int pin = 1234, tmpPin;
	int bakOption;
	
	cout<<"Please Enter your pin(deflut:1234): "<<endl;
	cin>>tmpPin;
	
	if(pin == tmpPin){
		cout<<"Choose your Banking Options \n (1) Deposit \n (2) Check balance \n (3) Withdraw \n"<<endl;
		cin>>bakOption;
		switch(bakOption){
			case(1):
				Deposit(balance);
				cout<<endl;
				break;
				
			case(2):
				Check_Balance(balance);
				break;
			
			case(3):
				withdraw(balance);
				break;
			
		}
		
		
	}
	
	else{
		cout<<"Invalid pin "<<endl;
		return 0;
	}

}
