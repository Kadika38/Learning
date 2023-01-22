from datetime import datetime
import random

current_time = datetime.now()
print(current_time)


random_list = []
for i in range(101):
  random_list.append(random.randint(1, 100))

randomer_number = random.choice(random_list)

print(randomer_number)