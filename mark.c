
#include <stdio.h>

int main() {
  
  
  char student_name[20];
  int roll_number;
  int tamil_mark;
  int eng_mark;
  int maths_mark;
  int science_mark;
  int social_mark;
  int total;
  int average;
  
  printf("enter the student name:\n");
  scanf("%s",student_name);
  
  printf("Enter the Roll number:\n");
  scanf("%d",&roll_number);
  
  printf("enter the tamil mark is:\n");
  scanf("%d",&tamil_mark);
  
  printf("enter the english mark is:\n");
  scanf("%d",&eng_mark);
  
  printf("enter the maths mark is:\n");
  scanf("%d",&maths_mark);
  
  printf("enter the science mark is:\n");
  scanf("%d",&science_mark);
   
   printf("enter the social mark is:\n");
  scanf("%d",&social_mark);
   
   
  
  total=tamil_mark + eng_mark + maths_mark+science_mark+social_mark;
  average=total/5;
  printf("---student Marksheet--- \n");
  
  if(tamil_mark>=35 && eng_mark>=35 && maths_mark>=35 && science_mark >= 35 && social_mark>=35){
      printf("Pass");
      if(average>=90){
          printf("Grade A+\n");
      }
     else if(average>=80){
          printf("Grade A \n");
      }
      else if(average>=70){
          printf("Grade B \n");
       }
       else if(average>=60){
           printf("Grade C \n");
       }
      else if(average>=50){
           printf("Grade D \n");
       }
      else if(average>=35){
          printf("Grade E \n");
      }
      else{
         printf("Grade Faill \n");
       }   
  
  }
  else
  {
      printf("Fail \n");
      printf("result=  FAILL\n");
      printf("Grade=   F\n");
  }
  
  printf("Student name is:",student_name);
  printf("student rollnumber is:",roll_number);
  printf("STUDENT TOTAL MARKS IS:",total);
  printf("THE average is:",average);

    return 0;
}
