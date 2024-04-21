
my_file= open(r"C:\task11\pythonProject1\roro.txt","w")
my_file.write("Hello roky\n")
my_file.write("coco\n")
my_file.write("ke")
my_file= open(r"C:\task11\pythonProject1\roro.txt","r")
for line in my_file:
    print(line)
    if line == "coco\n":
        break

my_file.close()