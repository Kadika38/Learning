def unique_english_letters(word):
  letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
  charset = []
  for cha in word:
    for letter in letters:
      if cha == letter:
        there = False
        for item in charset:
          if cha == item:
            there = True
        if not there:
          charset.append(cha)
  return len(charset)

def count_char_x(word, x):
  c = 0
  for cha in word:
    if x == cha:
      c += 1
  return c

def count_multi_char_x(word, x):
  l = len(x)
  c = 0
  index = 0
  for cha in word:
    if x[index] == cha:
      index += 1
    if index == l:
      index = 0
      c += 1
  return c

def substring_between_letters(word, start, end):
  s = 0
  e = 0
  sthere = False
  ethere = False
  for i in range(len(word)):
    if word[i] == start and not sthere:
      s = i
      sthere = True
    elif word[i] == end and not ethere:
      e = i
      ethere = True
    if ethere and sthere:
      break
  if ethere and sthere:
    return word[s+1:e]
  else:
    return word

def x_length_words(sentence, x):
  words = sentence.split()
  answer = True
  for word in words:
    if len(word) < x:
      answer = False
  return answer