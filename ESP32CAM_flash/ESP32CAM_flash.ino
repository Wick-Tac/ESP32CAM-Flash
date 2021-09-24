//ESP32CAM flash
//Por: Hugo Vargas
//24 de mayo de 2021
//Creditos Moayom
//
//Este es el programa básico para controlar el
//LED Flash del ESP32CAM. El led flash parpadea
//cada 500 ms.


//Definición de pines
<<<<<<< HEAD
#define LAMP 4 //Se selecciona el pin donde se encuentra el led flash
=======
#define LAMP 5 //Se selecciona 
>>>>>>> 4883003e6464b573eefc018e083519fd24cab1c1

//Inicialización del programa
void setup() //Estructura principal
{
  pinMode(LAMP, OUTPUT); //Configuración de pines. 2 parámetros, pin a configurar y estado (INPUT,INPUT_PULLUP,OUTPUT)
} //Fin de void setup ()

//Cuerpo del programa
void loop() //Función bucle
{
  digitalWrite (FLASH, HIGH); //Encender led. 2 parámetros, pin a controlar, estado (0,LOW,FALSE,1,HIGH,TRUE)
  delay (500); //Espera de 2 segundos
  digitalWrite (FLASH, LOW); //Apagar led
  delay (500); //Espera de 2 segundos
} //Fin de void loop()
