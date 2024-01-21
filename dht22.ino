#include <DHT.h>

#define DHTPIN D3 //DADO
#define DHTTYPE DHT22 //selecionar o tipo de sensor

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);

}

void loop() {
 float umidade = dht.readHumidity();
 float temperatura = dht.readTemperature(false); //false pra ser em ºC

 Serial.print("Temperatura: ");
 Serial.print(temperatura);
 Serial.print(" ºC");
 Serial.print(" ");
 Serial.print("Umidade: ");
 Serial.print(umidade);

 



}
