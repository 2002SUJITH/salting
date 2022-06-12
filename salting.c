//salted form of a password enterd by user 
#include<stdio.h>
#include<string.h>
void salting(char password[]);
int main(){
    
    char password[50];
    printf("enter a password\n");
    scanf("%s",password);
  
    printf("new password is:\n");
      salting(password);



}
void salting(char password[]){
    //salt is "4321"
    //added at the end
    char salt[]="4321";
    char newpassword[100];
    strcpy(newpassword,password);//value in password is now stored in newpassword
    strcat(newpassword,salt);//newpassword=password+salt
    puts(newpassword);


}