single_digits = range(10)
squares = []
for dig in single_digits:
  print(dig)
  squares.append(dig ** 2)

print(squares)

cubes = [digit ** 3 for digit in single_digits]
print(cubes)