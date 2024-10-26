#include <iostream>
using namespace std;

int main() {
    int Subjects;
    int marks;
    char Grade;
    cout << "Enter the total number of subjects: ";
    cin >> Subjects;

    for (int i = 1; i <= Subjects; ++i)
     {
        int marks;
        cout << "Enter marks for subject " << i ;
        cin >> marks;

        if (marks >= 90)
         {
            cout << "Grade A" << endl;
        }
        else if (marks >= 75)
         {
            cout << "Grade B" << endl;
        }
        else if (marks >= 50) 
        {
            cout << "Grade C" << endl;
        }
        else {
            cout << "Grade F" << endl;
        }
    }

    return 0;
}
