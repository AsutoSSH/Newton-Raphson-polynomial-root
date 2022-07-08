WELCOME TO NEWTON-RHAPSON POLYNOMIAL ROOT FINDER

This program will take any n-degree polynomial and will try to find a root by Newton-Rhapson method.


INSTRUCTIONS:

    1. Enter the degree of polynomial (an integer preferrably less than 25 or you run out of alphabets). Then the program will display the general form of your polynomial.

    2. Then enter all coefficients. All coefficients should be separated by a space.(Examples are given below)
       
    3. The program will display your polynomial according to the general form and your coefficients.
       
    4. Choose an initial value to start searching roots from. You can input any integer. If the program found a positive root and you want to find a negative root then enter a negative number as initial value to find the negative 
       root. More info stated at the end.
       
    5. The program will display a single root. There can be multiple roots present, you have to experiment with different initial values to find them.
       
    6. As verification the program will find the value of P(foundroot) where P(x) is your polynomial. It will not always be 0 but a very very small number such as 1.23442E-09 or 2.4325E-10 etc. this is due to accuracy limitations of double datatype.

        
       
EXAMPLES(terminal outputs):

1) STANDARD CASE (1 root)

Enter degree of polynomial:3
General Form: ax^3+bx^2+cx+d
Enter coefficients(space separated): 3 -5 45 -456
Your polynomial is: 3x^3-5x^2+45x-456
Initial value: 3
One of the roots(if multiple present): 4.91225
Verififcation: P(found root or closest value) = 7.67784e-09

2) CASE OF a POSITIVE AND NEGATIVE ROOT

Enter degree of polynomial:2
General Form: ax^2+bx+c
Enter coefficients(space separated): 1 0 -81
Your polynomial is: 1x^2+0x-81
Initial value: 3
One of the roots(if multiple present): 9
Verififcation: P(found root or closest value) = 7.54371e-07
Initial value: -4
One of the roots(if multiple present): -9
Verififcation: P(found root or closest value) = 1.70388e-10

3) CASE OF 2 NEGATIVE ROOTS

Enter degree of polynomial:4
General Form: ax^4+bx^3+cx^2+dx+e
Enter coefficients(space separated): 3 5 2 6 2
Your polynomial is: 3x^4+5x^3+2x^2+6x+2
Initial value: 3
One of the roots(if multiple present): -0.345885
Verififcation: P(found root or closest value) = -1.08278e-10
Initial value: -3
One of the roots(if multiple present): -1.79943
Verififcation: P(found root or closest value) = 1.04883e-06


IMPORTANT POINTS:

    1. If the constant term of your polynomial is 0 then 0 is obviously a root of your polynomial. But the program may not display 0 as a root unless the initial value is set to be 0.
       
    2. Don’t use rational numbers(decimals) as coefficients. The program is not ready for those cases yet.
       
    3. If your polynomial has multiple roots and two of them are for example say 2.34 and 56.65. If you set initial value as 1 then there is higher probability that the root will come out as 2.34. However if you set initial value as 50 then the program finding 56.65 as root has higher chance.
       
       In short the closer a root is to your initial value the higher the probability that the program will tend to find that root. Hence as said above if you want to find a negative root try a negative number.
       
    4. While entering the coefficients, you have to enter all coeeficients mandatorily. See the general form equation for reference. If you want a term to not have a coefficient enter 0 as the coefficient for that place.(See example 2).

	
	 	







 
