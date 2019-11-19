#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
/*declaración de variables*/
    int N_x = 30;
    double D = 1.0;
    double s = 1.0;
    double dt = 0.0022;
    int N_t = int (1/dt);
    double x_1 = -1;
    double x_2 = 1;
    double dx = abs(x_2 - x_1)/N_x;
    double pi[N_x][N_t];

/*Para las condiciones iniciales */
    
    for(int i = 0; i < N_t; i++){
        for(int j  = 0; j < N_x; j++){
            pi[j][i] = 0;
        }
    }

    for(int i = 0; i < N_t; i++){
        for(int j = 1; j < N_x-1; j++){
            pi[j][i+1] = pi[j][i] + (D*dt/(dx*dx))*(pi[j+1][i] - 2*pi[j][i] + pi[j-1][i]) + dt*s;
        }
    }

    for(int i = 0; i < N_x; i++){
        for(int j  = 1; j < N_t; j++){
            cout << i*dx + x_1 << ' ' << j*dt << ' ' << pi[i][j] << endl;
        }
    }

    return 0;
}