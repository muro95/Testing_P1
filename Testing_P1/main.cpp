//
//  main.cpp
//  Testing_P1
//
//  Created by Alex Truong on 2/6/20.
//  Copyright © 2020 Alex Truong. All rights reserved.
//

#include <iostream>

using namespace std;
int main()
{
    int i, j, temp;
    int num = 1;
    int SIZE;
    
    cout<<"Enter the number of disk: ";
    cin>>SIZE;
    int NUMBER[10];
    for(i = 0; i < SIZE; i ++){
        NUMBER[i] = num;
        num = (num + 1) %2;
    }
    for(i = 0; i< SIZE - 1; i++){
        for(int k = 0; k < SIZE; k ++)
            cout<<NUMBER[k]<< " ";
        cout<< endl<< endl;
        bool swap = false;
        for(j = 0; j < SIZE -1; j ++)
            if (NUMBER[j] > NUMBER[j+1]){
                swap = true;
                temp = NUMBER[j];
                NUMBER[j] = NUMBER[j+1];
                NUMBER[j+1] = temp;
        }
//        if (!swap) {
//            return 0;
//        }
    }
}
