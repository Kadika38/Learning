def word_length_dictionary(words):
  mydict = {}
  for word in words:
    mydict[word] = len(word)
  return mydict

def frequency_dictionary(words):
  mydict = {}
  for word in words:
    if not mydict.get(word):
      mydict[word] = 1
    else:
      mydict[word] = mydict[word] + 1
  return mydict

def unique_values(my_dictionary):
  there = {}
  for val in my_dictionary.values():
    if not there.get(val):
      there[val] = 0
  c = 0
  for key in there.keys():
    c += 1
  return c

def count_first_letter(names):
  ndict = {}
  for key in names.keys():
    if not ndict.get(key[0]):
      ndict[key[0]] = len(names[key])
    else:
      ndict[key[0]] += len(names[key])
  return ndict