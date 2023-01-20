#basic challenges

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

# list challenges

def append_size(lst):
  lst.append(len(lst))
  return lst

def append_sum(lst):
  lst.append(lst[-1] + lst[-2])
  lst.append(lst[-1] + lst[-2])
  lst.append(lst[-1] + lst[-2])
  return lst

def larger_list(lst1, lst2):
  if len(lst2) > len(lst1):
    return lst2[-1]
  return lst1[-1]

def more_than_n(lst, item, n):
  count = 0
  for i in lst:
    if i == item:
      count += 1
  if count > n:
    return True
  return False

def combine_sort(lst1, lst2):
  for item in lst2:
    lst1.append(item)
  lst1.sort()
  return lst1