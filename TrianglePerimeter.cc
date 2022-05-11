// Example program
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
    int size=1000;
    cout << "Input max perimeter value: ";
    cin >> size;
    vector<int> solutions(size,0);
    float perimeter;
    //Search for all solutions and save in vector (Could be more memory efficient but I want to have all solutions ;P)
    for(int it=3; it<=size;it++){
        for(int i=0; i<(it/2); i++){
            for(int j=0; j<(it/2); j++){
                //cout << "For number: " << it << " trying: i:" << i << " j:" << j << endl;
                perimeter = i+j+sqrt(i*i+j*j);
                //cout << "Perimeter: " << perimeter << endl;
                if(perimeter == it){
                  //cout << "Number: "<< it << " solution found: " << i << ", " << j <<endl;
                  solutions[it]++;
                }
            }
        }
    }
    //Search for position with max solutions
    int maxpos = -1;
    int maxval = 0;
    //cout << "--------PRINTING SOLUTIONS---------" << endl;
    for (int i = 0; i <= size; i++) {
      if(solutions[i]>0){
          if(solutions[i] > maxval){
            maxpos = i;
            maxval = solutions[i];
          }
          //cout << "Number " << i << ", " << solutions[i] << " solutions." << endl;
      }
    }
    cout << "------------RESULT-------------"<<endl;
    cout << "Number with maximized solutions is: " << maxpos<< endl;
}
