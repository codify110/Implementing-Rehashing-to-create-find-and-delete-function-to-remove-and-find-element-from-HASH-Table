#include <iostream>
using namespace std;
int hashfun(int y, int size)
{
return (y % size);
}
int linear(int size, int *arr, int index, int count, int key)
{

index = (hashfun(key, size) + count); // for 32 ..the rturn value is 2+ 0
if (index < size)
{
if (arr[index] == 0)
{
return index;
}
linear(size, arr, index, ++count, key);
}
else
{

if (arr[hashfun(index, size)] == 0)
{
index = hashfun(index, size);

return index;
}
linear(size, arr, index, ++count, key);
}
}
void insertion(int size, int *arr, int index, int count, int key)
{

if (arr[hashfun(key, size)] == 0)
{
arr[hashfun(key, size)] = key; // returned index is 8th index =18
}
else
{
index = linear(size, arr, index, count, key);
arr[index] = key;
}
}
bool isPrime(int n)
{
// Corner cases
if (n <= 1) return false;
if (n <= 3) return true;

// This is checked so that we can skip
// middle five numbers in below loop
if (n % 2 == 0 || n % 3 == 0) return false;
for (int i = 5; i*i <= n; i = i + 6)
if (n%i == 0 || n % (i + 2) == 0)
return false;

return true;
}
int nextPrime(int N)
{

// Base case
if (N <= 1)
return 2;

int prime = N;

bool found = false;

// Loop continuously until isPrime returns
// true for a number greater than n
while (!found) {
prime++;

if (isPrime(prime))
found = true;

}

return prime;
}
int main()
{
int size, key, elements;
float lamda;
int count;
int index;
cout << "Enter size of array:" << endl;
cin >> size;
int *arr = new int[size];
for (int i = 0; i < size; i++)
{
arr[i] = 0;
}
cout << "How many elements you want to enter:" << endl;
cin >> elements;
for (int i = 0; i < elements; i++)
{
cin >> key;
insertion(size, arr, index = 0, count = 0, key);
}
for (int i = 0; i < size; i++)
{
cout << arr[i] << " ";
}
lamda = elements / size;
char o;
if (lamda > 1)
{

cout << "load factor is greater than 1. Do you want to rehhash y/n?";
cin >> o;
if (o == 'y')
{
int newbucketsize = nextPrime(2 * size);
int *ptr = new int[newbucketsize];
for (int i = 0; i < size; i++)
{
if (arr[i] != 0)
{
int rehashindex = hashfun(arr[i], newbucketsize);

}
else
{
break;
}

}

}
}
system("pause");
}
