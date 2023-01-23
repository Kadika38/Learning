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

#string methods review
highlighted_poems = "Afterimages:Audre Lorde:1997,  The Shadow:William Carlos Williams:1915, Ecstasy:Gabriela Mistral:1925,   Georgia Dusk:Jean Toomer:1923,   Parting Before Daybreak:An Qi:2014, The Untold Want:Walt Whitman:1871, Mr. Grumpledump's Song:Shel Silverstein:2004, Angel Sound Mexico City:Carmen Boullosa:2013, In Love:Kamala Suraiyya:1965, Dream Variations:Langston Hughes:1994, Dreamwood:Adrienne Rich:1987"

highlighted_poems_list = highlighted_poems.split(",")
highlighted_poems_stripped = []
for poem in highlighted_poems_list:
  highlighted_poems_stripped.append(poem.strip())
highlighted_poems_details = []
for poem in highlighted_poems_stripped:
  highlighted_poems_details.append(poem.split(":"))
titles = []
poets = []
dates = []
for stuff in highlighted_poems_details:
  titles.append(stuff[0])
  poets.append(stuff[1])
  dates.append(stuff[2])

for i in range(len(titles)):
  print("The poem {} was published by {} in {}.".format(titles[i], poets[i], dates[i]))
