AUTOR: CARLOS ENRIQUE PEREZ TORTOLA
METODOLOGIA:
    *SE DEFINE VARIABLES: DISTANCIA, ANGULO, SUMA DE ANGULOS, SUMA DE DISTANCIA, UN VECTOR POSICION, VALOR DE ITERACION Y DE INTENTOS; dist, ang, sang, dist, pos[], i=0, n=0, RESPECTIVAMENTE.
    *INICIALIZAMOS PUNTEROS PARA ALMACENAR LAS POSICIONES DEL VECTOR pos[], DISTANCIA Y ANGULOS
    *SE PIDE UN VALOR N DE ITERACIONES AL USUARIO
    *SE DEFINE UNA FUNCION QUE ENCUENTRA SEGUN LA HORA UN NUMERO ALEATORIO
    *EL NUMERO ALEATORIO OBTIENE UN VALOR DE 0-20 PARA LA DISTANCIA Y DE 0-180 PARA EL ANGULO, EL ANGULO EN RADIANES
    *SE PIDE, POR UNA FUNCION WHILE QUE EL PROGRAMA PARE EN DOS CONDICIONES:
        *LA CANTIDAD DE INTENTOS SEA MAYOR QUE LA CANTIDAD DE ITERACIONES PEDIDAS
        *EL OBJETO ALEATORIO DEBE PERTENCER EN EL CUADRANTE I Y II DEL PLANO CARTESIANO, CON RANGO EN X -100,100 Y EN Y DE -100,100
    SE MOSTRARA AL USUARIO LOS ELEMENTOS: 
        DATOS PERSONALES
        NOMBRE
        CARNE
        PEDIR AL USUARIO EL NUMERO DE ITERACIONES MAXIMAS
        IMPRIMIR LA CANTIDAD DE POSICIONES X,Y GENERADAS EN DATOS
    MOSTRARA ADEMAS
        ANGULO PROMEDIO
        DISTANCIA PROMEDIO
        POSICION INICIAL Y FINAL
        CANTIDAD DE ITERACIONES LOGRADAS
    Y ADEMAS SE ALMACENAN, EN ARCHIVOS DE TEXTO LAS TABULACIONES
        POSICIONES X,Y
        DISTANCIA VS TIEMPO (EN ESTE CASO ITERACIONES)
        ANGULO VS TIEMPO    (EN ESTE CASO ITERACIONES)

    DE LOS ARCHIVOS DE TEXTO SE GENERAN, POR MEDIO DE UN BASH GRAFICAS DE 
        POSICIONES X,Y
        DISTANCIA VS TIEMPO (EN ESTE CASO ITERACIONES)
        ANGULO VS TIEMPO    (EN ESTE CASO ITERACIONES)
        HISTOGRAMAS DE DISTANCIA Y ANGULOS
    FINALMENTE MOSTRAMOS LAS IMAGENES RESULTANTES.