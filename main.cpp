#include <iostream>
#include "gpa.hpp"

using namespace std; 

int main(){
    int choice; 
    outputPrompt(); 
    cin >> choice; 

    int subjectNumber; 
    cout << "How many subjects did yout take? "; 
    cin >> subjectNumber; 

    Subjects s[subjectNumber]; 
    switch(choice){
        
        case 1: 
            for(int i=0; i<subjectNumber; i++){
                double a; 
                double credits; 
                do{
                cout << "Enter score for subject " << i+1 <<": "; 
                cin>> a; 
                if(a> 100){
                    cout << "Score cannot be greater than 100 do again" << endl; 
                }
                }while(a>100); 
                s[i].setScore(a);
                s[i].setGrade(calculateGrade(s[i].getScore()));  // calculating grade from function and adding it to object
                cout << "Enter the number of credits: "; 
                cin >> credits; 
                s[i].setCredits(credits); 

            }
        break; 

        case 2:
            for(int i=0; i<subjectNumber; i++){
                char grade; 
                double credits; 
                do{
                cout << "Enter grade for subject " << i+1 <<": "; 
                cin>> grade; 
                if(grade != 'A' && grade != 'B' && grade != 'C' && grade != 'D' && grade != 'E' && grade != 'F'){
                    cout << "Invalid grade" << endl; 
                }
                }while(grade != 'A' && grade != 'B' && grade != 'C' && grade != 'D' && grade != 'E' && grade != 'F'); 
                s[i].setGrade(grade); 
                cout << "Enter the number of credits: "; 
                cin >> credits; 
                s[i].setCredits(credits); 
            }
        break; 
    }


    for(int i=0; i<=subjectNumber; i++){
        s[i].setGradePoint(calculateGradePoint(s[i].getGrade())); // calculating grade from function and adding it to object
    }

    double totalGradePoint = 0; 
    for(int i=0; i<subjectNumber; i++){
        totalGradePoint += (s[i].getGradePoint() * s[i].getCredits()); 
    }
    

    double totalCredits = 0; 
    for(int i=0; i<subjectNumber; i++){
        totalCredits += s[i].getCredits(); 
    }
    

    double gpa = calculateGPA(totalGradePoint, totalCredits);
    cout << gpa << endl;  
}

