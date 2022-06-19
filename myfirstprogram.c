#include <stdio.h>
#include <math.h>

// best practice is to declare all functions before the main() function
void myFunction();
int myIntFunction(int, int);
char myCharFunction();

 // declare structures by starting with the struc keywrod
struct MyStructure {
    int myNum;
    char hello;
    char myString[30];
};

int main() {
    // you can access structures from outside by creating a struct variable
    struct MyStructure MyStructureName;

    //access structure variables by using . (like an object)
    strcpy(MyStructureName.myString, "some text");
    printf("my string that is in the struc is %s", MyStructureName.myString);




    /*
  printf("Hello World!");
  printf("\nI am learning C!");

  // when printing values, you must use format specifiers, which is something that starts with a '%' and ends with a char
  int myNum = 15;
  printf("\n%i", myNum);

  // use const keyword when value is unlikely to change. if using const keyword, best practice is to declare them in uppercase
  const int MY_NUMBER = 60;

  int i = 0;

  while(i < 5) {
    printf("%d\n", i);
    i++;
  }

  int num;

  printf("\n\nType a number please\n");
  scanf("%d", &num);
  printf("You typed %d.", num);

  char firstName[30];
  printf("\n\nWhat is your first name?\n");
  scanf("%s", &firstName);
  printf("Your first name is %s", firstName);
// int myNumbers[] = {23, 53, 62};
*/


  return 0;
}

void myFunction() {
    printf("hello");
}

int myIntFunction(int one, int two) {
    return 0;
}

char myCharFunction() {
    return 'a';
}
