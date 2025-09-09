void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);   // 初始化
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);  // 亮1秒
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);   // 暗0.5秒
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);   // 亮0.5秒
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);  // 暗1秒
}
