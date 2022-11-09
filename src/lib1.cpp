#include "lib1.h"
int a = 10;


int foo(){
    if(a>1){
        return 1;
    }
    // LCOV_EXCL_START
    else{
        return 2;
    }
    // LCOV_EXCL_STOP
}