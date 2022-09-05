#include "stdio.h"
#include "string.h"

int arryPtr();
int main(){

    int index=0;

    char array1[]={'A','B','C','D','E','F','G'};
    char array2[]={'H','I','J','K','L','M','N','O','P'};
    char array3[]={'Q','R','S','T','U','V','W'};
    char array4[]={'X','Y','Z',};
    char totalArray[100];
    char strArray[100];



    for(int i=0; i<*(&array1+1)-array1; i++){

        totalArray[i]=array1[i];
        index++;
}

    for(int i=0; i<*(&array2+1)-array2; i++){

        totalArray[index]=array2[i];
        index++;

}

    for(int i=0; i<*(&array3+1)-array3; i++){

        totalArray[index]=array3[i];
        index++;


}
    for(int i=0; i<*(&array4+1)-array4; i++){

        totalArray[index]=array4[i];
        index++;


}   printf("          Section <1> \n\n");
    printf("List of Alphabet by Handling Array: %s\n\n",totalArray);
    printf("Total Number of Alphabet: %d\n\n",index);


    int go=0;
    int x=0;
    int change=0;

    char ans=0;
    char check;

    while(go==0) {

    printf("Enter the Alphabet you want to check: ");
    scanf(" %c",&check);
    printf("\n");

    for (int i=0;i<index;i++){

            if(totalArray[i]==check){

               ans='y';
               x=i;

            }else{}
    }
    if(ans=='y'){

        printf("We found '%c' at index[%d].\n\n",check,x);

    } else {

        printf("The character '%c' doesn't exist in this Array.\n\n",check);

    }

    printf("Want to check Again? Enter 0 if you want to (or) Type AN another key to continue ~ ");
    scanf(" %c",&change);

    if(change=='0'){

   printf("\n");

    }  else {

   printf("\n");
   break;

    }
  }
    arryPtr();


}

int arryPtr(){


   printf("          Section <2> \n\n");

   printf("");

    int num[10];
    int* ptr;
    int nData=0;
    int adrNum=0;
    int index=0;

    printf("Enter the number of data <max:10> : ");
    scanf("%d",&nData);

    printf("\nEnter the numbers you like: ");

    for(int i=0;i<nData;i++){

    scanf("%d",&num[i]);

    }

    printf("Your number list: \n\n");

    for(int i=0;i<nData;i++){

    printf("%d at Index[%d]\n",num[i],i);

    }



    printf("\nEnter the index number that you want to know the address of value inside of: ");
    scanf("%d",&index);

    ptr=&num[index];

    printf("\nAddress of Value %d: %d",num[index],ptr);


    return 0;

}




