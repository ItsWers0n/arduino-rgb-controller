int red_light_pin= 3;
int green_light_pin = 5;
int blue_light_pin = 6;
int red_up = 7, red_down = 8, blue_up = 9, blue_down = 10, green_up = 11, green_down = 12;

void setup() {
  RGB_color(0, 0, 0);
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);
  pinMode(red_up, INPUT);
  pinMode(red_down, INPUT);
  pinMode(green_up, INPUT);
  pinMode(green_down, INPUT);
  pinMode(blue_up, INPUT);
  pinMode(blue_down, INPUT);
}
void loop() {
  RGB_control();
}
void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}
void RGB_control(int red = 0, int green = 0, int blue = 0)
{
  if(red >= 0 && red <= 255 && green >= 0 && green <= 255 && blue >= 0 && blue <= 255 &&)
  {
    if(analogRead(red_up) > 10)
    {
      red++;
    }
    if(analogRead(red_down) > 10)
    {
      red--;
    }
    if(analogRead(green_up) > 10)
    {
      green++;
    }
    if(analogRead(green_down) > 10)
    {
      green--;
    }
    if(analogRead(blue_up) > 10)
    {
      blue++;
    }
    if(analogRead(blue_down) > 10)
    {
      blue--;
    }
  }
  RGB_color(red, green, blue);
}
