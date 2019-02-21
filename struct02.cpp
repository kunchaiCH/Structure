#include <iostream>
#include <stdlib.h> // random ascii
#include <time.h>   // set time
#include <string.h>
using namespace std;

struct Student{
    char name[16];

    Student(){                  // constructor function
        name[0] = '\0';
        // langth name 4 - 15
        // random char 65 - 90
        // strcat
        int len = rand()%12 + 4; // 4 - 15
        int i;
        for (i = 0; i < len; i++){
             char rc = rand()%26 + 65; // random ascii 65 - 90 A - Z
             name[i] = rc;             
        }
        name[i] = '\0';
    }
};

struct Room{
    char no[4];
    Student s[4];
};

struct Level {
    char levelNo;
    Room room[10];
};

struct Dome {
    Level level[4];
    
    Dome(){
        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 10; j++){
                char ln[3], rn[3], rn2[3], roomNo[4];
                strcpy(roomNo, "");
                strcpy(rn2, "0");
                itoa(i+1, ln, 10);
                itoa(j+1, rn, 10);
                if(strlen(rn)==1){
                    strcat(rn2, rn);
                }else {
                    itoa(j+1, rn2, 10);
                }
                strcat(roomNo, ln);
                strcat(roomNo, rn2);
                strcpy(level[i].room[j].no, roomNo); 
            }
        }
    }
};

main(){
    srand(time(NULL)); 

    Dome d1;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 10; j++){
            cout << "roomNumber : " << d1.level[i].room[j].no << endl;
        }
        cout << endl << "===============" << endl;
    }
    return 0;
}