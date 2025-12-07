#include <iostream>
using namespace std;
int main()
{
    int marks1, marks2, marks3, total;
    float percentage;
    char grade1, grade2, grade3;
    cout << "Enter marks of 3 subjects (out of 100): "<<endl;
    cin >> marks1 >> marks2 >> marks3;
    total = marks1 + marks2 + marks3;
    percentage = total / 3.0;
    //for marks1
    if (marks1 >= 90)
	{
	 grade1 = 'A';
   }
    else if (marks1 >80)
	{
	grade1 = 'B';
	}
    else if	(marks1 >= 70) 
	{
     grade1 = 'C';
    }
    else if (marks1 >= 60)
	{
	  grade1 = 'D';
    }
    else
	{
     grade1 = 'F';
    }
    //for marks 2
    if (marks2 >= 90) 
	{
	grade2 = 'A';
    }
    else if (marks2 >= 80)
	 {
	grade2 = 'B';
	}
    else if (marks2 >= 70)
	{
	  grade2 = 'C';
	}
    else if (marks2 >= 60) 
	{
	grade2 = 'D';
	}
    else 
	{
	grade2 = 'F';
    }
    //for marks 3
    if (marks3 >= 90)
	 {
	 grade3 = 'A';
     }
    else if (marks3 >= 80) 
	{
	grade3 = 'B';
    }
    else if (marks3 >= 70)
	 {
	 grade3 = 'C';
     }
    else if (marks3 >= 60)
	 {
	 grade3 = 'D';
    }
     else 
	{
	grade3 = 'F';
    }
    // Failure check
    if (grade1 == 'F' || grade2 == 'F' || grade3 == 'F')
    {
        cout << "Failed"<<endl;
    }
    else
    {
        cout << "Total Marks: " << total<<endl;
        cout << "Percentage: " << percentage<<endl;

        cout << " Grades: "<<endl;
        cout << " Subject 1: " << grade1<<endl;
        cout << " Subject 2: " << grade2<<endl;
        cout << " Subject 3: " << grade3<<endl;

        if (grade1 == 'A' && grade2 == 'A' && grade3 == 'A' && total >= 270)
        {
            cout << " Scholarship: Merit Scholarship "<<endl;
        }
        else
        {
            if ((grade1 == 'A' || grade1 == 'B') &&
                (grade2 == 'A' || grade2 == 'B') &&
                (grade3 == 'A' || grade3 == 'B') &&
                total >= 240)
            {
                cout << " Scholarship: Regular Scholarship "<<endl;
            }
            else
            {
                cout << " Scholarship: Not Eligible "<<endl;
            }
        }
    }

    return 0;
}
