
//Variable donde almacenaremos el valor del potenciometro
long valor0;
long valor1;
long valor2;
long valor3;


void setup() {
  //Inicializamos la comunicación serial
  Serial.begin(115200);
  
  //Escribimos por el monitor serie mensaje de inicio
  //Serial.println("Inicio de sketch - valores del potenciometro");
 
}
 
void loop() {
  // leemos del pin A0 valor
  
  valor0 = analogRead(A0);
  valor1 = analogRead(A1);
  valor2 = analogRead(A2);
  valor3 = analogRead(A3);
  
  //Imprimimos por el monitor serie
  Serial.print(valor0);
  Serial.print(",");
  Serial.print(valor1);
  Serial.print(",");
  Serial.print(valor2);
  Serial.print(",");
  Serial.println(valor3);
 
  delay(10);
 
}