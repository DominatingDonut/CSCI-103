#include <iostream>
#include <cmath>

using namespace std;

/*
    Written by: Stanley Kim
    Email: stanlejk@usc.edu
    
    Tri: Takes input Θ and prints out a right triangle with the angle Θ,
    with no x-values between (20, 30).
*/

int main()
{
    int angle_deg; //Angle in degrees
    double angle_rad; //Angle in radians
    
    cout << "Enter the angle, Θ, in degrees: "; //Prompt
    cin >> angle_deg; //User inputs angle in degrees
    
    angle_rad = angle_deg * (M_PI / 180); //Conversion to radians
    
    for(int y = 0; y < 31; y++) //Loop controls rows
    {
        double z = floor(y * tan(angle_rad));
        
        for(int x = 0; x < z; x++) //Controls characters
        {
            if (z >= 20 && z <= 30)
            {
                for(int a = 0; a < 20; a++)
                {
                    cout << "*";
                }
                break;
            }
            else if (z < 20 || z > 30)
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;

}
