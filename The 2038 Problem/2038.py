import datetime
list1 = [365, 365,365,366]
list2 = list1*25
print(sum(list2))
ind_date = datetime.datetime(1947, 8, 15) 
# yrs = 100
offset = datetime.timedelta(days = sum(list2))
result_date = ind_date + offset
print(result_date)
