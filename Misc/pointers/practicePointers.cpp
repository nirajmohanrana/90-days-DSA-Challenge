#include <iostream>
using namespace std;

void increment(int **p) // For Q. 20th
{
     ++(**p);
}

void update(int *p) // For Q. 17th
{
     *p = (*p) * 2;
}

int main()
{
     cout << "===============================================" << endl
          << endl;
     // STARTS HERE

     /*   ------BASIC POINTERS------   */

     // 1st
     /*
          int first = 8;
          int second = 18;

          int *ptr = &second;
          *ptr = 9;
          cout << first << endl
               << second;
     */
     // ANS:- 8,9

     // 2nd
     /*
          int first = 6;
          int *p = &first;
          int *q = p;

          (*q)++;
          cout << first << endl;
     */
     // ANS:- 7

     // 3rd
     /*
          int first = 8;
          int *p = &first;
          cout << (*p)++ << endl;
          cout << first << endl;
     */
     // ANS:- 8,9

     // 4th
     /*
          int *p = 0;
          int first = 110;
          *p = first;
          cout << *p << endl;
     */
     // ANS:- ERROR::SEGMENTATION FAULT "it should be *p = &first"

     // 5th
     /*
          int first = 8;
          int second = 11;
          int *third = &second;
          first = *third;
          *third = *third + 2;
          cout << first << " " << second << endl;
     */
     // ANS:- 11,13

     // 6th
     /*
          float f = 12.5;
          float p = 21.5;
          float *ptr = &f;
          (*ptr)++;
          *ptr = p;

          cout << *ptr << " " << f << " " << p << endl;
     */
     // ANS:- 21.5 ,21.5 ,21.5

     /*   ------ARRAY POINTERS------   */

     // 7th
     /*
          int arr[5];
          int *ptr;

          cout << sizeof(arr) << " " << sizeof(ptr) << endl;
     */
     // ANS:- 20 ,8

     // 8th
     /*
          int arr[] = {11, 12, 13, 14};
          cout << *(arr) << " " << *(arr + 1) << endl;
     */
     // ANS:- 11, 12

     // 9th
     /*
          int arr[6] = {11, 12, 13};
          cout << arr << " " << &arr << &arr[0] << endl;
     */
     // ANS:- address of arr, address of arr, address of arr, all are same in my case(0xfd5dff6b0)

     // 10th
     /*
          int arr[6] = {11, 12, 13};
          cout << (arr + 1) << endl;
     */
     // ANS:- address of arr[1], in my case (0x89931ffca4)

     // 11th
     /*
          int arr[6] = {11, 12, 13};
          int *p = arr;
          cout << p[2] << endl;
     */
     // ANS:- 13

     // 12th
     /*
          int arr[] = {11, 12, 13, 14, 15};
          cout << *(arr) << " " << *(arr + 3) << endl;
     */
     // ANS:- 11, 14

     // 13th
     /*
          int arr[] = {11, 12, 13, 14};
          int *ptr = arr++;
          cout << *ptr << endl;
     */
     // ANS:- ERROR::CANNOT CHANGE CONTENTS OF SYMBOL TABLE

     // 14th
     /*
          char ch = 'a';
          char *ptr = &ch;
          ch++;
          cout << *ptr << endl;
     */
     // ANS:- b
     /*
          char arr[] = "abcde";
          char *p = &arr[0];
          cout << p << endl;
     */
     // ANS:- abcde

     // 15th
     /*
          char arr[] = "abcde";
          char *p = &arr[0];
          p++;
          cout << p << endl;
     */
     // ANS:- bcde

     // 16th
     /*
          char str[] = "pqrs";
          char *p = str;
          cout << str[0] << " " << p[0] << endl;
     */
     // ANS:- p, p

     // 17th
     /*
          int i = 10;
          update(&i);
          cout << i << endl;
     */
     // ANS:- 20

     // 18th
     /*
          int first = 110;
          int *p = &first;
          int **q = &p;

          int second = (**q)++ + 9;
          cout << first << " " << second << endl;
     */
     // ANS:- 111, 119

     // 19th
     /*
          int first = 100;
          int *p = &first;
          int **q = &p;
          int second = ++(**q);
          int *r = *q;
          ++(*r);

          cout << first << " " << second << endl;
     */
     // ANS:- 102, 101

     // 20th
     /*
          int num = 110;
          int *ptr = &num;
          increment(&ptr);
          cout << num << endl;
     */
     // ANS:- 111

     // ENDS HERE
     cout << endl
          << endl
          << "===============================================" << endl;

     return 0;
}