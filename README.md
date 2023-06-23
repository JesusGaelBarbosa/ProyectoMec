#ELECTROSTATICA

Se entiende por electrostática a la rama de la físicaque se encarga del estudio y análisis del comportamiento de las cargas eléctricas en estado de equilibrio o, lo que es lo mismo, los efectos que se generan en los cuerpos como resultado de sus cargas eléctricas, ya sean de atracción o rechazo. A este efecto se le conoce como fenómeno electrostático. 

Ley de Coulomb

La fuerza eléctrica con la que se atraen o repelen dos cargas puntuales en reposo es directamente proporcional al producto de las mismas, inversamente proporcional al cuadrado de la distancia que las separa y actúa en la dirección de la recta que las une.

                                                 F = k(q1q2)/r^2

#PROGRAMA

El progama esta enfocado en resolver problemas de Electroestatica, especificamente de la Ley de Coulomb, un ejemplo de estos seria:

Una carga de -5x10^-7 C ejerce una fuerza a otra carga de 0.237 N a una distancia de 3.5 metros, ¿cuál es el valor de la segunda     carga?
       
        Datos: k = 8.99x10^9 Nm^2/C^2 q1 = -5x10^-7 C    F = 0.237 N    r = 3.5 m    q2 = ?
        Formula: F = k(q1q2)/r^2, despejando la segunda carga tenemos q2 = (F(r^2))/kq1
        Solución: q2 = (0.237N)*(3.5m)^2 / (8.99x10^9Nm^2/C^2)*(-0.5x10^-6C) = -644x10^-6C

Instrucciones de ejecucion: 
- Abra el archivo .c en el editor de texto
- Copie todo el codigo 
- Abra una pagina de internet e introduzca el siguiente link https://www.onlinegdb.com/online_c_compiler
- Limpie el espacio para escribir codigo
- Pegue el codigo que copio previamente 
- Haga clik en el boton "Run" para que el programa comience su ejecucion
- A continuacion se desplegara un menu, seleccione la opcion 4
- Con esto ya tendra en pantalla el problema de ejemplo que soluciona el programa

Valores de entrada y salidas esperadas:

    Para el calculo de Fuerza:
        Entradas q1 = 3.2    q2 = -1.48    r = 0.123
        Salida -2.81N
    Para el calculo de una Carga:
        Entradas F = -0.303 q1 = -3    r = 0.7    
        Salida 5.5x10^-6
    Para el calculo de la Distancia:
        Entradas q1 = 2.8    q2 = 7.5    F = 10
        Salida 0.137m
