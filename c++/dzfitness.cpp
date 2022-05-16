#include<iostream>
using namespace std;

int main()
{
	float w, h;
	string name, gender;
	int age;

  cout << "DZ Fitness BMI Calculator" << endl;
  cout << "========================" << endl;

	for(int i = 0; i < 5; i++) {
        cout<<"Enter your name: ";
        cin >> ws; //Next line but for getline function
        getline(cin, name);

        cout<<"Enter your gender: ";
        cin>>gender;

        cout<<"Enter your age: ";
        cin>>age;

        cout<<"Enter your height (in meters/m): ";
        cin>>h;

        cout<<"Enter your weight (in kilograms/kg): ";
        cin>>w;

        float bmi = w / (h*h);
        cout<<"Your BMI is : "<< bmi << endl;

        if(bmi <= 18.5) {
		    cout<<"Your BMI is UNDERWEIGHT" << endl << endl;
        } else if(bmi >= 18.5 && bmi <= 24.9) {
            cout<<"Your BMI is NORMAL" << endl << endl;
        } else if(bmi >= 25.0 && bmi <= 29.9) {
            cout<<"Your BMI is OVERWEIGHT" << endl << endl;
        } else if(bmi >= 30.0 && bmi <= 34.9) {
            cout<<"Your BMI is OBESE" << endl << endl;
        } else if(bmi >= 35.0){
            cout<<"Your BMI is EXTREMELY OBESE" << endl << endl;
	      }
      }
    }
