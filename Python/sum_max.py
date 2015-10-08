# sudo apt-get install python-tk
# try input() else use raw_input()

N = int(raw_input("Enter the N:"))

nums = []
for i in range(N):
    nums.append(int(raw_input()))

print("The sum of " + str(N) + " numbers is " + str(sum(nums)))
print("The max of " + str(N) + " numbers is " + str(max(nums)))
