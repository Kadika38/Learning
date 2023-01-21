# functions created while learning about python strings

def contains(big_string, little_string):
  l = len(little_string)
  c = 0
  for cha in big_string:
    if cha == little_string[c]:
      c += 1
      if c == l:
        return True
    else:
      c = 0
  return False

def common_letters(string_one, string_two):
  lst = []
  for cha1 in string_one:
    for cha2 in string_two:
      if cha1 == cha2:
        there = False
        for item in lst:
          if item == cha1:
            there = True
        if there == False:
          lst.append(cha1)
  return lst


def username_generator(first_name, last_name):
  flen = len(first_name)
  llen = len(last_name)
  if flen < 3:
    if llen < 4:
      return first_name + last_name
    else:
      return first_name + last_name[:4]
  elif flen >= 3 and llen < 4:
    return first_name[:3] + last_name
  else:
    return first_name[:3] + last_name[:4]

def password_generator(user_name):
  return user_name[-1] + user_name[:-1]