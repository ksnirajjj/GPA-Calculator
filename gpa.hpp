#ifndef gpa_hpp
#define gpa_hpp

char calculateGrade(double score); 

double calculateGradePoint(char grade); 

double calculateGPA(double sum, double credits); 

void outputPrompt(); 

class Subjects{
    private:
        char grade; 
        double score; 
        double gradePoint; 
        double credits; 

    public:
        void setGradePoint(int g); 
        void setGrade(char g);
        void setScore(double s);
        void setCredits(double c); 
        char getGrade(); 
        double getScore();
        double getGradePoint(); 
        double getCredits(); 
}; 


#endif