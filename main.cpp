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
            for(int i=1; i<=subjectNumber; i++){
                int a; 
                do{
                cout << "Enter score for subject " << i <<": "; 
                cin>> a; 
                if(a> 100){
                    cout << "Score cannot be greater than 100 do again" << endl; 
                }
                }while(a>100); 
                s[i].setScore(a);
            }
        break; 
    }

    
}