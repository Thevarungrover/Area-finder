#include<iostream>
using namespace std;

// PROTOTYPES
int area(float s); // SQUARE
int area(float l,float b); // RECTANGLE

// MAIN FUNCTION
main(){
	cout<<"Pick one to find area :\n1.Square\n2.Rectangle\n3.Exit";
	cout<<"\nEnter your choice : ";
	int choice;
	float s,l,b;
	cin>>choice;
		
	switch(choice)
	{
		case 1 :// SQUARE	
			cout<<"\nEnter the side of square : ";
			cin>>s;
			area(s); // FUNCTION CALL
			break;
			
		case 2 :// RECTANGLE	
			cout<<"\nEnter the lenght and breadth of rectangle : ";
			cin>>l>>b;
			area(l,b); // FUNCTION CALL
			break;
			
		case 3 :// EXIT
			cout<<"\n--Exiting--";
			exit(0);
			break;
			
		default : cout<<"\n\tINVALID CHOICE!! PICK AGAIN\n";
			main(); // CALLING MAIN FUNCTION TO PRINT MENU AGAIN
	}
	return 0;
}

// FOR SQUARE
 area(float s){
	float a = s*s;
	cout<<"\nThe area of square with side "<<s<<" is "<<a;
}

// FOR RECTANGLE
int area(float l,float b){
	float a = l * b;
	cout<<"\nThe area of rectangle with length "<<l<<" and breadth "<<b<<" is "<<a;
}

