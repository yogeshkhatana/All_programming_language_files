def order(item):
    if(item=="Chicken Burger"):
        return 1
    if(item=="French Fries"):
        return 2
itemname=input("Enter the item name:")
result=order(itemname)
print("Resut is",result)
if(result==1):
    print("5$,Thank you for shopping")
if(result==2):
    print("10$,Thanks for shopping")