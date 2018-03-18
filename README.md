# My-compettetive-programs
Light's new car problem from hackerblock
it's saved as big.cpp
question are as follows
Light wants to purchase a new car. The price of the car is A. After each passing day, the price of the car becomes A times the price on the previous day. However, B days have passed since the launch of the new car. Light doesn’t know how to calculate the price of the car on the Bth day, he has asked for your help.

Your task is to tell the price of the car on the Bth day. Since, the price can be a very large number, please tell him the price modulo 10^9 + 7.


Input Format:
The first line contains an integer T, the number of testcases. It's followed by T lines. Each testcase will contain two integers A & B separated by a space.

Constraints:
1 <= T <= 10 
1 <= A,B <= 10^100000 
A % (10^9 + 7) != 0:
Sample Input:
5<br />
3 2<br />
4 5<br />
7 4<br />
34534985349875439875439875349875 93475349759384754395743975349573495<br />
34543987529435983745230948023948 3498573497543987543985743989120393097595572309482304<br />
Sample Output:
9<br />
1024<br />
2401<br />
735851262<br />
985546465<br />

Solution:
as we can see that a and b are exceeding the lon long limit so what we have to is that we have to take input as string
then convert it into numeric format and where ever multiplication is there we need to do modulo
Important:
base modulo is 10^9+7<br />
power modulo is (10^9+7)-1<br />
after getting the digits to we have to do calcualte a^p
but traditionally doing will cost n computations
but we can do better by applying divide and conquer technique
if ppower is divisble by 2 then power(a*a,p/2,M)
or else
 power(a*a,p/2,M)*a
 but point to be noted is that a*a can exceed the limit of digits then it should be moded whereever multiplied.
 
