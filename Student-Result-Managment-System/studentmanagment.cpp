#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;  //Enter number of students
    cin.ignore();
    while(t--){
        string st_name; //Enter name of the student of the student
        cout << "Enter the student name : ";
        getline(cin , st_name)
        int marks[5];  // Array for 5 subject marks
        cout << "Enter 5 subject marks of a student : ";
        for(int i = 0;i < 5;i++){
            cin >> marks[i];   //Entering marks of 5 subjects of a student
        }
        int sum=0;
        for(int i = 0; i < 5;i++){
            sum+=marks[i];
        }
        int avg=sum/5;

        cout << "Student name is : " << st_name;
        cout << "Total marks of the student is : " << sum << endl;
        cout << "Average of the student marks is : " << avg << endl;

        if(avg>=75){
            cout << "Congrats, you got A Grade" << endl;
        }
        else if(avg >= 60){
            cout << "Well done, you got B Grade " << endl;
        }
        else if(avg >= 50){
            cout << "Nice, you got C Grade" << endl;
        }
        else if(avg >= 40){
            cout << "Okay, you got D Grade" << endl;
        }
        else{
            cout << "Please do Hard work , you got failed in the examination" << endl;
        }
        cin.ignore();
    }
    return 0;
}
