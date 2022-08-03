#! /bin/bash

rm posicionesgnu.txt
rm angulosgnu.txt
rm distanciagnu.txt
rm histodist.txt
rm histoang.txt

#imprimamos el contenido para gnuplot en un archivo
echo 'unset label
clear 
set terminal jpeg
set output "posicion.jpeg"
set title "funcion posición"
set xlabel "X (u)" 
set ylabel "Y (u)" 
set grid
set style data linespoints
cd '\''/home/captop/ejercicio_docker/EXAMENRETRASADA'\'' 
plot "posiciones" u 1:2 ps 1' >> posicionesgnu.txt

#imprimamos el contenido para gnuplot en un archivo
echo 'unset label
clear 
set terminal jpeg
set output "ángulos.jpeg"
set title "funcion ángulo"
set xlabel "tiempo (t)" 
set ylabel "ángulo (radianes)" 
set grid
set style data linespoints
cd '\''/home/captop/ejercicio_docker/EXAMENRETRASADA'\'' 
plot "angulovstiempo" u 2:1 ps 1' >> angulosgnu.txt

#imprimamos el contenido para gnuplot en un archivo
echo 'unset label
clear 
set terminal jpeg
set output "distancia.jpeg"
set title "funcion distancia"
set xlabel "tiempo (t)" 
set ylabel "distancia (unidades)" 
set grid
set style data linespoints
cd '\''/home/captop/ejercicio_docker/EXAMENRETRASADA'\'' 
plot "distanciavstiempo" u 2:1 ps 1' >> distanciagnu.txt

#imprimamos el contenido para gnuplot en un archivo
echo 'set terminal png size 1500,500
set output "histodist.png"
set title "distancias"
set xlabel "iteracion"
set ylabel "distancia"
set grid
set style data histogram
set style histogram cluster gap 5
set style fill solid border -1
cd '\''/home/captop/ejercicio_docker/EXAMENRETRASADA'\'' 
plot "distanciavstiempo" u 1 ' >> histodist.txt 

#imprimamos el contenido para gnuplot en un archivo
echo 'set terminal png size 1500,500
set output "histoang.png"
set title "angulos"
set xlabel "iteracion"
set ylabel "angulo"
set grid
set style data histogram
set style histogram cluster gap 5
set style fill solid border -1
cd '\''/home/captop/ejercicio_docker/EXAMENRETRASADA'\'' 
plot "angulovstiempo" u 1 ' >> histoang.txt 


#compilemos el programa en c
gcc -o retra1_1.out retra1_1.c -lm
./retra1_1.out

#abramos gnuplot
gnuplot "posicionesgnu.txt"
gnuplot "angulosgnu.txt"
gnuplot "distanciagnu.txt"
gnuplot "histodist.txt"
gnuplot "histoang.txt"
