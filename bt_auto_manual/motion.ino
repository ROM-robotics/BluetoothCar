void start_engine(int s){   //forward
  analogWrite(EN_A, s);
  analogWrite(EN_B, s);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);  
}
void back_engine(int s){   //backward
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(EN_A, s);
  analogWrite(EN_B, s);
}
void stop_engine() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  analogWrite(EN_A, 0);
  analogWrite(EN_B, 0);
}
void front_right(){
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(EN_A, 0);
  analogWrite(EN_B, 200);
  
}
void slow_front_right(){
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(EN_A, 180);
  analogWrite(EN_B, 180);
  
}
void front_left(){
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  analogWrite(EN_A, 200);
  analogWrite(EN_B, 0);

}

void slow_front_left(){
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(EN_A, 180);
  analogWrite(EN_B, 180);

}
//backward

void slow_back_right(){
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(EN_A, 0);
  analogWrite(EN_B, 180);
}

void slow_back_left(){
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  analogWrite(EN_A, 180);
  analogWrite(EN_B, 0);
}
void frontF_right(){
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(EN_A, 255);
  analogWrite(EN_B, 255);
  
}
void frontF_left(){
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(EN_A, 255);
  analogWrite(EN_B, 255);

}


















