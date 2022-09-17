int red_light_pin= 3;
int green_light_pin = 4;
int blue_light_pin = 5;
int red_control = 6, blue_control = 7, green_control = 8, plus = 9, minus = 10;
bool increase = true;
int red = 0, green = 0, blue = 0;

void setup() {
  RGB_color(0, 0, 0);
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);
  pinMode(red_control, INPUT);
  pinMode(green_control, INPUT);
  pinMode(blue_control, INPUT);
  pinMode(plus, INPUT);
  pinMode(minus, INPUT);
}
void loop() {
  RGB_control();
  plus_Minus_Control();
}
void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}
void RGB_control()
{
  if(red >= 0 && red <= 255 && green >= 0 && green <= 255 && blue >= 0 && blue <= 255 &&)
  {

    if(analogRead(red_control) > 10 && increase == true)
    {
      red++;
    }
    if(analogRead(red_control) > 10 && increase == false)
    {
      red--;
    }
    if(analogRead(green_control) > 10 && increase == true)
    {
      green++;
    }
    if(analogRead(green_control) > 10 && increase == false)
    {
      green--;
    }
    if(analogRead(blue_control) > 10 && increase == true)
    {
      blue++;
    }
    if(analogRead(blue_control) > 10 && increase == false)
    {
      blue--;
    }
  }
  RGB_color(red, green, blue);
}

void plus_Minus_Control()
{
  if(analogRead(plus) >= 10 && analogRead(minus) >= 10)
  {
  } else if(analogRead(plus) >= 10)
  {
    increase = true;
  } else if(analogRead(minus) >= 10)
  {
    increase = false;
  }
}
