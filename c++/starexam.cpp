#include<iostream>
#include<string>
using namespace std;
string subject[3] = { "Database Design (DB): ","Introduction to Python (IP): "," Network Design (ND): " };
char grade[3];
int main()
{
    string no_matrik;
    float marks[3];
    //Prompt the user to enter name, matrics number and mark.
    cout << "STAR College Examination" << endl;
    cout << "========================" << endl;
    for (int i = 1; i <=5; i++) {
        string name; //Local variable
        cout << "Please enter the student's name: ";
        cin >> ws; //Next line but for getline function
        getline(cin, name);
        cout << "Please enter the student's matrics number: ";
        cin >> no_matrik;
        for (int k = 0; k < 3; k++) {
            cout << "Please enter the mark for " << subject[k];
                cin >> marks[k];
                while (marks[k] < 0 || marks[k]>100) {
                    cout << "Please enter a mark between 0 and 100." << endl << endl;
                    main();
                }
        }
        for (int x = 0; x < 3; x++) {
            if (marks[x] >= 75 && marks[x] <= 100) {
                grade[x] = 'A';

            }else if (marks[x] >= 65 && marks[x] <= 74) {
                grade[x] = 'B';

            }else if (marks[x] >= 55 && marks[x] <= 64) {
                grade[x] = 'C';

            }else if (marks[x] >= 40 && marks[x] <= 54) {
                grade[x] = 'D';

            }else if (marks[x] >= 0 && marks[x] <= 39) {
                grade[x] = 'E';

            }else {
              cout<<"Invalid output.";
            }

        }

        cout << endl;
        cout << "Student No. " << i << endl;
        cout << "========================" << endl;
        cout << "Name           : " << name << endl;
        cout << "Matrics Number : " << no_matrik << endl;
        cout << "Database Design (DB)        | Grade : " << grade[0] << endl;
        cout << "Introduction to Python (IP) | Grade : " << grade[1] << endl;
        cout << "Network Design (ND)         | Grade : " << grade[2] << endl << endl;

    }
}
