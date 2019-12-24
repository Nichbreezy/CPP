/*Create 1 C++ file " CREDIT CARD BALANCES" to calculate the penalty and
balances due for next billing cycle of credit card transactions. Save your file
 to the folder "PROJECTS"*/
 #include <iostream>
using namespace std;

int main() {
        double balance, pay; // Double is a function that defines umeric vriables


        cout << "Enter the balance: "; //Displays amessage to the user, asking to enter their coresponding balance
        cin >> balance; // User enters the balance amount

        cout << "Enter your payment: "; //Displays amessage to the user, asking to enter their preferred payment
        cin >> pay; //User enters the payment amount

        double remaining = balance - pay; // Function to operate the mathematical procedure
        double penality = 0;

        if(remaining > 0) {
                penality = 0.02 * remaining; // Adding 2% penality
        }

        cout << "The outstanding amount is: " << remaining << endl; // Displays the outstanding amount

        if(penality > 0) {
                cout << "the penality is $" << penality << endl; // Displays the penality amount
        } else {
                cout << "No penality" << endl; // Displays " No penality"
        }

        return 0;
}
