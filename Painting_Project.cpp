/*Create 1 C++ file "THE PAINTING PROJECT" to calculate the number of gallons
and total cost of materials and labor for a painting job. Also select the lowest
bidder for the painting project. Save your file in the folder "PROJECTS"*/
/*Create 1 C++ file "THE PAINTING PROJECT" to calculate the number of gallons
and total cost of materials and labor for a painting job. Also select the lowest
bidder for the painting project. Save your file in the folder "PROJECTS"*/
/*Create 1 C++ file "THE PAINTING PROJECT" to calculate the number of gallons
and total cost of materials and labor for a painting job. Also select the lowest
bidder for the painting project. Save your file in the folder "PROJECTS"*/
#include<iostream>
#include<string>
#include<math.h>
using namespace std;

double getJobCost();

int main()
{

double Total_Cost;
double min_Total_Cost;
string bidder_name;
string min_bidder_name;
cout << "+--------------------------------------------------+" << endl;
cout << " Please enter bidder name: ";
// getline(cin, bidder_name);
cin>>bidder_name;
min_Total_Cost = getJobCost();
bidder_name= min_Total_Cost;
min_bidder_name = bidder_name;

for(int i=0; i<1; i++)
{
    cout << "+--------------------------------------------------+" << endl;
    cout << " Please enter bidder name: ";
    //getline(cin, bidder_name);
    cin >> bidder_name;
    Total_Cost = getJobCost();
    if (Total_Cost < min_Total_Cost)
    {
        min_Total_Cost = Total_Cost;
        min_bidder_name = bidder_name;
    }
}
cout << "+--------------------------------------------+" << endl;
cout << "The minimum bidder name is:" << min_bidder_name << endl;
cout << "The total Cost of the paint is: " <<min_Total_Cost<< endl;
return 0;
}



double getJobCost(){

    double Price;
    double Gallon;
    double Total_Cost;
    cout<< " Please enter amount of gallon"<<endl;
    cin >> Gallon;
    cout<< "Enter the price per Gallon" <<endl;
    cin >> Price;
    Total_Cost= Price*Gallon;
    return Total_Cost;
}
    
