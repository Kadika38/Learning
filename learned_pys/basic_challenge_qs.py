def large_power(base, exponent):
  if base ** exponent > 5000:
    return True
  return False

def over_budget(budget, food_bill, electricity_bill, internet_bill, rent):
  total = food_bill + electricity_bill + internet_bill + rent
  if total > budget:
    return True
  return False

def twice_as_large(num1, num2):
  if num1 > num2 * 2:
    return True
  return False

def divisible_by_ten(num):
  if num % 10 == 0:
    return True
  return False

def not_sum_to_ten(num1, num2):
  if num1 + num2 == 10:
    return False
  return True

def in_range(num, lower, upper):
  if (num >= lower) and (num <= upper):
    return True
  return False

def same_name(your_name, my_name):
  if your_name == my_name:
    return True
  return False

def always_false(num):
  if num > 2 and num < 2:
    return True
  return False

def movie_review(rating):
  if rating <= 5:
    return "Avoid at all costs!"
  elif rating > 5 and rating < 9:
    return "This one was fun."
  elif rating >= 9:
    return "Outstanding!"

def max_num(num1, num2, num3):
  biggest = num1
  if num2 >= biggest:
    biggest = num2
  if num3 >= biggest:
    biggest = num3
  if (biggest == num1 and biggest == num2) or (biggest == num1 and biggest == num3) or (biggest == num2 and biggest == num3):
    return "It's a tie!"
  return biggest