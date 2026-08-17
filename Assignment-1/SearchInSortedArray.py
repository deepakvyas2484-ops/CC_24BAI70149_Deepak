# Input sorted array
arr = list(map(int, input("Enter sorted array: ").split()))
target = int(input("Enter target: "))

low = 0
high = len(arr) - 1

found = False

while low <= high:
    mid = (low + high) // 2

    if arr[mid] == target:
        found = True
        break

    elif target < arr[mid]:
        high = mid - 1

    else:
        low = mid + 1

if found:
    print("Target found")
else:
    print("Target not found")