#include <cstdlib>
#include <iostream>
#include <fstream> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <vector>
#include "python2.7/Python.h"

using namespace std;
int test(){
        Py_Initialize(); 
        PyRun_SimpleString("print 'hello'");
        Py_Finalize();
}
int main(int argc, char *argv[]){
    test();
}