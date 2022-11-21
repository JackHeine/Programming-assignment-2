//Jack Heineking
//Operating systems: programming assignment 2
//11/16/2022

/*summary
there is a table with 5 processes.
each process has 3 resouces, A B C.
A has a ceiling of 10 instances.
B has a ceiling of 5 instances.
C has a ceiling of 7 instances.
example table
   Allocation Maximum Available
   A B C      A B C   A B C
p0 0 1 0      7 5 3   3 3 2
p1 2 0 0      3 2 2
p2 3 0 2      9 0 2
p3 2 1 1      2 2 2
p4 0 0 2      4 3 3

notes:
available = ceiling - sum(allocation)
allocation cannot exceed max for each instance.
TODO: research bankers algorithm
*/
// Banker's Algorithm
#include <iostream>
#include "inputTable.hpp"
using namespace std;

int main()
{
    
    int needs[pros][types];//array representing what we need
    int f[pros], ans[pros], ind = 0;
    for( int k=0; pros> k; k++){
        f[k] = 0;
    }//initiating f
    for(int i = 0; i< pros; i++){
        for(int j = 0; j < types; j++){
            needs[i][j] = maxi[i][j] - alloc[i][j];
        }//as stated in notes, needs = max -alloc 
    }
    for(int i = 0; i < pros; i++){
        for(int j = 0; j < pros; j++){
            if(f[j] == 0){
                int flag = 0;
                for(int k = 0; k < types; k++){
                    if(needs[j][k] > available[k]){
                        flag = 1;
                        break;
                    }// check to see if at any point our needs outgrow what we can give, and if it does, break and report an unsafe sequennce.
                }
                if(flag ==0) {//if it does fit what is available, allocate what is needed where it needs to be allocated.
                    ans[ind++] = j;
                    for(int x = 0; x < types; x++){
                        available[x] += alloc[j][x];
                    }
                    f[j] =1;

                }
            }
        }
    }
    int endflag = 1;
    //now, check if sequence is safe and print output if it is.
    for(int i = 0; i < pros; i++){
        if(f[i]==0){
            endflag=0;
            cout << "Not safe!\n";
            break;
        }
    }
    if(endflag == 1){
        cout << "sequence is SAFE!\n Safe sequence: \n";
        for(int i = 0; i <pros-1; i++){
            cout << " p" << ans[i] << " ->";
        }
        cout << " p" << ans[pros - 1] << endl;
    }
    return 0;
}