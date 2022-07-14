import datetime

start_date = datetime.date(2001, 1, 1)
end_date = datetime.date(2100, 12, 31)
delta = datetime.timedelta(days=1)
cnt=0;
while start_date <= end_date:
    if(start_date.weekday()==2):
    	cnt+=1
    start_date += delta

print(cnt)