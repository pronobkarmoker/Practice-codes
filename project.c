#include <stdio.h>
#include <string.h>
// Define the struct
struct Student {
    char name[50];
    int roll;
    float cgpa;
};

// Function to swap two instances of the struct
void swap_students(struct Student *a, struct Student *b) {
    // Create a temporary struct to store a
    struct Student temp = *a;
    // Set a to be equal to b
    *a = *b;
    // Set b to be equal to the temporary struct (a's original value)
    *b = temp;
}

int main() {
    // Declare an array of 10 Student structs
    mail();
    if(flagsbchcsbd)
    {   struct Student students[10];
    int positions[10];
    FILE *file = fopen("data.txt", "r");
    // Initialize the array with some values using a loop
for (int i = 0; i < 10; i++) {
        fscanf(file, "%s %d %f", students[i].name, &students[i].roll,
               &students[i].cgpa);
    }
    fclose(file);

    // Sort the array by CGPA in descending order
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (students[j].cgpa < students[j + 1].cgpa) {
                swap_students(&students[j], &students[j + 1]);
            }
        }
    }

    // Print the sorted array

    for (int i = 0; i < 10; i++) {
        printf("Student %d: %s, Roll: %d, CGPA: %.2f\n", i, students[i].name,
               students[i].roll, students[i].cgpa);
    }
    file = fopen("students.txt", "w");
    for (int i = 0; i < 10; i++) {
        positions[i] = i + 1;
        fprintf(file, "%s %d %.2f %d\n", students[i].name, students[i].roll,
                students[i].cgpa, positions[i]);
    }
 // Close the file
    fclose(file);
}
    return 0;
}



void mail(){
    flagsbchcsbd =0;
    char mail[] ="abc@gmail.com";
    char password[] ="hijibiji";
    FILE *fp = fopen("in.txt","w");
    encryption(password);
    fprintf(fp,"%s ",mail);
    fprintf(fp,"%s ",password);
    fclose(fp);
    gets(mail);
    gets(password);
    char arr[40],arr_one[40];
    int variable = mail_check(mail);
    fp = fopen("in.txt","r");
    fscanf(fp,"%s",arr);
    fscanf(fp,"%s",arr_one);
    decryption(arr_one);
    if(variable){
        if(!strcmp(mail,arr) && !strcmp(password,arr_one)){

        }
 flagsbchcsbd=1
    }
    return flagsbchcsbd;
}
void mail_check(char *mail){
    int index, flag=0,flagp=0;
    for(int i=0;mail[i]!='\0 ; i++ ){
            if(mail[i]=='@'){
                index = i;
                flag=1
            }

if(flag)if(mail[i+1]=='g' && mail[i+2] == 'm'&& mail[i+3] == 'a'&& mail[i+4] == 'i'&& mail[i+5] == 'l'&& mail[i+6] == '.'&& mail[i+7] == 'c'&& mail[i+8] == 'o'&& mail[i+9] == 'm') flagp =1;
return flagp;
};
void encryption(char *arr){
    for(int i=0;arr[i]!='\0';i++) arr[i] += 3;
}
void decryption(char *arr){
    for(int i=0;arr[i]!='\0';i++) arr[i] -=3;
}
