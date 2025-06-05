#pragma warning (disable:4956)

#include <stdio.h>

int main() {
    int index = 1, result = 0;

    // for(index = 1; result + index < 1000; index++) {
    //     result += index;
    // }

    while (result < 1000)
    {
        result += index;
        if(result + index < 1000)
            index++;
    }
    

    printf("%d \n", index);
}