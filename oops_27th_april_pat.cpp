// Write a C++ program using class  to find the mean,median and mode for list of numbers. 
// First , sort the numbers in ascending order and then find mean, median and mode.

#include<iostream>
using namespace std;

class numbers{
    public:
    int a[10];
    int n;
    int temp;
    void input(){
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }        
    }
    void sort(){
        for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            //If there is a smaller element found on right of the array then swap it.
            if(a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    }
    float mean(){
        int sum =0;
        int avg;
        for (int i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
        avg = sum /n;
        return avg;        
    }
    float median(){
        
    }
};