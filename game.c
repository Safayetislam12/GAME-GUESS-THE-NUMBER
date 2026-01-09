#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{

    int pc_num;
    int user;
    int Try;

    srand(time(0));


    pc_num = rand() % 100 +1;

    printf("Hi I AM  SAISTO\n\nGUESS THE NUMBER TO WIN THE GAME\n");


    while(1){

        printf("Number please :)\n");

        scanf("%d",&user);

        Try++;
        if(user>pc_num){
            printf("Too close but this is high...Try again\n");
        }else if(user<pc_num){
            printf("Too close but this is Low...Try again\n");
        }else{

          printf("BRAVO, CAPTAIN . YOU FIND THIS CONGREATS\n");
          printf("your trying time : %d\n",Try);
          break;
        }

    }

    return 0 ;

    }
