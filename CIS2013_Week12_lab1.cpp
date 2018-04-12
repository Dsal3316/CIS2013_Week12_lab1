#include <iostream>
#include <cstring>
using namespace std;


class Human {

	private:
		int legs=2;
		int arms=2;
		



	public:
		string hair;
		string name;

		Human(){
			setName();
			setHair();
			legs=2;
			arms=2;

		}

		int getLegs(){
			return legs;
		}

		int getArms(){
			return arms;
		}
		void setlegs(){
			cout<<"How many legs does this person Have? ";
			cin>>legs;
			}
		
		void setName(){
			cout << "What is the persons name? ";
			cin>> name;
			}
		void setHair(){
			cout << "What type of hair do you want? ";
			cin>> hair;
			}
};

class Man:public Human {
	public:

		bool hasEgo=false;
		string pee = "sitting";
};

class Woman:public Human {
	public:

		bool hasEgo=true;
		string pee = "standing";
};
int main(){

	Man bob;
	Woman sue;
	

	cout<<"Our "<< bob.name<< " has " << bob.getLegs() << "legs & " <<
		bob.getArms() << " arms their hair color is " << bob.hair << endl;

	cout << bob.name << " has an ego? " <<bob.hasEgo << endl<< " and pees "<< bob.pee << endl;

	sue.setlegs();

	cout<<"Our "<< sue.name<< "has " << sue.getLegs() << "legs & " <<
		sue.getArms() << " arms their hair color is " << sue.hair << endl;

	cout << sue.name << " has an ego? " <<sue.hasEgo << endl<< " and pees "<< sue.pee << endl;

	return 0;
}