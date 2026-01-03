#include <iostream>
#include "gpa.hpp"

using namespace std; 

void outputPrompt(){
    for(int i=0; i<100; i++){
        cout <<"-"; 
    }
    cout << endl; 
    cout << "Choose one: " << endl; 
    cout << "1. Enter score " << endl; 
    cout << "2. Enter grade " << endl; 
}

char calculateGrade(double score){ 

    if(score >100) return 'Z'; 
    if (score >= 90 && score <=100 ){
        return 'A'; 
    }
    else if (score >= 80 && score <90 ){
        return 'B'; 
    }
    else if (score >= 70 && score <90 ){
        return 'C'; 
    }
    else if (score >= 60 && score < 70){
        return 'D'; 
    }
    else{
        return 'F'; 
    }
}

double calculateGradePoint(char grade){
    int gradePoint; 

    switch(grade){
        case 'A':
            gradePoint = 4; 
            break; 
        case 'B':
            gradePoint = 3; 
            break; 
        case 'C':
            gradePoint = 2; 
            break; 
        case 'D':
            gradePoint = 1; 
            break; 
        default:
            gradePoint = 0; 
            break; 
    }
    return gradePoint; 
}

double calculateGPA(double sum, double Credits){
    double previousCredits; 
    double previousGpa; 

    cout << "Enter prevoius credits: " ; 
    cin >> previousCredits; 

    cout << "Enter previous gpa: "; 
    cin >> previousGpa; 

    double PreviousGradePoint = previousGpa * previousCredits; 

    return (PreviousGradePoint + sum)/(previousCredits + Credits); 
    
}

void Subjects::setGrade(char g){
            grade = g; 
        }

void Subjects::setScore(double s){
            score = s; 
        }
void Subjects::setGradePoint(int g){
            gradePoint = g; 
        }

void Subjects::setCredits(double c){
            credits = c; 
        }

char Subjects::getGrade(){
            return grade; 
        }

double Subjects::getScore(){
            return score; 
        }

double Subjects::getGradePoint(){
            return gradePoint; 
        }

double Subjects::getCredits(){
            return credits; 
        }