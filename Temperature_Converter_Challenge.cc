#include <iostream>	

using namespace std;
		
int main(){
  float start_temp;
  float end_temp;
  int step_size;

  do{
    cout << "start temp: "; cin >> start_temp;
  } while (start_temp < 0);

  do{
    cout << "end temp: "; cin >> end_temp;
  } while (end_temp < start_temp || end_temp > 50000);

  do{
    cout << "steps: "; cin >> step_size;
  } while (step_size > end_temp - start_temp || step_size <= 0);

  for (float right_temp = start_temp; right_temp <= end_temp; right_temp = right_temp + step_size){

    cout << "C: " << right_temp << " | F: " << right_temp*9/5+32 << "\n";



  }

}

// https://www.cprogramming.com/challenges/celsius_converter_table.html
