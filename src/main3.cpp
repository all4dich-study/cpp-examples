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
    int numArray[number] ;
    time_t rawtime;
    srand(time(&rawtime));
    for (int j=0; j<number; j++) {
        int temp = rand() % 50;
//        *(numArray+j) = (number - j);
        *(numArray+j) = temp;
    }
   
    for (int i=0;i<number;i++){
        cout<<*(numArray+i)<<",";
    }
    
    cout<<endl;
    for ( int x=1;x<number;x++){
        int temp = numArray[x];
        int y = 0;
        for (y=x-1;y>=0 ;y--){
            if ( numArray[y] > temp) {
                numArray[y+1] = numArray[y];
                for (int k=0;k<number;k++){
                    cout<<numArray[k]<<",";
                }
                cout<<endl;
            }else{
                break;
            }
        }
        numArray[y+1] = temp;
        for (int k=0;k<number;k++){
            cout<<numArray[k]<<",";
        }
        cout<<endl;
    }
    return 0;
}
