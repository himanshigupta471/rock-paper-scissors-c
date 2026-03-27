// // STAR PATTERN:

// #include <stdio.h>
// int main()
// {
//     for(int x=5; x >= 1;x--)
//     {
//         printf("\n");
//         for(int y=x; y>=1;y--)
//         {
//             printf(" * ");
//         }
//     }


    
//     for(int x =1; x<=5;x++)
//     {
//         printf("\n");
//         for(int y=x; y>= 1;y--)
//         {
//             printf(" * ");
//         }
//     }

     
// }





// //blood donation using function:-
// #include <stdio.h>
// int blooddonation(int age,int weight)
// {
//     if(age >= 18)
//     {
//         printf("you are eligible for blood donation\n");
//         if(weight >= 50)
//         {
//             printf("you are fully eligible for blood donation\n");
//         }
//         else
//         {
//             printf("you are underweight");
//         }
//     }
//     else
//     {
//         printf("you are not eligible");
//     }
// }
// void main()
// {
//     blooddonation(15,45);
// }




// // calculator:
// #include <stdio.h>
// int main()
// {
//     int x;
//     int sum = 0;
//     do{
//         scanf("%d",&x);
//         sum += x;
//         printf("sum : %d\n",sum);
//     }
//     while(x != 0);
//     printf("total sum of number : %d",sum);

//     return 0; 
// }



// table print:
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("enter your number : ");
//     scanf("%d",&a);
//     for(int i=1; i<=10; i++ )
//     {
//         printf("%d X %d = %d\n", a, i, (a * i));
       
//     }
//     return 0;
// }




// nested for loop with same variables:
// #include<stdio.h>
// int main()
// {
//     for(int i = 1; i <= 10; i++)
//     {
//         printf("%d ",i);
//     }

//     for(int i = 1; i <= 10;i++)
//     {
//         printf("%d ",i);
//     }
//     return 0;
// }


//  #include <stdio.h>
//  int main()
//  {
//      int x[2][5];

//      for(int i = 0; i < 1; i++ )
//      {
//          for(int j = 0; j < 5; j++)
//          {
//              x[i][j] = j+1;
//          }

//      }

    //  for(int i = 1; i < 2; i++)
    //  {
    //      for(int j = 0; j < 5; j++)
    //      {
    //          x[i][j] = j + 6;
    //      }
    //  }

    //  for(int k = 0; k < 2; k++)
    //  {
    //      for(int m = 0; m < 5; m++)
    //      {
    //         printf("element [%d] [%d] = %d\n", k ,m , x[k][m]);
    //      }
    //  }

//      return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int x[3][5];
//     for(int i = 0; i < 1; i++)
//     {
//         for(int j = 0; j < 5; j++)
//         {
//             x[i][j] = j + 1;
//         }
//     }
//     for(int i = 1; i < 2; i++)
//      {
//          for(int j = 0; j < 5; j++)
//          {
//              x[i][j] = j + 6;
//          }
//      }

//      for(int i = 2; i < 3; i++)
//      {
//         for(int j = 0; j < 5; j++)
//         {
//             x[i][j]= j + 11;
//         }
//      }

//      for(int i = 0; i < 3; i++)
//      {
//         for(int j = 0; j < 5; j++)
//         {
//             printf("element [%d] [%d] = %d\n", i ,j , x[i][j]);
//         }
//      }


// }


// //5index each 5value

// #include <stdio.h>
// int main()
// {
//     int x[5][5];
//     for(int i = 0; i < 1; i++)
//     {
//         for(int j = 0; j < 5; j++)
//         {
//             x[i][j] = j + 1;
//         }
//     }
//     for(int i = 1; i < 2; i++)
//     {
//          for(int j = 0; j < 5; j++)
//          {
//              x[i][j] = j + 6;
//          }
//     }

