//
//  main.cpp
//  TestProject2
//
//  Created by Sunjoo Park on 6/22/15.
//  Copyright (c) 2015 Sunjoo Park. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char* argv[]) {
    // insert code here...
    int number = atoi(argv[1]);
    //int number = 10;
    int numArray[number] ;
    time_t rawtime;
    srand(time(&rawtime));
    for (int j=0; j<number; j++) {
        int temp = rand() % 40000;
        *(numArray+j) = temp;
    }
   
    for (int i=0;i<number;i++){
        cout<<*(numArray+i)<<",";
    }
   
    cout<<endl;
    for ( int x=0;x<number;x++){
        int minIndex = x;
        int y = 0;
        for (y = x+1; y <= number; y++)
        {
            if ( numArray[minIndex] > numArray[y]){
                minIndex = y;
            }
        }
        int temp = numArray[minIndex];
        numArray[minIndex]=numArray[x];
        numArray[x]=temp;
    }
    for (int k=0;k<number;k++){
        cout<<numArray[k]<<",";
    }
    cout<<endl;

    return 0;
}
