#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//temperatura con condiciones//
// frio: 16
// caliente: 29
int frio = 16;
int caliente = 29;
int sofa = 7000;


int main(int argc, char** argv){
    int inputTemp = atoi(argv[1]);
    int inputMoney = atoi(argv[2]);
    char inputName = argv[3][0];    //--> "Famale"---> {'F','a', 'm', 'a','l','e','\0'}
    bool temp_condition = ( inputTemp == frio );
    bool tempCondition2 = (inputTemp == caliente);
    bool temp_condition3 = (inputTemp >= caliente);
    bool canRobotMove = (inputTemp <= caliente);
    bool hasUserMoney =  (inputMoney >= sofa);
    bool isUserMale = (inputName != 'F');

    if(canRobotMove){
        //Robot.move(x_coord, y_coord);
    } else {
        //Robot.stop(x_coord, y_coord);
    }

    if(hasUserMoney) {
        // Allows to bus
    }
    else{
        // rejected product
    }

    if (inputTemp <= 29) {
        //Robot.move(x_axis, y_axis)
    } else {
        //Robot.stop(x_coord, y_coord);
    }

    return 0;
}