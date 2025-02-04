#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<math.h>
#include<iostream>
#include<array>

using namespace std;
#define _USE_MATH_DEFINES

int* Reflect(float x[], float y[], int n){
  int* arr = new int[n*2+2];
  int lineay = 320;
  int lineax = 380;
  int dist, option;
  cout<<"Reflejar en X [0] o Y[1]?";
  cin>>option;
  if(option == 0){
    for(int i = 0; i<n; i++){
      dist = abs(x[i]-lineax);
      x[i] = x[i]+dist*2;
        //cout<<"X: "<<x[i]<<endl;
    }
  }
  else{
    for(int i = 0; i<n; i++){
      dist = abs(y[i]-lineay);
      y[i] = y[i]+dist*2;
        //cout<<"X: "<<x[i]<<endl;
    }
  }

  int j = 0;
  for(int i =0; i<n*2; i = i+2){
    arr[i] = x[j];
    j++;
  }
  j=0;
  for(int i =1; i<n*2; i = i+2){
    arr[i] = y[j];
    j++;
  }

  arr[n*2] = x[0];
  arr[n*2+1] = y[0];

  return arr;

}

int* Translate(float x[], float y[], int n){
  for(int i = 0; i< n; i++){
    x[i] = x[i] + 90;
    y[i] = y[i] - 180;
  }

  int* arr = new int[n*2+2];
  int j = 0;
  for(int i =0; i<n*2; i = i+2){
    arr[i] = x[j];
    j++;
  }
  j=0;
  for(int i =1; i<n*2; i = i+2){
    arr[i] = y[j];
    j++;
  }

  arr[n*2] = x[0];
  arr[n*2+1] = y[0];

  return arr;

}
//driver code
int main()
{
  int n;
  cout<<("Numero de lados del poligono: ");
  cin>>n;

  int centrox = 300, centroy = 250, radio = 50;
  float x[n];
  float y[n];
  float pi = M_PI;

  cout<<pi<<endl;

  for(int i = 0; i<n; i++){
    x[i] = radio * cos(2*pi*i/n) + centrox;
    y[i] = radio * sin(2*pi*i/n) + centroy;
    cout<<"X: "<<x[i]<<" Y: "<<y[i]<<endl;
  }

  int arr[n*2+2];
  int j = 0;
  for(int i =0; i<n*2; i = i+2){
    arr[i] = x[j];
    j++;
  }
  j=0;
  for(int i =1; i<n*2; i = i+2){
    arr[i] = y[j];
    j++;
  }

  arr[n*2] = x[0];
  arr[n*2+1] = y[0];

  int gd = DETECT, gm;
  initgraph(&gd, &gm, "");
  //initGraphics(500,500);

  drawpoly(n+1,arr);
  drawpoly(n+1,Reflect(x,y,n));
  drawpoly(n+1, Translate(x,y,n));
  //line(400,100,400,300);

  int maxX = getmaxx();
  int maxY = getmaxy();

  cout<<"Max X and Y are: "<<maxX<<" "<<maxY<<endl;

  getch();

  closegraph();
  return 0;
}
