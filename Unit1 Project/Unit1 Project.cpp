// Unit1 Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <string>
using namespace std;

//variables
float win, windows, doors, perimeter, totalFeet,totalFeet2, finalPrice, length, width, perHour,numHour,tPrice,allPrice;
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
float  perimeterC(float length, float width)
{
	return length + width + length + width;

}
float TotalFeet(float doors, float windows, float perimeter)
{
	return  doors + windows + perimeter;
	
}
float tFeet(float totalFeet)
{
	return totalFeet / 80;
}
float totalPrice(float totalFeet2 )
{
	return totalFeet2 * 43.53;
}

float FinalPrice(float tprice)
{
	return tPrice + (tPrice * tax);

}
float nHour(float totalFeet)
{
	return totalFeet / 53;
}
float pHour(float numHour)
{
	return numHour * 22.50;
}
float aPrice(float perHour, float finalPrice)
{
	return perHour + finalPrice;
}

//Main Function
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
	totalFeet = TotalFeet(doors,windows,perimeter);
	totalFeet2= tFeet(totalFeet);
	tPrice = totalPrice(totalFeet2);
	finalPrice = FinalPrice(finalPrice);
	numHour = nHour(totalFeet);
	perHour = pHour(numHour);
	allPrice = aPrice(perHour, finalPrice);

	// The Output
	// The Recipt
	cout << " __________________________________________________";
	cout << " |                                               | ";
	cout << "|                                    Recipt                          |\n ";
	cout << "| The perimeter of this room is:","|";                               
	cout << perimeter << "                |" << endl ;
	cout << " | The measurment of feet from your doors is:","|";
	cout << doors << "    |" << endl;
	cout << " | The measurement of feet from your windows is: ","|";
	cout << windows << "|" << endl;
	cout << " |  The total feet of this room is:  ","  |";
	cout << totalFeet << "           |" << endl;
	cout << " | your subtotal price is:   ","   |";
	cout << tPrice<< "$               |"<< endl;
	cout << " |  The Final Price With Tax Is: ","   |";
	cout << allPrice << "$          |" << endl;
	cout << " | This job Will Take: ","       |";
	cout << numHour << "                     |" << endl;
	cout << "  __________________________________________________";
}