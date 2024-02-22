# QUESTION 1:
# Write a short program that prints each number from 1 to 100 on a new line. 

# For each multiple of 3, print "Fizz" instead of the number. 

# For each multiple of 5, print "Buzz" instead of the number. 

# For numbers which are multiples of both 3 and 5, print "FizzBuzz" instead of the number.

for i in range(1,50):
    if(i%3==0 and i%5==0):
        print("fizzBuzz")
        print(i)
    elif(i%3==0):
        print("fizz")
        print(i)
    elif(i%5==0):
        print("Buzz")
        print(i)

# QUESTION 2:
# Print the alphabet "G" using asterisk in python
        
print("  *****  ")
print(" *     * ")
print("*      ")
print("*  * * * ")
print("*      * ")
print(" *     * ")
print("  *****  ")