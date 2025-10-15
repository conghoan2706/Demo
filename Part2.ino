//Tham khảo google gemini
#include <WiFi.h>

const char* ssid = "Team_8";
const char* password = "12345678"; 

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println("Đang cấu hình Access Point...");

  WiFi.softAP(ssid, password);

  IPAddress myIP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(myIP);
  
  Serial.println("Access Point đã sẵn sàng. Vui lòng kết nối.");
}

void loop() {
  Serial.print("Số client đang kết nối: ");
  Serial.println(WiFi.softAPgetStationNum());
  delay(3000);
}