//      for(int i = 2; i < 3; i++)
//     {
//         for(int j = 0; j < 5; j++)
//         {
//             x[i][j]= j + 11;
//         }
//     }

//      for(int i = 3; i < 4; i++)
//     {
//         for(int j = 0; j < 5; j++)
//         {
//             x[i][j] = j + 16;
//         }
//     }

//     for(int i = 4; i < 5; i++)
//     {
//         for(int j = 0; j < 5; j++)
//         {
//             x[i][j] = j + 21;
//         }
//     }
    
//     for(int i = 0; i < 5; i++)
//     {
//         for(int j = 0; j < 5; j++)
//         {
//             printf("element [%d] [%d] = %d\n", i ,j , x[i][j]);
//         }
//     }

//     return 0;

// }



// printing weekdayss together::::
// #include<stdio.h>
// int main()
// {
//     for( int i =1; i <= 7; i++)
//     {
//         switch(i)
//         {
//             case 1:
//             printf("monday\n");
//             break;

//             case 2:
//             printf("tuesday\n");
//             break;

//             case 3:
//             printf("wednesday\n");
//             break;

//             case 4:
//             printf("thursday\n");
//             break;

//             case 5:
//             printf("friday\n");
//             break;

//             case 6:
//             printf("saturday\n");
//             break;

//             case 7:
//             printf("sunday\n");
//             break;

//             default:
//             printf("invalid day");



//         }
        
//     }
//     return 0 ;
// }

 
// calculator:- 
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int value = 0;
//     int number;
//     char operate[10];
    
//     do{
//         printf("enter number : ");
//         scanf("%d", &number);
//         if (number == 0)
//         {
//             break;
//         }
    

//     else
//     {
//         printf("enter operator : ");
//         scanf("%s", &operate);
//         if(strcmp(operate, "sum")== 0)
//         {
//             value += number;
//             printf("sum value : %d\n",value);
//         }
//         else if(strcmp(operate, "sub") == 0)
//         {
//             value -= number;
//             printf("subtract value : %d\n",value);

//         }
//         else if(strcmp(operate,"null") == 0)
//         {
//             value *= number;
//             printf("multiply value : %d\n",value);

//         }
//         else{
//             printf("invalid syntax \n");

//         }

//     }
    
//         }
//         while(number != 0);
//         printf("total value : %d",value);
//         return 0;
// }


// rock paper and scissors:-

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #include <string.h>

// int main()
// {
//     char player_choice[10];
//     char *choice[] = {"rock","paper","scissors"};
//     int n = 3;

//     srand(time(NULL));

//     int randomindex = rand() % n;

//     do
//     {
//         printf("enter step : ");
//         scanf("%s", &player_choice);
//         printf("this is computer choice : %s\n",choice[randomindex]);
//         if 
        
//             (strcmp(player_choice, "paper") == 0 && strcmp(choice[randomindex], "rock") == 0)
//             {
//                 printf("player win \n ");
//             }
//             else if(strcmp(player_choice, "rock") == 0 && strcmp(choice[randomindex], "scissors") == 0)
//             {
//                 printf("player win \n");
//             }
//             else if(strcmp(player_choice, "scissors") == 0 && strcmp(choice[randomindex], "paper") == 0)
//             {
//                 printf("player win \n");
//             }
//             else if(strcmp(player_choice, choice[randomindex]) == 1)
//             {
//                 printf("computer win \n");
//             }
//             else if(strcmp(player_choice, choice[randomindex]) == 0)
//             {
//                 printf("this match is draw \n");
//             }
//             else
//             {
//                 printf("please enter correct step \n");
//             }
//         }
        
    
//     while(player_choice != "exit");
    

//     return 0;
// }



// summation(recursive)
// #include <stdio.h>
// int summation(int n) 
// {
//     if(n == 0)
//     {
//         return 1;
//     }
//     else{
//         return(n + summation(n-1));
//     }
// }
// int main()
// {
//     int num;
//     int sum;

