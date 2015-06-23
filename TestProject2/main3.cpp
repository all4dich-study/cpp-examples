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

int main(int argc, char* argv[]) {
    // insert code here...
    int number = 10;
    int numArray[number] ;
    time_t rawtime;
    srand(time(&rawtime));
    for (int j=0; j<number; j++) {
        int temp = rand() % 50;
//        *(numArray+j) = (number - j);
        *(numArray+j) = temp;
    }
   
    for (int i=0;i<number;i++){
        std::cout<<*(numArray+i)<<",";
    }
    
    std::cout<<std::endl;
    for ( int x=1;x<number;x++){
        int temp = numArray[x];
        int y = 0;
        for (y=x-1;(y>=0 && numArray[y]>temp);y--){
                numArray[y+1] = numArray[y];
        }
        numArray[y+1] = temp;
        for (int k=0;k<number;k++){
            std::cout<<numArray[k]<<",";
        }
        std::cout<<std::endl;
    }
    return 0;
}
