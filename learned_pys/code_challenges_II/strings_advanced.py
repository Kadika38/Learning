def check_for_name(sentence, name):
  c = 0
  l = len(name)
  for cha in sentence:
    if cha == name[c].upper() or cha == name[c].lower():
      c += 1
    else:
      c = 0
    if c == l:
      return True
  return False

def every_other_letter(word):
  stringy = ""
  i = 1
  for cha in word:
    if i % 2 != 0:
      stringy += cha
    i += 1
  return stringy

def reverse_string(word):
  stringy = ""
  i = len(word) - 1
  while i >= 0:
    stringy += word[i]
    i -= 1
  return stringy

def make_spoonerism(word1, word2):
  return word2[0] + word1[1:] + " " + word1[0] + word2[1:]

def add_exclamation(word):
  while len(word) < 20:
    word += "!"
  return word