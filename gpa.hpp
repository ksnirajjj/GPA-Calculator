#ifndef gpa_hpp
#define gpa_hpp

char calculateGrade(double score); 

double calculateGradePoint(char grade); 

void outputPrompt(); 

class Subjects{
    private:
        char grade; 
        double score; 

    public:
        void setGrade(char g);
        void setScore(double s);
        char getGrade(); 
        double getScore();
}; 


#endif