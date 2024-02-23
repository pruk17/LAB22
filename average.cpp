#include <iostream>
#include <cstdlib>

using namespace std;
int main(int many, char *avg[] ){
    float sum = 0, Avg = 0;
    if (many == 1) printf("Please input numbers to find average.\n");
    else {
        for(int i = 0; i < many; i++){
        sum += atoi(avg[i]);
        if(i == many - 1) {
            printf("---------------------------------\n");
            Avg = sum/(many - 1);
            printf("Average of %d numbers = %.0f \n", i, Avg);
            printf("---------------------------------\n");
            }
        }
    }
}
