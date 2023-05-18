/*
  Codigo elaborado por 3D ROOM el dia 18 de Mayo del año 2023 
  -------------------------------------------------------------------------------------------------------------------------
  Este será nuestro primer programa en arduino donde enviaremos un texto a nuestro monitor serial y lo podamos visualizar
  para poder compilar el codigo es necesario que tengamos nuestro arduino conectado a la computadora
  -------------------------------------------------------------------------------------------------------------------------
  Puedes seguirme en mi cuenta de tiktok https://www.tiktok.com/@3droomflt donde podras encontrar más contenido relacionado
  con arduino y proyectos de robotica.
*/

void setup() {
  Serial.begin(9600);                 //Innicializamos el monitor serial con una velocidad de 9600 baudios
}

void loop() {
  Serial.println("Hola Mundo");       //Con este comando le decimos que nos muestre el mensaje de hola mundo verticalmente
  delay(1000);                        //Retardo de 1sg o 1000ms para que aparezca el otro mensaje
}
