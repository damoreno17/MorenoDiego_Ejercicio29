grafica.png : graficas.py datos.dat
    python graficas.py 
    
datos.dat : a.out
    ./a.out > datos.dat
    
a.out : ejercicio29.cpp
    c++ ejercicio29.cpp
    
    