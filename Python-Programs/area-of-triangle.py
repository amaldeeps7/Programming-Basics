# Area of triangle
# s = (a+b+c)/2 where a, b and c are the sides of the triangle
# area = √(s(s-a)*(s-b)*(s-c))

a = 5
b = 6
c = 7

s = (a+b+c)/2

area = (s*(s-a)*(s-b)*(s-c))**0.5
print('Area of triangle is : %0.2f' %area)
