#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>
#include "class.h"
#include <stdio.h>
#include <conio.h>

using namespace std;



vector<Subject*> userInterfaceCreateSubject(vector<Subject*> subjects){
    cout<<"Enter Subject : "<<(subjects.size()+1)<<" properties..."<<endl;
    Subject* sub = new Subject;
    subjects.push_back(sub);
    return subjects;
}
int calculateCGPA(vector<Subject*> subjects){
    float gpa = 0.0;
    int total = 0;
    for(int i=0;i<subjects.size();i++){
        Subject*  sub = subjects[i];
        total +=sub->credit;
        gpa += (sub->credit * sub->value) ;

    }
     gpa = gpa/total;
     cout<<"              *************************************************"<<endl;
    cout<<"\n Congrats!!! ... Your CGPA = "<<gpa<<endl;
}
int main()
{
    vector<Subject*> subjects;
    string subString;
    int subNo;
    cout<<"              *************************************************"<<endl;
    cout<<"            *****************Percentile Calculator**************"<<endl;
    cout<<"              *************************************************"<<endl<<endl;
    cout <<"Please enter the number of subjects : " ;
    getline(cin,subString);
    stringstream myStream(subString);
     myStream >> subNo;
     cout<<endl;

     for(int i=0;i<subNo;i++){
        cout<<endl;
        subjects = userInterfaceCreateSubject(subjects);

    }
    calculateCGPA(subjects);

    getch();
}

Subject::Subject(){

    cout<<"Enter grade(A+ ,  A  , A- , B+ , B , B- , C+ , C , C- , D , E) : ";
    grade = "";
    getline(cin,grade);
    if(grade == "A+" || grade == "a+"){
        value = 10.0;
    }
    else if(grade == "A" || grade == "a"){
        value = 9.5;
    }
    else if(grade == "A-" || grade == "a-"){
        value = 9.0;
    }
     else if(grade == "B+" || grade == "b+"){
        value = 8.5;
    }
     else if(grade == "B" || grade == "b"){
        value = 8.0;
    }
      else if(grade == "B-" || grade == "b-"){
        value = 7.5;
    }
     else if(grade == "C+" || grade == "c+"){
       value = 7.0;
    }
     else if(grade == "C" || grade == "c"){
        value = 6.5;
    }
     else if(grade == "C-" || grade == "c-"){
        value = 6.0;
    }
     else if(grade == "D" || grade == "d"){
        value = 5.5;
    }
     else if(grade == "E" || grade == "e"){
        value = 5.0;
    }
    creditString = "";
cout <<"Enter credit : " ;
    getline(cin,creditString);
     stringstream myStream(creditString);
     if(myStream >> credit){
     }
}

