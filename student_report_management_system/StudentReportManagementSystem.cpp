#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class student
{
    char name0[100];
    int rollno;
    int eng_mark, math_mark, sci_mark, lang_mark, cs_mark;
    double average;
    char grade;

public:
    void getdata();
    void showdata();
    void calculate();
    void retrollno();
};
void student::calculate()
{
    average = (eng_mark + math_mark + sci_mark + lang_mark + cs_mark) / .5;
    if (average >= 90)
        grade = 'A';
    else if (average >= 85)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else
        grade = 'F';
}
void getdata()
{
    cout << "\nEnter student roll number \n";
    cin >> rollno;
    cout << "\n\nEnter student name : ";
    cin.ignore();
    cin.getline(name, 50);
    cout << "\n All marks should be out of 100 \n";
    cout << "\nEnter marks in English \n";
    cin >> eng_mark;
    cout << "\nEnter marks in Math \n";
    cin >> math_mark;
    cout << "\nEnter marks in Science \n";
    cin >> sci_mark;
    cout << "\nEnter marks in 2nd Langage \n";
    cin >> lang_mark;
    cout << "\nEnter marks in Computer Science \n";
    cin >> cs_mark;
    calculate();
}
void studen::showdata()
{
    cout << "\nRoll number of student: " << rollno;
    cout << "\nName of studen: " << name;
    cout << "\nEnglish: " << eng_mark;
    cout << "\nMath: " << math_mark;
    cout << "\nScience: " << sci_mark;
    cout << "\n2ND Langage: " << lang_mark;
    cout << "\nComputer Science: " << cs_mark;
}
int void retrollno()
{
    return retrollno;
}
void create_student();
void display_sp(int);
void display_all();
void delete_student(int);
void change_student(int);

int main()
{
    char ch;
    cout << setprecision(2);

    do
    {
        int num;
        system("cls");
        cout << "\n\n\n\tMENU";
        cout << "\n\n\t1. Create student record";
        cout << "\n\n\t2. Search student record";
        cout << "\n\n\t3. Display all students records";
        cout << "\n\n\t4. Delete student record";
        cout << "\n\n\t5. Modify student record";
        cout << "\n\n\t6. Exit";
        cout << "\n\n\tWhat is your Choice (1/2/3/4/5/6): ";
        cin >> ch;
        system("cls");
        switch (ch)
        {
        case '1':
            create_student();
            break;
        case '2':
            cout << "\n\n\tEnter The roll number: ";
            cin >> num;
            display_sp(num);
            break;
        case '3':
            display_all();
            break;
        case '4':
            cout << "\n\n\tEnter The roll number: ";
            cin >> num;
            delete_student(num);
            break;
        case '5':
            cout << "\n\n\tEnter The roll number: ";
            cin >> num;
            change_student(num);
            break;
        case '6':
            cout << "Exiting, Thank you!";
            exit(0);
        default:
            cout << "Invalid choice. Please enter a valid option (1/2/3/4/5/6).";
        }
    } while (ch != '6');
    return 0;
}