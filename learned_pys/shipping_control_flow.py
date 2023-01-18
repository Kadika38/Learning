weight = 41.5

#Ground Shipping
gs = 20
if weight <= 2:
  gs += 1.5 * weight
elif weight <= 6:
  gs += 3 * weight
elif weight <= 10:
  gs += 4 * weight
else:
  gs += 4.75 * weight
print("Ground Shipping price: $" + str(gs))

#Premium Ground Shipping
pgs = 125
print("Premium Ground Shipping price: $" + str(pgs))

#Drone Shipping
ds = 0
if weight <= 2:
  ds = 4.5 * weight
elif weight <= 6:
  ds = 9 * weight
elif weight <= 10:
  ds = 12 * weight
else:
  ds = 14.25 * weight
print("Drone Shipping price: $" + str(ds))