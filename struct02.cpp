#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

struct Student{
    char name[16];

    Student(){
        name[0] = '\0';
        // langth name 4 - 15
        // random char 65 - 90
        // strcat
        int len = rand()%12 + 4; // 4 - 15
        int i;
        for (i = 0; i < len; i++){
             char rc = rand()%26 + 65;
             name[i] = rc;             
        }
        name[i] = '\0';
    }
};

main(){
    srand(time(NULL));
    Student s1;
    cout << "name : " << s1.name << endl;
    return 0;
}