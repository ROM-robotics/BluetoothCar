int checkSonic() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  int x = (int) (pulseIn(echo,HIGH)/57); //((pulseIn(echo,HIGH)/2)/28.57);
  delay(50);
  return x;  
} 