//     printf("enter a number : ");
//     scanf("%d",&num);
//     sum = summation(num);
//     printf("%d",sum);
//     return 0;
// }



// #include <stdio.h>
// int main()
// {
//     int x ;
//     int multiply = 1;
//     do{
//         printf("enter number : ");
//         scanf("%d",&x);
//         multiply *= x;
//         printf("%d\n",multiply);

//     }while(x != 0);

//     return 0;
    
    
// }


// // #include <stdio.h>
// // int main()
// // {
// //     int x = 5;
// //     x += 5;
// //    printf("%d",x);

// //     return 0;
// // }

// #include <stdio.h>
// int main()
// {
//     int num;
//     int number;
//     printf("enter your number : ");
//     scanf("%d",&num);
//     int value; 
//     printf("enter you value : "); 
//     scanf("%d",&value); 


//     int arr[num][value];

//     // for(int i = 0; i < num; i++)
//     // {
//     //     for(int j = 0; j < value; j++)
//     //     {
//     //         arr[i][j] = j;

//     //     }
//     // }

//     // for(int i = 0; i < num; i++)
//     // {
//     //     for(int j = 0; j < value; j++)
//     //     {
//     //         printf("[%d][%d] = %d\n",i , j ,arr[i][j]);


//     //     }
//     // }


//     for(int i = 0; i < num; i++)
//     {
//         for(int j = 0; j < value; j++)
//         {
//             printf("enter your value : ");
//             scanf("%d",&number);
//             arr[i][j] = number;
//         }
//     }

//     for(int i = 0; i < num; i++)
//     {
//         for(int j = 0; j < value; j++)
//         {
//             printf("element[%d][%d] = %d\n", i , j , arr[i][j]);
//         }
//     }    
//     return 0;
// }





// #include <stdio.h>
//  #include <string.h>
// struct employee
// {
//     int id;
//     char name[50];
// } ; 

// int main(int argc, char *args[])
// {

//     int num; 
//     printf("enter your number : "); 
//     scanf("%d",&num); 

//     char n [20] = args[num]; 
//     struct employee n;
//     n.id = 101;
//     strcpy(n.name, "ABC");  

   
//     printf("employee 1 id : %d\n", n.id);
//     printf("employee 1 name : %s\n",n.name);


    // args.id = 102;
    // strcpy(args.name, "PQR");
    // printf("employee 2 id : %d\n", args.id);
    // printf("employee 2 name : %s\n", args.name);

//     return 0;

// }




#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    char player_choice[20];
    char *choice[] = {"rock", "paper", "scissors"};
    int n = 3;
    int randomindex;

    srand(time(NULL));

    do
    {
        randomindex = rand() % n;

        printf("Enter step (rock/paper/scissors or exit): ");
        scanf("%s", player_choice);

        if (strcmp(player_choice, "exit") == 0)
        {
            break;
        }

        printf("Computer choice: %s\n", choice[randomindex]);

        if (strcmp(player_choice, "paper") == 0 && strcmp(choice[randomindex], "rock") == 0)
        {
            printf("Player wins\n");
        }
        else if (strcmp(player_choice, "rock") == 0 && strcmp(choice[randomindex], "scissors") == 0)
        {
            printf("Player wins\n");
        }
        else if (strcmp(player_choice, "scissors") == 0 && strcmp(choice[randomindex], "paper") == 0)
        {
            printf("Player wins\n");
        }
        else if (strcmp(player_choice, choice[randomindex]) == 0)
        {
            printf("Match is draw\n");
        }
        else if (
            strcmp(player_choice, "rock") == 0 ||
            strcmp(player_choice, "paper") == 0 ||
            strcmp(player_choice, "scissors") == 0)
        {
            printf("Computer wins\n");
        }
        else
        {
            printf("Please enter correct step\n");
        }

    } while (strcmp(player_choice, "exit") != 0);

    return 0;
}