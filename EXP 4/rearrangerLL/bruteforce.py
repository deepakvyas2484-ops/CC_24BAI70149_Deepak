class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


def createLL():
    n = int(input("Enter length: "))

    if n < 1:
        return None

    head = Node(int(input("Element: ")))
    temp = head

    for _ in range(n - 1):
        temp.next = Node(int(input("Element: ")))
        temp = temp.next

    return head


def bruteForce(head):
    if head is None:
        return None

    arr = []
    temp = head

    while temp:
        arr.append(temp.data)
        temp = temp.next

    temp = head

    # Place even-index elements first
    for i in range(0, len(arr), 2):
        temp.data = arr[i]
        temp = temp.next

    # Then odd-index elements
    for i in range(1, len(arr), 2):
        temp.data = arr[i]
        temp = temp.next

    return head


def display(head):
    print("\nOutput:")
    while head:
        print(head.data, end=" -> " if head.next else "")
        head = head.next
    print()


if __name__ == "__main__":
    print("====================================")
    print("   Position Rearranger (Brute Force)")
    print("====================================\n")

    head = createLL()
    head = bruteForce(head)
    display(head)