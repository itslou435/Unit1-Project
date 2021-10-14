// Unit1 Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>
using namespace std;

//variables
float win, windows, doors, perimeter, totalPrice, finalPrice, length, width, perHour;
const float tax = 0.13;

// void functions
float door(float doors)
{
	return doors * 12;
	
}
float window(float windows)
{
	return win * 12;
	
}
float TotalPrice(float doors, float windows, float perimeter)
{
	return  doors + windows + perimeter;
	
}
float  perimeterC(float length, float width)
{
	return length + width + length + width;
	
}
float FinalPrice( float totalPrice)
{
	return totalPrice + (totalPrice * tax);
	
}

float pHour(float perimeter)
{
	return perimeter / 80;
}
float nHour(float perHour)
{
	return perHour * 43.53;
}
int main()
{	//Input
	cout << "please enter the length of the room you would like us to trim\n";
	cin >> length, "\n";
	cout << "Now enter the width of the room you would like us to trim as well.\n";
	cin >> width, "\n";
	cout << "How many windows do you have in this room\n";
	cin >> win, "\n";
	cout << "Now enter how many doors you have in this room as well\n";
	cin >> doors, "\n";
	system("cls");

	//calculations
	 perimeter = perimeterC(length,width);
	 doors = door(doors);
	 windows = window(win);
	 totalPrice = TotalPrice(doors,windows,perimeter);
	finalPrice = FinalPrice(totalPrice);
	perHour = pHour(perimeter);


	//Output
	cout << "The perimeter of this room is: ";
	cout << perimeter << endl;
	cout << "The measurment of feet from your doors is: ";
	cout << doors << endl;
	cout << "The measurement of feet from your windows is: ";
	cout << windows << endl;
	cout << " Your subtotal price is: ";
	cout << totalPrice << endl;
	cout << " The Final Price With Tax Is: ";
	cout << finalPrice << endl;










	// The Recipt
	cout << "_________________________________________________";
	cout << "|                                               |";
	cout << "|                    Recipt                     |";


}


