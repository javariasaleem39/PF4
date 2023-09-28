#include<iostream>
using namespace std;

void howManyStickers(int n);

main()
{
int n;
cout<< "Enter the side length of the Rubik's Cube: ";
cin>>n;
howManyStickers(n);
}

void howManyStickers(int n)
{
int num_stickers;
num_stickers = n * 6 * n;
cout<<"Number of stickers needed: " << num_stickers;
}