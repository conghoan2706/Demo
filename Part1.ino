//Tham khảo google gemini
#include <WiFi.h>

const char* ssid = "VJU Student";
const char* password = "studentVJU@2022";

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.print("Đang kết nối đến mạng Wi-Fi: ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nKết nối Wi-Fi thành công!");
  Serial.print("Địa chỉ IP của ESP32: ");
  Serial.println(WiFi.localIP());
}

void loop() {
 
  delay(5000); 
}