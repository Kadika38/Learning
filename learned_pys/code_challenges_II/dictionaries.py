def sum_values(my_dictionary):
  my_sum = 0
  for val in my_dictionary.values():
    my_sum += val
  return my_sum

def sum_even_keys(my_dictionary):
  my_sum = 0
  for key in my_dictionary.keys():
    if key % 2 == 0:
      my_sum += my_dictionary[key]
  return my_sum

def add_ten(my_dictionary):
  for key in my_dictionary.keys():
    my_dictionary[key] = my_dictionary[key] + 10
  return my_dictionary

def values_that_are_keys(my_dictionary):
  lst = []
  for val in my_dictionary.values():
    if my_dictionary.get(val):
      lst.append(val)
  return lst

def max_key(my_dictionary):
  largest = 0
  actual_key = "b"
  for key in my_dictionary.keys():
    if my_dictionary[key] > largest:
      largest = my_dictionary[key]
      actual_key = key
  return actual_key