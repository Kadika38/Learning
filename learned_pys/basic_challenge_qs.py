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

def every_three_nums(start):
  if start > 100: return []
  lst = [start]
  start += 3
  while start <= 100:
    lst.append(start)
    start += 3
  return lst

def remove_middle(lst, start, end):
  temp = lst[0:start] + lst[end+1:-1]
  temp.append(lst[-1])
  return temp

def more_frequent_item(lst, item1, item2):
  c1 = 0
  c2 = 0
  for item in lst:
    if item == item1: c1 += 1
    if item == item2: c2 += 1
  if c2 > c1:
    return item2
  return item1

def double_index(lst, index):
  if index >= len(lst):
    return lst
  lst[index] = lst[index] * 2
  return lst

ef middle_element(lst):
  if len(lst) % 2 == 0:
    h = len(lst) / 2
    h = int(h)
    one = lst[h]
    two = lst[h-1]
    return (one + two) / 2
  else:
    mid = len(lst) - 1
    mid = mid / 2
    mid = int(mid)
    return lst[mid]

#loops challenges

def divisible_by_ten(nums):
  c = 0
  for i in nums:
    if i % 10 == 0:
      c += 1
  return c

def add_greetings(names):
  lst = []
  for name in names:
    lst.append("Hello, " + name)
  return lst

def delete_starting_evens(lst):
  c = 0
  for item in lst:
    if item % 2 == 0:
      c += 1
    else:
      break
  while c > 0:
    lst.pop(0)
    c -= 1
  return lst

def odd_indices(lst):
  nlst = []
  l = 1
  while l < len(lst):
    nlst.append(lst[l])
    l += 2
  return nlst

def exponents(bases, powers):
  nlst = []
  for base in bases:
    for power in powers:
      nlst.append(base ** power)
  return nlst

def larger_sum(lst1, lst2):
  l1 = 0
  l2 = 0
  for item in lst1:
    l1 += item
  for item in lst2:
    l2 += item
  if l2 > l1:
    return lst2
  return lst1

def over_nine_thousand(lst):
  if len(lst) == 0:
    return 0
  elif len(lst) > 0:
    s = 0
    for item in lst:
      s += item
      if s > 9000:
        return s
    return s

def max_num(nums):
  l = nums[0]
  for item in nums:
    if item > l:
      l = item
  return l

def same_values(lst1, lst2):
  nlst = []
  c = 0
  while c < len(lst1):
    if lst1[c] == lst2[c]:
      nlst.append(c)
    c += 1
  return nlst

def reversed_list(lst1, lst2):
  c = len(lst2) - 1
  for item in lst1:
    if item != lst2[c]:
      return False
    c -= 1
  return True

# function challenges

def tenth_power(num):
  return num ** 10

def square_root(num):
  return num ** 0.5

def win_percentage(wins, losses):
  total = wins + losses
  return (wins / total) * 100

def average(num1, num2):
  return (num1 + num2) / 2

def remainder(num1, num2):
  n1 = num1 * 2
  n2 = num2 / 2
  return n1 % n2

def first_three_multiples(num):
  print(num)
  print(num * 2)
  print(num * 3)
  return num * 3

def tip(total, percentage):
  return total * (percentage / 100)

def introduction(first_name, last_name):
  nstr = last_name + ", " + first_name + " " + last_name
  return nstr

def dog_years(name, age):
  return name + ", you are " + str(age * 7) + " years old in dog years"

def lots_of_math(a, b, c, d):
  print(a + b)
  print(c - d)
  print((a + b) * (c - d))
  return (((a + b) * (c - d)) % a)