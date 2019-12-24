/*Create 1 C++ file "COMPARISON_TREE" to calculate final grade based on the accumulated points
*/

#include<iostream>
#include<string>
#include<math.h>
using namespace std;

struct Student // construct an object called students
{
string name;
char finalLetterGrade; // name of the string
};

class StudentRecord
{
private: // private class
    Student someStudent;

    double quiz[2], midterm, finalExam;
    double finalGrade;
    char finalLetterGrade;

public: // public class
    void inputQuizzes();
    void inputMidtermGrade();
    void inputFinalGrade();

    double *getQuizzes();
    double getMidterm();
    double getFinalExam();

    double calcPercent(double grade, double outOfTotalPts, double 
percentOfTotal);
// general application for all scores //
double setFinalNumericGrade(double newFinalGrade);
char setFinalLetterGrade(char newFinalLetterGrade);
char calcFinalLetterGrade(double finalGrade);
};
// returns ptr to first quiz grade of array //
double *StudentRecord::getQuizzes() 
{
    double *quizPtr;
    quizPtr = quiz;

    return quizPtr;
}
double StudentRecord::getMidterm() { return midterm; }
double StudentRecord::getFinalExam() { return finalExam; }
double StudentRecord::calcPercent(double grade, double outOfTotalPts, double 
percentOfTotal)
{
    double totalPercent = (grade / outOfTotalPts) * percentOfTotal;
    return totalPercent;
}
double StudentRecord::setFinalNumericGrade(double newFinalGrade) { return 
finalGrade = newFinalGrade; }

// takes final numeric grade as parameter //
// returns letter grade as char //
char StudentRecord::calcFinalLetterGrade(double finalGrade)
{
    /*
    Any grade of 90 or more is an A, 
    any grade of 80 or more (but less than 90) is a B, 
    any grade of 70 or more (but less than 80) is a C, 
    any grade of 60 or more (but less than 70) is a D, 
    and any grade below 60 is an F. 
    */

    if (finalGrade >= 90)
        return 'A';
    else if (finalGrade >= 80 && finalGrade < 90)
        return 'B';
    else if (finalGrade >= 70 && finalGrade < 80)
        return 'C';
    else if (finalGrade >= 60 && finalGrade < 70)
        return 'D';
    else
        return 'F';
}

char StudentRecord::setFinalLetterGrade(char newFinalLetterGrade) { return 
finalLetterGrade = newFinalLetterGrade; }

// user inputs grades //
void StudentRecord::inputQuizzes()
{
    cout << "Enter quiz grades : ";
    for (int i = 0; i < 2; i++)
    {
        cin >> quiz[i];
    }
}

void StudentRecord::inputMidtermGrade()
{
    cout << "Enter midterm grade : ";
    cin >> midterm;
}

void StudentRecord::inputFinalGrade()
{
    cout << "Enter final grade : ";
    cin >> finalExam;
}
int main()
{
    Student someStudent;

    cout << "Enter name : ";
    cin >> someStudent.name;

    StudentRecord student;

    student.inputQuizzes();
    student.inputMidtermGrade();
    student.inputFinalGrade();

    double *ptr;

    ptr = student.getQuizzes();
    for (int i = 0; i < 2; i++)
        cout << "Quiz "<< i+1 <<": "<< ptr[i] << endl;


    cout << "Midterm : " << student.getMidterm() << endl;

    cout << "Final Exam : " << student.getFinalExam() << endl;

    // calculations //

    double quizSum = 0;
    for (int i = 0; i < 2; i++)
        quizSum += ptr[i];

    double quizPercent = student.calcPercent(quizSum, 100, 12.5);
    double midtermPercent = student.calcPercent(student.getMidterm(), 100, 25);
    double finalPercent = student.calcPercent(student.getFinalExam(), 100, 50);

    double finalNumGrade = quizPercent + quizPercent + midtermPercent + finalPercent;

    cout << finalNumGrade << endl;

    student.setFinalNumericGrade(finalNumGrade);

    char letterGrade = student.calcFinalLetterGrade(finalNumGrade);

    student.setFinalLetterGrade(letterGrade);

    someStudent.finalLetterGrade = letterGrade;

    cout << "Name: " << someStudent.name << endl;
    cout << "Your Final Grade is: " << someStudent.finalLetterGrade << endl;

    return 0;
}