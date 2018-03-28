/*
 * By giahuy2201
 * Date: Mar 28, 2018
 */

#include <iostream>

int cross(int *coor);

int main()
{
    while(true) // let user enter the third number to check (for multiple-choice test :D)
    {
        int *coor = new int[6]; // to store 2 vector coordinates
        std::cout << "Enter 2 vectors: ";
        for(int i=0; i< 6;i++) // read 6 numbers one by one
        {
            std::cin >> icoor[i];
        }
        int *crossp = new crossp[3];
        crossp = cross(coor);
        std::cout << ":> "<< crossp[0] << " " << crossp[1] << " " << crossp[2] << "\n\n";
    }

    return 0;
}

int cross(int *coor)
{
    /*
     * calculate cross product using matrix
     * |0|1|2|
     * |3|4|5|
     */
    int *crossp = new int[3];
    cross[0] = coor[1]*coor[5]-coor[2]*coor[4];
    cross[1] = coor[2]*coor[3]-coor[0]*coor[5];
    cross[2] = coor[0]*coor[4]-coor[1]*coor[3];
    return crossp;
}