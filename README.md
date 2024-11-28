In this repo, I'll try to talk about DS using C++
### Course Outlines
1. Linked list.
2. Stacks (array-based and linked based implementations).
3. Queues (array-based and linked based implementations).
4. Circular queues.
5. Trees.
6. Graphs.

- This is a "Data Structures" course, not "Data Structures and Algorithms".
- Why "Analysis of Algorithms" in a "Data Structures" course?
- Why Data Structures in C and not in pseudo-code or any other language?
---


### Why Data Structures
##### Stack Structure (LIFO) that's for Last in First out.
![1](https://github.com/A8N0RMAL/Data-Structures-With-C/assets/119806250/cb7eb037-f22b-4e47-9a7b-4791b294541d)

##### Queue Structure (FIFO) that's for First in First out.
![2](https://github.com/A8N0RMAL/Data-Structures-With-C/assets/119806250/11fa576c-bf93-4fc0-8271-55b8c09705e1)

##### Tree Structure.
- There are 3 nodes, each node can be a mathematical expression, so i need a structure to have these expressions then i can process them, It's called Treee structure.
- Data is operator or operand, each operand can be an expression.
- Tree structure is a special case from Graph structure.
- In this case it's binary tree.
![3](https://github.com/A8N0RMAL/Data-Structures-With-C/assets/119806250/33cd8a13-a1a4-4901-a369-085c3aaef0c1)

##### Graph Structure
- It shows connectivity.
- think of it like u have N users, everyone of them could be connected with the rest of users (N-1)users.
- All these combinations in a structure called Graph structure.
![4](https://github.com/A8N0RMAL/Data-Structures-With-C/assets/119806250/1a0eb7b0-a7ec-4b92-88de-b505da0739ce)

### Warming up:
#### Shifting from "Hello World"-like programs to structured programs
##### Guidelines for choosing variable names:
1. Give special care to the choice of names for functions, and constants.
2. Use common prefixes or suffixes to associate names of the same general category.
3. Avoid deliberate misspellings and meaningless suffixes to obtain different names.
4. Avoid choosing names that are close to each other in spelling or otherwise easy to confuse.
5. Be careful in the use of the letter "I" (small ell), "O" ( capital oh") and "O" (zero).

#### Documentation Guidelines:
##### 1. Place a prologue at the beginning of each function with.
   - Identification (programmer's name, date, version).
   - Statement of the purpose of the function and method used.
   - Pre- and Post conditions.
2. Comment on the use of variables.
3. Introduce each significant part of the program with a statement of purpose.
4. Indicate the end of each significant section.
5. Avoid comments that parrot what code does or that are meaningless jargon.
6. Explain any statement that employs a trick or whose meaning is unclear. Better still, avoid such statements.
7. The code itself should explain how the program works.
8. The documentation should explain why it works and what it does.
9. Be sure to modify the documentation along with the program.
---

#### Linked Lists VS Arrays
#### Linked Lists
- A linked list is a collection of nodes where each node contains data and a reference (link) to the next node in the sequence. There are various types of linked lists, including singly, doubly, and circular linked lists.

##### Characteristics:
- Dynamic Size: Linked lists can grow or shrink in size during runtime.
- Sequential Access: Nodes must be accessed sequentially, which makes lookup slower (O(n) time complexity).
- Memory Allocation: Memory is allocated dynamically and non-contiguously; each node points to the next.

##### Linked List Example in C++
- For a linked list, we need to create a Node structure, where each node contains data and a pointer to the next node. Here’s an example of a simple linked list with 3 nodes:

![image](https://github.com/user-attachments/assets/ea26aa80-2d4c-496b-b4a4-ed0fbda2247b)
##### Explanation:
- Node Structure: Defines a linked list node with an int data field and a Node* next field for the pointer to the next node.
- Creating Nodes: Each node (head, second, third) is dynamically allocated and linked to the next one.
- Traversing: The printList function traverses the linked list and prints each node’s data.

##### Advantages:
- Flexible Size: Can easily grow or shrink as nodes are added or removed.
- Efficient Insertions/Deletions: Inserting or deleting nodes is faster (O(1)) if we have a pointer to the node.

##### Disadvantages:
- Slow Access: Sequential access makes lookup slower.
- Memory Overhead: Each node requires extra memory to store a reference to the next node.

#### Arrays
- An array is a data structure that stores a fixed-size, sequential collection of elements of the same type. Each element in an array is accessed using an index.

##### Characteristics:
- Fixed Size: The size of an array is determined at the time of creation and cannot be changed.
- Direct Access: Elements can be accessed directly via indices, which makes lookup fast (O(1) time complexity).
- Memory Allocation: Arrays use contiguous memory allocation, meaning that all elements are stored next to each other in memory.

##### Array Example in C++
- In C++, an array is declared with a fixed size. Here’s an example of creating and accessing an array:
![image](https://github.com/user-attachments/assets/6075f100-7ada-4469-ba58-70e866fa5456)
##### Explanation:
- The array arr holds 5 integers.
- Elements are accessed using zero-based indexing (arr[2]).
- Array elements can be modified directly.

##### Advantages:
- Flexible Size: Can easily grow or shrink as nodes are added or removed.
- Efficient Insertions/Deletions: Inserting or deleting nodes is faster (O(1)) if we have a pointer to the node.

##### Disadvantages:
- Slow Access: Sequential access makes lookup slower.
- Memory Overhead: Each node requires extra memory to store a reference to the next node.

#### Comparison Summary
![image](https://github.com/user-attachments/assets/6cb0ca9b-7d76-4b1d-88d3-e068b77a5f14)

---
#### Linked Lists
##### Structure Definition
![image](https://github.com/user-attachments/assets/172fbfad-0347-4f01-9437-a86ae5b1109f)
- The Node structure defines a node in the linked list. Each node has two components:
- data: an integer value that stores the data in the node.
- next: a pointer to the next node in the list.

##### Global Variables
![image](https://github.com/user-attachments/assets/c8959a04-b1bc-4231-823d-d231564b671c)
- The head pointer represents the beginning of the linked list. Initially, it is set to NULL, meaning the list is empty.
---
#### Functions
##### 📌insertNode(int value)
##### Steps:
1. Create a new node and initialize its data to the provided value and its next pointer to NULL.
![image](https://github.com/user-attachments/assets/fd22dc43-96fd-47f8-987e-fdefa4f0f631)
2. Check if the list is empty (i.e., if head is NULL):
- If empty, make head point to the new node, making it the first element in the list.
![image](https://github.com/user-attachments/assets/0000bde8-8954-4c3a-8d2e-85e746b1f90f)
3. If the list is not empty, find the last node (the node whose next pointer is NULL). Traverse the list starting from head and update last_node until the end of the list is reached.
![image](https://github.com/user-attachments/assets/97d0e16f-e80b-4ea9-9bd3-38ceaa7231f1)
4. Link the last node’s next pointer to the new node.
---
#### 📌displayNode()
- This function displays all the nodes in the list.
##### Steps:
1. Check if the list is empty (i.e., head is NULL):
- If empty, simply return without displaying anything.
2. If the list is not empty, traverse the list starting from head and print the data of each node, followed by a space.
![image](https://github.com/user-attachments/assets/564e46fd-ea50-41b6-8822-66c48bf92753)

##### main Function
- The main function is the entry point of the program. Here’s what it does:
1. It calls insertNode four times to add nodes with values 5, 10, 15, and 7 to the list.
2. It calls displayNode to output all the nodes in the list.
![image](https://github.com/user-attachments/assets/356a3c59-c814-47b6-9ea1-7f70bd68ae3d)
![image](https://github.com/user-attachments/assets/2f2ccfef-bfee-478a-a3d0-b58b7ea92b29)
---
#### Key Points
- Memory Allocation: We use new to allocate memory for each new node. This is crucial for linked lists because each node is dynamically created and linked.
- Pointer Manipulation: The next pointer is essential for linking nodes and traversing the list.
- Null Checks: Checking if the head is NULL helps handle the case of an empty list, both during insertion and display.
---

#### 📌deleteNode(int value)
- The deleteNode function deletes the first node that contains the specified value.

##### Steps:

1. Initialize Pointers:
- current_node is set to head, which will traverse the list to locate the node to delete.
- prev_node is also initialized to head and will keep track of the previous node as we traverse, making it easier to unlink the node we want to delete.
![image](https://github.com/user-attachments/assets/d5fde05c-fd94-4843-b892-5d8a28970e37)

2. Check if the First Node Contains the Value:
- If current_node (the first node) contains the value, it means we need to delete the head node.
- Update head to point to the next node (head = current_node->next).
- Free the memory of current_node and return from the function since deletion is complete.
![image](https://github.com/user-attachments/assets/65ecfdca-877f-4418-9e13-0a82a757453e)

3. Traverse the List to Find the Node:
- If the node to delete is not the first node, start looping through the list.
- Update prev_node to current_node and move current_node to the next node in each iteration until we find the node with the specified value.
![image](https://github.com/user-attachments/assets/487d48ae-31da-4ec9-82d2-16deed83cb6c)

4. Unlink and Delete the Node:
- Once we find the node (current_node->data == value), adjust prev_node->next to skip over current_node, linking prev_node to current_node->next.
![image](https://github.com/user-attachments/assets/bb2b24e3-2982-4b38-b734-5f07b582a11a)
---
> ⚠️**NOTE:** This function assumes the value exists in the list. If the value might not be present, you would need to handle cases where current_node becomes NULL.
---
##### Example Execution
- Initial List Creation:
![image](https://github.com/user-attachments/assets/7d18b15f-4e39-40ad-9914-91e2fe3de11b)
- Output:
![image](https://github.com/user-attachments/assets/c94efd10-3a22-4fb9-a0c7-a52d93822749)
- Delete Node:
![image](https://github.com/user-attachments/assets/a648c12b-02ce-4fca-b466-753c80fcce76)
- Output After Deletion:
![image](https://github.com/user-attachments/assets/f5722f4e-0706-4cbf-90b9-6da9110b0f38)

---
#### Key Points
##### Traversal and Deletion:
- We traverse the list to find the target node and maintain a pointer to the previous node for easy linking and unlinking.

##### Memory Management:
- After unlinking the target node, we use free() to release the memory allocated for it.

##### Edge Case Handling:
- The function handles deletion of the head node separately since it involves updating the head pointer.
- If the node is not found in the list (additional logic needed), current_node would become NULL, which needs handling to avoid runtime errors.
---

##### 📌insertAtBeggining 
- The insertAtBeggining function is used to insert a new node at the very start of a linked list. This function adds a node with a given value and updates the head pointer so that the new node becomes the first node in the list.
![image](https://github.com/user-attachments/assets/bcd665a1-1710-4429-9bcc-cba74083a0dd)

##### Step-by-Step Explanation
1. Create a New Node:
- We create a new node using new Node;. This allocates memory dynamically for the new node and returns a pointer to it, which we store in new_node.

2. Set Node Data:
- The data field of new_node is set to the value passed to the function. This stores the value in the new node that we want to add at the beginning.

3. Link the New Node to the List:
- The next pointer of new_node is set to point to the current head node. This links the new node to the existing list, meaning the new node will now point to the former head of the list.

4. Update Head Pointer:
- Finally, we set head to new_node. This makes the new node the first node in the list by updating the head pointer to point to new_node. Now, any traversal starting from head will go through new_node first.

##### Example Usage in main:
![image](https://github.com/user-attachments/assets/d333534a-ccc7-418e-909c-9f8376e89fee)
![image](https://github.com/user-attachments/assets/58061a7e-1258-4897-bf24-23b0ca00c4a5)

---

##### 📌deleteAtBeggining 
- The deleteAtBeggining function is designed to remove the first node from the linked list. This operation updates the head pointer to point to the second node, effectively removing the original first node from the list.
![image](https://github.com/user-attachments/assets/a7333d4e-8fc8-4862-9ad5-501f926b3b22)

#### Step-by-Step Explanation
1. Check if the List is Empty:
- If head is NULL, it means the linked list is empty. In this case, there's no node to delete, so we exit the function immediately with return;.

2. Store the Current Head Node:
- We store a pointer to the current head node in first_node. This allows us to keep track of the node that we want to delete, even after updating the head pointer.

3. Update Head Pointer:
- We set head to first_node->next. This makes the second node (if it exists) the new head of the list. Effectively, the node we intend to delete is no longer linked to the list.

4. Delete the Old Head Node:
- Finally, we delete the node pointed to by first_node using delete(first_node);. This frees the memory allocated for the old head node, removing it entirely from memory.
![image](https://github.com/user-attachments/assets/e9e2c4b3-c2f4-473c-b980-8f17f1eb9617)
![image](https://github.com/user-attachments/assets/c1326c63-d958-4875-8730-e6dd4a2e319d)

##### Example Usage in main:
![image](https://github.com/user-attachments/assets/04d51a66-6a31-4e84-a61f-2c33c1b8734a)
![image](https://github.com/user-attachments/assets/307a32e0-6f33-40fb-98e7-03fd6f115c18)

---

##### 📌deleteAtEnd 
- The deleteAtEnd function removes the last node from the linked list. This function handles three cases:
1. If the list is empty.
2. If the list has only one node.
3. If the list has more than one node.
![image](https://github.com/user-attachments/assets/717978aa-375f-4130-adc0-34514bfc8f0f)
---
##### 📌Code Breakdown
![image](https://github.com/user-attachments/assets/a6ec8a2d-086d-4c93-b250-f6cd23d9ef63)

---
#### Step-by-Step Explanation
1. Check if the List is Empty:
- If head is NULL, it means the linked list is empty. In this case, there's no node to delete, so we exit the function immediately with return;.

2. Check if the List Has Only One Node:
- If head->next is NULL, it indicates there is only one node in the list (pointed to by head).
- We delete the only node using delete(head); and set head to NULL, which makes the list empty.

3. Delete the Last Node if the List Has Multiple Nodes:
- We initialize a pointer ptr to traverse the list.
- We stop at the second last node (the node whose next points to the last node).
- We delete the last node by calling delete(ptr->next); and then set ptr->next to NULL to mark it as the new last node.
---
##### Example Usage in main:
![image](https://github.com/user-attachments/assets/4b148ed4-2a07-4ccf-8363-2774610de04d)
##### In this example, after calling deleteAtEnd, the list becomes:
![image](https://github.com/user-attachments/assets/8e0d0f15-842a-465f-afbf-1522d37e15b2)

---
> ⚠️**NOTE:** This function handles three cases: an empty list, a single-node list, and a multi-node list.
> ⚠️**NOTE:** delete(ptr->next); is used to delete the last node, and ptr->next = NULL; marks the new end of the list.
---


Here's a detailed explanation of each function in this C++ stack implementation, which you can use as documentation for your GitHub repository.

---

#### Stack Implementation Using Array
- This code demonstrates a simple stack implementation in C++ using an array. The stack has a fixed size of `5` defined by `stackSize`. The stack operations (`push`, `pop`, `peek`, and `display`) are implemented as functions, and the stack is controlled using a `top` variable, which tracks the index of the current top element in the stack.
![image](https://github.com/user-attachments/assets/996391d6-b562-40d4-b767-de06b15df443)
- The `Stack` array holds the stack elements, and `top` keeps track of the last added element’s position. If `top` is `-1`, the stack is empty.

---

#### 📌`void push(int value)`
- The `push` function adds an element to the top of the stack.

**Function Details:**
- **Parameters**: Takes an integer `value` that is the element to be added to the stack.
- **Logic**:
  - Checks if the stack is full by comparing `top` with `stackSize - 1`. If full, it does nothing (`Stack overflow`).
  - If the stack has space, it increments `top` and stores the `value` at the new top position.
- **Edge Case**: Stack overflow when trying to push to a full stack.

**Code**:

![image](https://github.com/user-attachments/assets/fd7378a5-9b3c-4587-8b3e-8437917d1bd0)

---

#### 📌`int pop()`
- The `pop` function removes and returns the top element from the stack.

**Function Details:**
- **Return Type**: Returns an integer value, which is the top element of the stack.
- **Logic**:
  - Checks if the stack is empty by seeing if `top` is `-1`. If empty, it returns `0` to indicate underflow.
  - If not empty, it returns `Stack[top]` and then decrements `top` to remove the element.
- **Edge Case**: Stack underflow when trying to pop from an empty stack.

**Code**:

![image](https://github.com/user-attachments/assets/d8235e24-b833-4f74-9d62-074ecad5bd25)

---

#### 📌`int peek()`
- The `peek` function returns the top element of the stack without removing it.

**Function Details:**
- **Return Type**: Returns an integer, the top element of the stack.
- **Logic**:
  - Checks if the stack is empty by checking if `top` is `-1`. If empty, it returns `0` to indicate an empty stack.
  - If not empty, it returns `Stack[top]`, the current top element.
- **Edge Case**: Stack underflow when attempting to peek an empty stack.

**Code**:

![image](https://github.com/user-attachments/assets/c2f1890f-ecae-482f-9093-38717ffb53bc)

---

#### 📌`void display()`
- The `display` function prints all elements in the stack from top to bottom.

**Function Details:**
- **Logic**:
  - Checks if the stack is empty by seeing if `top` is `-1`. If empty, it simply returns.
  - If not empty, it uses a `for` loop to print each element from `top` down to `0`, showing the stack elements in order from top to bottom.
- **Edge Case**: If the stack is empty, it does not display anything.

**Code**:

![image](https://github.com/user-attachments/assets/3ff05203-cea6-4380-950a-302b86687dc7)

---

#### 📌Example Usage in `main`
- In the `main` function:
1. Elements `5`, `15`, `25`, and `35` are pushed onto the stack.
2. The `display` function is called to print the stack, showing the elements from top to bottom.
3. The `peek` function is used to check the top element.
4. The `pop` function removes the top element (`35`), and `peek` and `display` are called again to show the new top and the modified stack contents.
![image](https://github.com/user-attachments/assets/6d840c4d-2ace-441c-8ad1-97df6b410214)
![image](https://github.com/user-attachments/assets/f3065cc1-9807-44ff-9c65-e117b037dc68)

---

#### Summary of Functions
1. **push(int value)**: Adds `value` to the stack if there’s space.
2. **int pop()**: Removes and returns the top element if the stack is not empty.
3. **int peek()**: Returns the top element without removing it.
4. **void display()**: Displays all stack elements from top to bottom.

---

#### Stack implementation using Linked list 
#### Explanation of Functions in the Linked List-Based Stack Implementation

- The stack is implemented using a linked list, with each `Node` holding:
- `data`: an integer value stored in the node.
- `next`: a pointer to the next node in the stack.

The top of the stack is tracked by the pointer `top`, which points to the last inserted node.

#### 📌Struct Definition
![image](https://github.com/user-attachments/assets/5ceaebe7-fcc5-4fdf-96c3-04d6c647470a)

Each `Node` contains:
- `data`: An integer representing the value stored in the node.
- `next`: A pointer to the next node in the stack.

#### 📌Global Variable
![image](https://github.com/user-attachments/assets/d0b892d2-8152-4bab-9b0d-e16b7a8993a3)

- The `top` pointer keeps track of the top node of the stack. It is initially set to `NULL`, indicating an empty stack.

---

### 📌1. `push(int value)`
![image](https://github.com/user-attachments/assets/0419c4ce-a8a7-46c2-bbda-e25514d4d37b)


**Purpose**: Adds a new element with value `value` to the top of the stack.
- A new `Node` is created and initialized with the given `value`.
- The new node's `next` pointer is set to point to the current `top` node.
- `top` is then updated to point to this new node, making it the new top of the stack.

**Example**:
- If the stack is `10 -> 20 -> NULL`, calling `push(5)` will result in `5 -> 10 -> 20 -> NULL`.

---

### 📌2. `pop()`
![image](https://github.com/user-attachments/assets/088375e7-5191-489c-a53e-1e87c34473a4)


**Purpose**: Removes the top element from the stack.
- If `top` is `NULL`, the stack is empty, so we exit the function to avoid underflow.
- Otherwise, we store the current `top` node in a temporary pointer `first_node`.
- `top` is updated to point to the next node (`first_node->next`), effectively removing the top node from the stack.
- Finally, the old top node is deleted to free memory.

**Example**:
- If the stack is `5 -> 10 -> 20 -> NULL`, calling `pop()` will result in `10 -> 20 -> NULL`.

---

### 📌3. `peek()`
![image](https://github.com/user-attachments/assets/86f18f42-2b4c-42ac-a1a9-4f439392df8d)


**Purpose**: Retrieves the value of the top element without removing it.
- If `top` is `NULL`, the stack is empty, so it returns `-1` to indicate stack underflow.
- Otherwise, it returns the `data` stored in the top node.

**Example**:
- If the stack is `5 -> 10 -> 20 -> NULL`, calling `peek()` will return `5`.

---

### 📌4. `display()`
![image](https://github.com/user-attachments/assets/b978af16-b382-4002-aabe-8da1fccd90b9)


**Purpose**: Prints all elements in the stack from top to bottom.
- If `top` is `NULL`, the stack is empty, so it returns.
- Otherwise, it traverses the stack from `top` to the end, printing each node's `data` value.
- After traversing, a newline is printed.

**Example**:
- If the stack is `5 -> 10 -> 20 -> NULL`, calling `display()` will output: `5 10 20`.

---

#### 📌Code Example with Output
- Here’s how the `main` function interacts with the stack:
![image](https://github.com/user-attachments/assets/88e54ac2-cf30-4247-9767-c3dcdde59e0a)

#### Expected Output
![image](https://github.com/user-attachments/assets/0f0f5049-a4a5-405e-96ab-d58364bc9004)

### Explanation of the Output

1. `display();` after pushing `5`, `15`, `25`, and `35`:
   - The stack is now `35 -> 25 -> 15 -> 5`, so `display()` prints `35 25 15 5`.
   
2. `cout << peek() << endl;`:
   - `peek()` returns the top element, which is `35`, so it prints `35`.

3. `pop();` followed by `cout << peek() << endl;`:
   - `pop()` removes the top element (`35`), making `25` the new top.
   - `peek()` now returns `25`, so it prints `25`.

4. `display();` after the `pop()`:
   - The stack is now `25 -> 15 -> 5`, so `display()` prints `25 15 5`. 

- This output shows the stack's behavior with each operation: inserting, viewing, and removing elements while maintaining the Last-In-First-Out (LIFO) order.

---

#### Summary

- **`push(int value)`**: Adds `value` to the top of the stack.
- **`pop()`**: Removes the top element from the stack.
- **`peek()`**: Returns the value of the top element without removing it.
- **`display()`**: Prints all elements from the top to the bottom of the stack.

- This linked list-based stack implementation is dynamic, meaning it can grow and shrink as needed, unlike an array-based stack which has a fixed size.
---

#### Queue data structure
- A **queue** is a linear data structure that operates on a **First In, First Out (FIFO)** principle. This means that elements are added from one end (the rear) and removed from the other (the front), so the first element added is the first one removed, similar to people waiting in line.
![image](https://github.com/user-attachments/assets/4654867d-4bdc-4b51-8c04-274098e9c1b4)
![image](https://github.com/user-attachments/assets/39394dbf-af83-4a35-9e26-4b78d5e24e70)

---
#### Queue types in data structure
#### 1. Simple Queue (or Linear Queue)
- A **simple queue** follows the basic FIFO principle where elements are added to the end and removed from the front.

**Example**:
- Imagine a line at a coffee shop where each person is served in the order they arrive. The person who came first is the first to be served, and as each person leaves, new arrivals are added to the end of the line.

**Illustration**:
- Operations: Enqueue (add to rear) and Dequeue (remove from front)
- Queue: [1, 2, 3, 4] —> after dequeuing, it becomes [2, 3, 4]
![image](https://github.com/user-attachments/assets/dbdc32ad-f735-44f5-871e-90dc46f26ec5)
- We cannot add more items because they are added from rear and it reaches the maximum size.
![image](https://github.com/user-attachments/assets/462cd7bf-33b4-4420-aec4-5434ffdf86f6)
- Then the other type of queue '(Circular queue)' solves this problem.

---

#### 2. Circular Queue
- In a **circular queue**, the end of the queue wraps around to connect back to the beginning, forming a circular structure. This helps efficiently utilize space, especially in situations where fixed memory is a limitation.

**Example**:
- Consider a circular conveyor belt that rotates; items are added in a loop. When the queue is full, it circles back to the start if there is space from the items that have been removed.

**Illustration**:
- Queue with size 5, initially empty: [_, _, _, _, _]
- Operations: Enqueue (add to rear) and Dequeue (remove from front)
- Adding elements until it’s full: [1, 2, 3, 4, 5]
- After dequeuing twice, the next enqueue wraps around: [6, 2, 3, 4, 5]
![image](https://github.com/user-attachments/assets/0df48295-e745-41a1-95ae-02f05fe6c04a)
![image](https://github.com/user-attachments/assets/ec25db61-f5b3-4d0d-896b-589ceaeb2973)

- Now if u need to add more items, u can do that...
![image](https://github.com/user-attachments/assets/a8bd6e8a-7309-4571-91a8-ab6e31264da9)
![image](https://github.com/user-attachments/assets/674d5eee-7d1e-419a-b289-c2f86e699ea7)

---

#### 3. Priority Queue
- In a **priority queue**, each element has a priority, and elements are dequeued based on their priority rather than their order in the queue. Typically, the element with the highest priority is served first, but variations may use a lower-priority rule.

**Example**:
- Think of an emergency room where patients with severe injuries are treated first, even if they arrive later than other patients with minor injuries.

**Illustration**:
- Operations: Insert (with priority) and Remove (highest priority)
- Adding patients with different priorities: [Patient A (priority 2), Patient B (priority 5), Patient C (priority 1)]
- Dequeue order: Patient B → Patient A → Patient C
![image](https://github.com/user-attachments/assets/5194031f-d1fe-4f60-9a21-dd78981326ef)
![image](https://github.com/user-attachments/assets/27cbbc52-ca05-4ef0-a015-30e2ba790fee)
- Elements with the highest priority will get out first.
![image](https://github.com/user-attachments/assets/a5963ae7-efde-444f-ba2d-31badb1a33fc)

---
#### 4. Double-Ended Queue (Deque)
- A **double-ended queue**, or **deque**, allows insertion and deletion from both ends. It’s flexible in that it can act as both a stack and a queue.

**Example**:
- Consider a playlist where you can add or remove songs from either end of the list, allowing flexibility to play the last or the most recently added song.

**Illustration**:
- Operations: Enqueue at front/rear, Dequeue at front/rear
- Initially empty deque: []
- EnqueueFront(1) → [1], EnqueueRear(2) → [1, 2], EnqueueFront(3) → [3, 1, 2]
- After DequeueFront and DequeueRear, it becomes: [1] 
![image](https://github.com/user-attachments/assets/14a6f867-d5cf-4674-bd88-4b1634a01ad8)
![image](https://github.com/user-attachments/assets/aeb202ad-7f93-42c7-b84c-0c7a530c47f8)

---

#### 1. Simple Queue (or Linear Queue) array implementation:
![image](https://github.com/user-attachments/assets/7983f7da-f7d0-41fd-95e3-978b231f9680)

- Let's dig in deep in the code and its details:

### Code Summary
This code implements a simple queue with a fixed size using an array, providing basic operations like `enqueue`, `dequeue`, `peek`, and `display`. The queue can hold up to `queueSize` elements and follows First-In-First-Out (FIFO) order.

### Code Explanation

![image](https://github.com/user-attachments/assets/527a4215-7430-49b1-8aed-4ea0722150de)
- Defines the maximum size of the queue as 5, meaning it can hold up to 5 elements.
---

![image](https://github.com/user-attachments/assets/a942ff0d-b2b6-4c4b-8380-ee80cd95e0c9)

- `Queue` is an integer array of size `queueSize` which holds the elements of the queue.
- `Front` points to the front of the queue (index of the first element).
- `Rear` points to the rear of the queue (index of the last element).
- Both `Front` and `Rear` are initialized to -1, indicating that the queue is initially empty.
---

### Functions

### 📌`void enqueue(int value)`
- Adds an element to the rear of the queue.
![image](https://github.com/user-attachments/assets/11dd3ec1-7b2b-4f9c-ae2a-9d0f3765fd30)

Explanation:
- **Condition**: `if(Rear != queueSize - 1)` checks if there’s space left in the queue.
- **Empty Queue Check**: `if(Front == -1 && Rear == -1)` handles the empty queue case. When adding the first element, both `Front` and `Rear` are incremented from -1 to 0.
- **Adding the Element**: `Queue[++Rear] = value;` increments `Rear` and then assigns `value` to the next position.
---
> ⚠️**Note**: If `Rear` equals `queueSize - 1`, the queue is full, and the function returns without adding an element.
---

### 📌`void dequeue()`
- Removes an element from the front of the queue.
![image](https://github.com/user-attachments/assets/13d74977-1f65-4689-9dd0-3d481fc7af16)

Explanation:
- **Condition**: `if(Front <= Rear && Front != -1 && Rear != -1)` checks if there are elements in the queue. `Front <= Rear` confirms elements exist between `Front` and `Rear`.
- **Removing an Element**: `++Front;` shifts `Front` one position to the right, effectively removing the front element from the queue.
---
> ⚠️**Note**: If `Front` surpasses `Rear`, the queue is considered empty again.
---

### 📌`int peek()`
- Returns the front element without removing it.
![image](https://github.com/user-attachments/assets/c1f7999e-59dc-4322-84ac-850934a1b137)

Explanation:
- **Condition**: Similar to `dequeue`, it checks if there are elements in the queue.
- **Returning the Front Element**: `return Queue[Front];` returns the value at the front without altering the queue.
- If the queue is empty, `return 0;` indicates no value is available (though typically an error code or exception might be preferred).
---

### 📌`void display()`
- Prints all elements in the queue from front to rear.
![image](https://github.com/user-attachments/assets/ce3d3f62-0ef8-4e8e-bad8-10559274b708)

Explanation:
- **Condition**: Same check to confirm elements exist in the queue.
- **Printing Elements**: `for(int i = Front; i <= Rear; ++i)` iterates from `Front` to `Rear`, printing each element with a space separator.
---

- Based on the provided code, here’s the complete `main` function along with comments and an explanation of the expected output:
![image](https://github.com/user-attachments/assets/c8ae68a0-cefd-4250-83bf-a0b3c916713b)

### Explanation of Expected Output

1. **After first three `enqueue` calls**:
   - Output: `5 10 15`
   
2. **After first `dequeue` call**:
   - Output: `10 15`

3. **Peek Output**:
   - Output: `peek = 10`

4. **After adding three more elements (filling the queue)**:
   - Output: `10 15 20 25 30`

5. **Attempting to add another element (queue is full)**:
   - Output: `10 15 20 25 30` (unchanged)

6. **Dequeuing all elements until the queue is empty**:
   - Final Output: `(no output)`

---
#### Example Walkthrough

1. **Enqueueing Elements**:
   - When `enqueue(5)` is called, the queue is empty, so both `Front` and `Rear` become 0, and 5 is added to `Queue[0]`.
   - Then `enqueue(10)` and `enqueue(15)` add 10 and 15 to `Queue[1]` and `Queue[2]`, respectively.

2. **Displaying Queue**:
   - After the first three `enqueue` calls, `display()` outputs `5 10 15`.

3. **Dequeuing an Element**:
   - The first `dequeue()` call removes the front element (5), so `Front` becomes 1.
   - A subsequent `display()` call then shows `10 15`.

4. **Peeking**:
   - `peek()` returns the value at the front (10) without modifying the queue.

- This queue implementation is simple and effective for basic operations but lacks features like wrap-around or resizing, which are found in more advanced queue types (like circular queues).

---
#### Queue Implementation using Linked List
![image](https://github.com/user-attachments/assets/108ce0a9-4228-4864-881d-e206ad142aa5)

---
##### Problem:
- When implementing a queue with a linked list, adding a new element (enqueue) without using front and rear pointers requires traversing the entire list to find the end. This makes enqueue operations inefficient, taking O(n) time.
##### Solution:
- To improve efficiency, we use two pointers:
- Front: Points to the first element (head) of the queue for fast dequeue.
- Rear: Points to the last element (tail) of the queue for fast enqueue.
- This allows both enqueue and dequeue operations to be done in O(1) time, making the queue more efficient.
![image](https://github.com/user-attachments/assets/e614c68b-9be6-4523-80a8-46b2d145f369)
---

- Let's dig in deep and code it:
- At first, we intialize the linked list node.
![image](https://github.com/user-attachments/assets/34074733-091d-47d0-a5a2-2846a2d6b52d)
---
##### 📌enqueue(int value)
![image](https://github.com/user-attachments/assets/aedf3fb8-3e3b-4785-9adc-bda94ae9b432)

---
##### 📌dequeue()
![image](https://github.com/user-attachments/assets/6a7be281-7b9a-42fb-af8f-11984ccac141)

---
##### 📌peek()
![image](https://github.com/user-attachments/assets/ae088289-e7e7-480a-b7ae-120ad4803cf0)

---
##### display()
![image](https://github.com/user-attachments/assets/02c9d4bb-7e63-4f0e-9d75-0ed3e9e015b8)

---
- Let's show some examples:
![image](https://github.com/user-attachments/assets/d4361139-5ca1-4fe6-a007-1729549d0007)
![image](https://github.com/user-attachments/assets/57373030-082a-4563-a86e-1bc7bbec0969)

---

#### Simple queue VS Circular queue
![image](https://github.com/user-attachments/assets/6d7bf471-feb4-42aa-aa75-201845c8db78)

##### Simple Queue (Linear Queue):
- Structure: A simple queue is a linear data structure where elements are added at the rear and removed from the front.
- Memory Management: Once the queue is full, no more elements can be added, even if there are spaces created at the front by dequeuing. This is because the free space at the front cannot be reused.
- Overflow Condition: When the rear of the queue reaches the end of the available memory (queue is full), it leads to an overflow condition, even if there are empty spaces due to dequeuing.
- Efficiency: Less efficient in memory usage, as it does not reuse space freed by dequeuing elements.
- Use Case: Typically used in simple scenarios where dynamic reuse of memory is not necessary.

##### Circular Queue:
- Structure: A circular queue behaves like a simple queue but treats the memory as a circle. When the rear of the queue reaches the end of the array, it wraps around to the beginning of the array (if there is free space).
- Memory Management: It efficiently utilizes memory by reusing the space freed by dequeued elements. When the queue is not full, new elements can be added to the beginning of the array after the last element has been dequeued.
- Overflow Condition: Overflow occurs only when the circular queue is truly full, i.e., when all spaces in the array are occupied.
- Efficiency: More efficient memory usage compared to a simple queue because it reuses the space.
- Use Case: Suitable for scenarios where constant memory reuse is required, such as in buffering systems (e.g., CPU scheduling, IO device buffering).

##### A circular queue is generally preferred in cases where continuous reuse of memory is important, while a simple queue is suitable for basic operations without the need for memory optimization.

---
- Let's take an example: The queue below has initialized with size of 5 elements.
![image](https://github.com/user-attachments/assets/aed0cab1-10e7-4799-8279-d263c641a0af)
- Now, when these simple and sircular queues are full, we can not add any other elements in case of simple queue (when rear reaches the max size or the lsat index), In contrast, we cann add elements in circular queue only if other elements are removed then it can be replaced. 
![image](https://github.com/user-attachments/assets/fd98aaf6-62bb-4286-872d-7f8972cb9e54)
![image](https://github.com/user-attachments/assets/b7b87d9f-b8e0-44b1-a96d-a7cee41de031)
---

- Simple Queue (Company Example): Imagine a construction company, where 1,000 people are waiting to buy homes from the company. The company can only process one person at a time, and the processing occurs in the same order they arrive, i.e., first-come, first-served. Once the first person buys a house, they exit the queue, and the next person in line moves forward. This is a typical representation of a simple queue where once a person leaves the line, they are not re-entering it. In a simple queue, each person only goes through the process once, and the queue has a clear beginning and end.

![Screenshot 2024-10-19 201659](https://github.com/user-attachments/assets/864fa070-1bf2-4813-932b-b9d32a1d695b)

---

- Circular Queue (Bank Example): In the bank example, a circular queue can be used to manage customers. Customers continuously come and go, with no clear "start" or "end." Every customer gets a fixed time slot (say, 30 minutes) for their transaction. If a customer’s transaction takes longer than the allotted 30 minutes, they may need to wait again, but they are not removed from the queue entirely — instead, they go back to the end and are served again when their turn comes around. This system loops around indefinitely, making it a circular queue, where the process is ongoing, and the queue cycles back to the beginning when it reaches the end.
![image](https://github.com/user-attachments/assets/17615aea-23c1-4d46-8fec-1fcc0d75e1a4)
---

##### In summary:
- Simple Queue: Like people in line at a construction company where once served, they leave the system and are not re-entered.
- Circular Queue: Like a bank, where people are served in cycles with a fixed time, and the process repeats as necessary.

---
### Circular queue: Array-based implementation
#### The circular queue improves over the simple queue by:
- Efficiently utilizing memory.
- Avoiding false overflow conditions.
- Preventing the need for shifting or resizing.
- Offering consistent performance for enqueue and dequeue operations.
![image](https://github.com/user-attachments/assets/177ca692-c202-4092-995e-c407db18901f)
---

- At first wee need to create the circular queue:
![image](https://github.com/user-attachments/assets/b1fc2df8-986e-41d1-8a4f-461f581c11fd)
- It is initialized with fixed size = 5 and front&rear = -1, now the queue is empty.

---
- Let's dig in deep and talk about circular queue functions:
#### 📌isEmpty()
- circular queue will be empty in only one case if Front = Rear = -1
![image](https://github.com/user-attachments/assets/13327e54-1c36-4835-8166-7d67f2db7d66)
- Unlike simple queue, it will not be empty when Front > Rear, take a look at both pics below:
- Pic_1: Queue is empty.
- Pic_2: Queue is full XD.
![image](https://github.com/user-attachments/assets/879c3edb-a301-4737-a317-12319b124c72)
![image](https://github.com/user-attachments/assets/ec32d9df-b7ee-4725-9b75-bd1b16ca75dc)
##### Code
![image](https://github.com/user-attachments/assets/0b188943-0d92-4d13-a7da-5193881fb6e2)

--- 
#### 📌isFull()
- circular queue will be full in 2 cases:
1. if Front = 0, Rear = size-1, Front points to the first element and Rear points to the last element.
![image](https://github.com/user-attachments/assets/c29d38ed-7c27-4bb3-b70d-3f49199b1f79)

2. if Front > Rear, especially Front = Rear + 1
![image](https://github.com/user-attachments/assets/5bcb0b83-ca12-4778-b604-6a706063a12a)

##### Code
![image](https://github.com/user-attachments/assets/a8b5c292-bac3-4aa4-bfb7-fef64fe3e089)

---

#### 📌enqueue(int value)
- We have to check whether the queue is full so we can add items, now we have 3 cases:
1. if queue is empty -> Front = Rear = -1
![image](https://github.com/user-attachments/assets/3a670716-5584-4b71-9b63-f1e2fae4e381)
- In this case we make Front = Rear = 0
![image](https://github.com/user-attachments/assets/e8263d12-a0a1-4e62-85bd-ecbce86be63f)
2. if we have items, then increase Rear by 1
![image](https://github.com/user-attachments/assets/189c814e-dc0a-4170-8320-b006fee0fbc4)
3. if Rear points to the last element(circularQueueSize-1), then we have to set Rear to 0
![image](https://github.com/user-attachments/assets/55998e9b-15ce-4305-b179-c3fadca03681)
- Setting Rear to 0
![image](https://github.com/user-attachments/assets/11859eb9-3d62-485f-bd6a-8fd66db9631f)
##### Code
![image](https://github.com/user-attachments/assets/d6179621-50c3-4d15-8ab1-38bed3dd1613)

---

#### 📌dequeue()
- We have to check whether the queue is empty so we can remove items. now we have 3 cases:
1. If queue is full like this.
![image](https://github.com/user-attachments/assets/f9d9b4c7-dcbc-403a-a8ac-5028af75a355)
- Increase Front by 1. it's simple
![image](https://github.com/user-attachments/assets/a09579b4-9197-4f92-a937-1af0c19ef8d2)

2. If Front has reached to the last element(Front = circulatQueueSize-1), in this case we cannot increase Front
![image](https://github.com/user-attachments/assets/9c025691-b328-4b1a-8460-d82aceca0877)
- The solution is to set Front to 0
![image](https://github.com/user-attachments/assets/63bd5835-7b8f-48c5-ae51-1d389c3b7b6c)

3. If Front = Rear, there is only one element.
![image](https://github.com/user-attachments/assets/55e76815-7c46-4d5f-8808-1037a6c022eb)
- The solution is to set Front = Rear = -1, return the queue to be empty.
![image](https://github.com/user-attachments/assets/34a3e7b0-f9fd-4136-9b26-5d22a260f86a)
##### Code
![image](https://github.com/user-attachments/assets/d0aa965f-5819-4dab-840a-c949520eb3d1)

---
#### 📌peek(int value)
- Returns Front, don't forget to check whether the queue is empty.
##### Code
![image](https://github.com/user-attachments/assets/9eba388f-6dc7-4524-8307-10627f13a2ae)

---
#### 📌display()
- We have 2 cases.
1. Front <= Rear. it's simple by using a loop from Front to Rear.
![image](https://github.com/user-attachments/assets/bedbd5d8-1b1c-41de-8dfc-3ee310693187)
2. Front > Rear. we will use 2 loops, the first to display the values from Front to the last element(circularQueueSize-1), and the other loop to display the values from the first elementat index 0 to the Rear.
![image](https://github.com/user-attachments/assets/59a22d59-7e7a-4345-b591-84bb940bffc8)

##### Code
![image](https://github.com/user-attachments/assets/71155eaa-3f2d-40c9-855a-935e234a8155)

---
- Let's show some examples of Circular queue
![image](https://github.com/user-attachments/assets/c9d0f764-a91c-417a-a247-22a6d890f407)
![image](https://github.com/user-attachments/assets/572c00fb-a736-42a0-9d4b-ccfea55bdd9f)
![image](https://github.com/user-attachments/assets/09b084cb-68b7-4a54-9fd4-c65890aec8cc)
![image](https://github.com/user-attachments/assets/c5132e03-8a2a-4c8d-a9d3-7a5d1e2ea2b3)
![image](https://github.com/user-attachments/assets/c66f8a1e-ffe5-449c-94d9-47f6297cb2e4)
---

### Tree
![image](https://github.com/user-attachments/assets/c73d2e2c-b4b1-4d73-bcca-c8c155770c9b)

- A **tree data structure** is a hierarchical structure that simulates a tree-like model, consisting of **nodes** connected by **edges**. Each tree has a **root node** at the top, and nodes branch down from the root in levels, forming parent-child relationships. Trees are widely used in areas such as computer science and networking due to their hierarchical properties, making them ideal for representing things like file systems, organizational structures, and various computational models.

### Key Concepts of Trees:
1. **Node**: Each element in a tree.
2. **Edge**: Connection between two nodes.
3. **Root**: The topmost node in a tree, which has no parent.
4. **Child**: A node directly connected below another node.
5. **Parent**: The node directly above a given node.
6. **Leaf**: A node with no children.
7. **Depth**: The length of the path from the root to a node.
8. **Height**: The length of the longest path from a node to a leaf.
![image](https://github.com/user-attachments/assets/b7c45f16-2916-4be6-9b81-f7300e9fbd65)
---
![image](https://github.com/user-attachments/assets/7c083cad-9147-4bad-9ced-05d219232891)

---
![image](https://github.com/user-attachments/assets/c5ad7950-6393-4aff-933e-bd0e88e7c75a)

---
![image](https://github.com/user-attachments/assets/2ca27368-b00a-46a6-98b5-d449c41751e0)

---
![image](https://github.com/user-attachments/assets/aeabbb19-9d56-40d4-8df1-a319430a3a07)

---
![image](https://github.com/user-attachments/assets/4c17aec6-e8db-49da-a65e-437430b8cc4e)

---
![image](https://github.com/user-attachments/assets/6961fb27-d737-4f8d-a0c1-952b09187644)

---

#### Types of Trees:
1. 📌**Binary Tree**  
   - Each node has at most two children, commonly referred to as the left and right child.
   - **Example use case**: Parsing expressions in compilers.

2. 📌**Binary Search Tree (BST)**  
   - A type of binary tree where the left child of a node contains values less than the node, and the right child contains values greater than the node.
   - **Example use case**: Efficient searching and sorting (e.g., in databases).

3. 📌**Balanced Trees**  
   - Trees that are structured to keep their height minimal for efficiency.
   - Examples include:
     - **AVL Tree**: A self-balancing binary search tree where the difference between heights of left and right subtrees of any node is at most one.
     - **Red-Black Tree**: Another self-balancing binary search tree with a set of properties that ensure balancing.
   - **Example use case**: Often used in memory management and databases for efficient storage and retrieval.

4. 📌**Heap Tree**  
   - A complete binary tree that follows the **heap property**:
     - **Max-Heap**: The value of each node is greater than or equal to the values of its children.
     - **Min-Heap**: The value of each node is less than or equal to the values of its children.
   - **Example use case**: Implementing priority queues.

5. 📌**B-Tree and B+ Tree**  
   - Self-balancing search trees commonly used in databases and file systems. They allow nodes to have multiple children, making them more efficient for systems requiring high read and write speeds.
   - **Example use case**: Databases and file systems for indexed data storage.

6. 📌**Trie (Prefix Tree)**  
   - A special type of tree used to store associative data structures, where keys are usually strings.
   - **Example use case**: Autocomplete systems and spell checkers.

7. 📌**Suffix Tree**  
   - A compressed trie-like structure that represents all suffixes of a given text.
   - **Example use case**: String matching and bioinformatics.

8. 📌**Segment Tree**  
   - A binary tree used for storing intervals or segments. It allows querying which of the stored segments contain a certain point.
   - **Example use case**: Range query problems, like finding minimum or maximum in a range.

9. 📌**K-D Tree (k-dimensional tree)**  
   - A multi-dimensional binary search tree used for organizing points in a k-dimensional space.
   - **Example use case**: Range searching and nearest neighbor search in higher-dimensional spaces (e.g., computer vision, machine learning).
---
- Here’s the code for creating a simple binary tree in C++, followed by an explanation of each part.
![image](https://github.com/user-attachments/assets/aaf0414b-cbe6-46f8-a44d-13803d0b5885)

---

### Explanation

1. **Node Structure Definition**:
   - The `Node` structure defines the building blocks of a binary tree. Each node has:
     - `data`: An integer that holds the value of the node.
     - `left` and `right`: Pointers to the node’s left and right child nodes, respectively. If a node has no child in a particular direction, the pointer is set to `nullptr`.

2. **createNode Function**:
   - `createNode` is a helper function to simplify node creation.
   - It allocates memory for a new node, sets the `data` to the given `value`, and initializes `left` and `right` pointers to `nullptr`.
   - The function then returns a pointer to this new node.

3. **main Function**:
   - The `main` function constructs a binary tree by linking nodes together.
   - **Level 1**: The root node is created with a value of `1`.
   - **Level 2**: Two child nodes are added to the root (values `2` and `3`).
   - **Level 3**: Additional child nodes (values `4`, `5`, `6`, `7`) are added to the nodes at level 2.
   - **Level 4**: Further nodes are added, such as `8` and `15`, extending the tree to an additional level.
   
4. **Tree Structure**:
   - This setup builds the following binary tree structure:
![image](https://github.com/user-attachments/assets/18bfc7b0-1344-4774-9fff-b6d91479b437)

- This code provides a clear example of constructing and linking nodes in a binary tree, with a simple function for creating and initializing each node.
---

### 1. 📌**Binary Tree**
- A **Binary Tree** is a hierarchical data structure in which each node has at most two children, commonly referred to as the left and right children. It’s widely used in various applications like expression parsing, searching, sorting, and as a basis for more advanced data structures.

### Types of Binary Trees

1. **Full (Strictly) Binary Tree**:
   - Each node has either 0 or 2 children (no node has only one child).
   - This structure ensures a strict branching pattern.
   - Example: In a full binary tree of height 2, there would be nodes arranged in a way that each non-leaf node has exactly two children.
![Full(Strictly) binary tree](https://github.com/user-attachments/assets/7d332322-14c4-4d21-8066-4e40d4ffcb51)
---

2. **Complete Binary Tree**:
   - All levels, except possibly the last, are completely filled.
   - The last level has all nodes as far left as possible.
   - This structure is essential in implementing efficient binary heaps.
![Complete binary tree](https://github.com/user-attachments/assets/96270c85-fd4e-4d79-9f0b-24e42dbf6c15)
![Complete binary tree0](https://github.com/user-attachments/assets/cae7573b-1730-4804-9651-898fb483940a)
![Complete binary tree1](https://github.com/user-attachments/assets/dd06a19a-b06c-4e05-ad33-e5bb4996d0cf)
---

3. **Perfect Binary Tree**:
   - All levels are fully filled, meaning every internal node has two children, and all leaf nodes are at the same depth.
   - A perfect binary tree with height `h` has `2^(h+1) - 1` nodes.
   - Example: A binary tree with 3 levels where each level has the maximum possible nodes is a perfect binary tree.
![Perfect binary tree](https://github.com/user-attachments/assets/96577a60-dea5-41fb-826a-8d65ca75eb68)
---

4. **Balanced Binary Tree**:
   - In a balanced binary tree, the difference between the heights of the left and right subtrees of any node is at most one.
   - Examples include AVL trees and Red-Black trees, which ensure balanced height for optimized search operations.
![Balanced binary tree](https://github.com/user-attachments/assets/c594b862-d985-4e6e-9221-225b16bacc40)
![Balanced binary tree0](https://github.com/user-attachments/assets/4fdacb4b-0379-4cb4-b187-1815cd25bdd3)
![Balanced binary tree1](https://github.com/user-attachments/assets/0777efef-d669-4c50-bf90-731d26a6e80b)
---

5. **Degenerate (Pathological) Tree**:
   - Each parent node has only one child, making it resemble a linked list.
   - This structure results in a skewed tree, either left-skewed or right-skewed, depending on where the single child is attached.
   - Example: A binary tree where every node has only a right child forms a degenerate tree, leading to linear time complexity for search operations.
![Degenerate(Pathological) binary tree](https://github.com/user-attachments/assets/11ab2526-c807-4417-82d5-d4c8f02fc8cf)
---

### Max Number of Nodes at Level and in a Binary Tree

- In a binary tree:

- **Maximum Nodes at Level (L)**: The maximum number of nodes at a given level (L) is given by: `2^L`
- **Maximum Nodes in a Binary Tree of Height (h)**: The maximum total number of nodes in a binary tree up to height (h) is: `2^(h+1) - 1`
  
#### Example:
For a binary tree with height ( h = 3 ):
- Max nodes at each level:
  - Level 0: ( 2^0 = 1 )
  - Level 1: ( 2^1 = 2 )
  - Level 2: ( 2^2 = 4 )
  - Level 3: ( 2^3 = 8 )
- Total maximum nodes in the tree: ( 2^(3+1) - 1 = 15 )
- This formula is useful for calculating the full capacity of a binary tree based on its height.
![Max no  of nodes at level L   in a binary tree](https://github.com/user-attachments/assets/f1559e60-f539-445f-bc49-4f8cfe5026ac)
---

### Finding the Height of a Binary Tree

- For a binary tree with (n) nodes:

1. **Formula to Calculate Height (h)**: `n = 2^(h+1) - 1`
   - Rearranging this equation to solve for (h): **h = log_2(n + 1) - 1**

2. **Example Calculation**:
   - For ( n = 15 ) nodes: `h = log_2(15 + 1) - 1`
   - This calculation gives the height of the tree based on the total number of nodes.

- This formula is helpful for determining the height of a complete binary tree when only the node count is known.
![Find height of a binary tree](https://github.com/user-attachments/assets/df42cfe4-e971-44ad-bad7-deeef03ee2ac)

---
### Binary Tree Traversal(Pre-In-Post-Level Order) With Implementation
![image](https://github.com/user-attachments/assets/161c0d16-76ae-4453-a42f-daf2b15e724e)

---
### **1. 📌Pre-order Traversal**
![image](https://github.com/user-attachments/assets/413d064f-6720-4563-8c17-15f3e184c51a)
- **Definition**: Visit the **root node first**, then recursively traverse the left subtree, followed by the right subtree.
- **Order**: `Root -> Left -> Right`
- **Example**:
  Given the tree:
  ```
        A
       / \
      B   E
     / \    \
    C   D    F
  ```
  Pre-order traversal: `A -> B -> C -> D -> E -> F`

#### Pre-order Traversal (C++)
![image](https://github.com/user-attachments/assets/555cc156-0717-474d-a2cd-bf5b291e3541)

---

### **2. 📌In-order Traversal**
![image](https://github.com/user-attachments/assets/51d8ac3a-2fe1-4d50-a21b-2938bcdb37a9)
- **Definition**: Traverse the left subtree first, then visit the **root node**, and finally traverse the right subtree.
- **Order**: `Left -> Root -> Right`
- **Example**:
  Given the tree:
  ```
        A
       / \
      B   E
     / \    \
    C   D    F
  ```
  In-order traversal: `C -> B -> D -> A -> E -> F`
#### In-order Traversal (C++)
![image](https://github.com/user-attachments/assets/ed28beb6-9555-446a-8b20-ace6bb2e5749)

---

### **3. 📌Post-order Traversal**
![image](https://github.com/user-attachments/assets/740822e0-a271-4d22-a888-1db715735529)
- **Definition**: Traverse the left subtree, then the right subtree, and finally visit the **root node**.
- **Order**: `Left -> Right -> Root`
- **Example**:
  Given the tree:
  ```
        A
       / \
      B   E
     / \    \
    C   D    F
  ```
  Post-order traversal: `C -> D -> B -> F -> E -> A`
#### Post-order Traversal (C++)
![image](https://github.com/user-attachments/assets/c9a365b9-f1a6-4754-8720-e6b45f65f546)

---

### **4. 📌Level-order Traversal (Breadth-first traversal)**
![image](https://github.com/user-attachments/assets/b6c3f840-9c6a-4678-9496-a11d1c965d45)
- **Definition**: Visit all nodes of the binary tree level by level, starting from the root.
- **Order**: `Level by Level`
- **Example**:
  Given the tree:
  ```
        A
       / \
      F   G
     / \   \
    X   V   Y
   /       / \
  M       H   B
  ```
  Level-order traversal: `A -> F -> G -> X -> V -> Y -> M -> H -> B`
#### Level-order Traversal (C++)
![image](https://github.com/user-attachments/assets/3fbd3e39-4cf0-431b-abfe-583622ae8ecf)

---
### Example Output for the Sample Tree:

```
        1
       / \
      2   3
     / \
    4   5
```

- **Pre-order**: `1 2 4 5 3`
- **In-order**: `4 2 5 1 3`
- **Post-order**: `4 5 2 3 1`
- **Level-order**: `1 2 3 4 5`

---

### **Comparison of Traversals**:

| **Traversal**     | **Order**               | **Example Output** |
|--------------------|-------------------------|---------------------|
| **Pre-order**      | `Root -> Left -> Right` | `A -> B -> C -> D -> E -> F` |
| **In-order**       | `Left -> Root -> Right` | `C -> B -> D -> A -> E -> F` |
| **Post-order**     | `Left -> Right -> Root` | `C -> D -> B -> F -> E -> A` |
| **Level-order**    | `Level by Level`        | `A -> F -> G -> X -> V -> Y -> M -> H -> B` |

---

### **Binary Search Tree (BST) Overview**
A **Binary Search Tree** is a tree data structure where:
1. Each node has at most two children (left and right).
2. For each node:
   - The left subtree contains values less than the node's key.
   - The right subtree contains values greater than the node's key.

#### **Key Operations in BST**
1. **Insert**: Add a new value to the BST.
2. **Search**: Find if a value exists in the BST.
3. **Delete**: Remove a value from the BST.
4. **Find Successor**: Locate the next larger value in the BST.
5. **Find Predecessor**: Locate the next smaller value in the BST.
6. **Find Max/Min**: Locate the largest or smallest value in the BST.

---

### 📌**1. Insert Operation**
- Start at the root.
- Compare the value to the current node:
  - If smaller, move to the left subtree.
  - If larger, move to the right subtree.
- Repeat until an empty position is found and insert the value.

#### **Example**
Insert `16` and `21` into this BST:
```
Before:               After:
      25                     25
     /  \                   /  \
   20    30      →       20    30
  /  \   /  \           /  \   /  \
15   22 27  35        15   22 27  35
```

Time Complexity: **O(log n)** (balanced tree) or **O(n)** (skewed tree).
![Screenshot (36)](https://github.com/user-attachments/assets/d579bc08-c3f0-465a-b1db-acb2d1dd26eb)
![Screenshot (37)](https://github.com/user-attachments/assets/3ba3b148-df63-4c98-836d-193ccbdcac9d)

### Code (Insert Operation):
![image](https://github.com/user-attachments/assets/6a560342-3495-46fe-a62d-3f892047f278)

---

### 📌**2. Search Operation**
- Start at the root.
- Compare the target value with the current node:
  - If equal, value is found.
  - If smaller, search in the left subtree.
  - If larger, search in the right subtree.

#### **Example**
Search for `40`:
```
BST: 
      25
     /  \
   20    30
  /  \   /  \
15   22 27  35

Path: 25 → 30 → 35 → 40 (not found)
```

Time Complexity: Same as Insert.
![Screenshot (39)](https://github.com/user-attachments/assets/d2edce51-6ddb-47d9-ad9c-3966e607fef4)

### Code (Search Operation):
![image](https://github.com/user-attachments/assets/3693045f-3c76-4358-97d4-10c772f34c1b)

---

### 📌**3. Delete Operation**
- Locate the value to be deleted.
- Handle three cases:
  1. **Node has no children**: Simply remove it.
  2. **Node has one child**: Replace the node with its child.
  3. **Node has two children**:
     - Find the **successor** (minimum in the right subtree).
     - Replace the node's value with the successor.
     - Delete the successor.

#### **Example**
Delete `10`:
```
Before:               After:
      25                     25
     /  \                   /  \
   20    30      →       20    30
  /  \   /  \           /  \   /  \
10   22 27  35        15   22 27  35
```
![Screenshot (41)](https://github.com/user-attachments/assets/311c9611-6dab-465d-9f50-000206fb7114)
![Screenshot (42)](https://github.com/user-attachments/assets/4361137b-09f4-4b24-99ad-b9151173cdd8)
![Screenshot (43)](https://github.com/user-attachments/assets/5491d6be-d4e7-432c-9273-9775af0bc122)
![Screenshot (44)](https://github.com/user-attachments/assets/1e24bb80-b024-4eaa-98c1-9eca3a8911d5)
![Screenshot (45)](https://github.com/user-attachments/assets/e5b9c320-df79-43f6-913e-d7299844a870)

### Code (Delete Operation):
![image](https://github.com/user-attachments/assets/96e143ca-edd1-4d00-82eb-c32e5f99adf8)

---

### 📌**4. Successor and Predecessor**
- **Successor**: Next larger value in the BST.
  - If the node has a right child, find the minimum in the right subtree.
  - Otherwise, go up until the node is a left child.
  
- **Predecessor**: Next smaller value in the BST.
  - If the node has a left child, find the maximum in the left subtree.
  - Otherwise, go up until the node is a right child.

#### **Example**
For node `20`:
- Successor: `22`
- Predecessor: `15`
![Screenshot (49)](https://github.com/user-attachments/assets/da5d154a-b886-4093-9257-50bcfb98f2c3)
![Screenshot (50)](https://github.com/user-attachments/assets/95c741dd-4fcb-46e4-bd9b-196560f5d23d)

### Code (Successor and Predecessor):
![image](https://github.com/user-attachments/assets/4776b78c-daeb-4423-a9aa-6451a21f71da)

---

### 📌**5. Find Maximum and Minimum**
- **Maximum**: Keep moving to the right until the last node.
- **Minimum**: Keep moving to the left until the last node.

#### **Example**
Find Min and Max in this BST:
```
      25
     /  \
   20    30
  /  \
15   22

Min: `15`
Max: `30`
```

### Code (Find Maximum and Minimum):
![image](https://github.com/user-attachments/assets/490a94e9-035b-458d-b1e2-043216800be1)

---

Here’s how you can organize your GitHub repository section on **AVL Trees** under Data Structures, along with code and examples:

---

### **AVL Trees: Height-Balanced Binary Search Tree**
AVL (Adelson-Velsky and Landis) Trees are self-balancing Binary Search Trees (BST). They maintain a **balance factor** of each node, ensuring the height difference between the left and right subtrees is at most **1**. This guarantees O(log n) time complexity for insertion, deletion, and search operations.

#### **Key Concepts**:
1. **Balance Factor**:  
   **Balance Factor** = `Height of Left Subtree` - `Height of Right Subtree`
   - If the balance factor is **-1, 0, or 1**, the tree is balanced.
   - If it exceeds this range, rotations are performed to restore balance.

2. **Rotations**:  
   Rotations are used to balance the tree after insertion or deletion:
   - **LL (Left-Left)**: Imbalance in the left subtree of the left child.
   - **RR (Right-Right)**: Imbalance in the right subtree of the right child.
   - **LR (Left-Right)**: Imbalance in the right subtree of the left child.
   - **RL (Right-Left)**: Imbalance in the left subtree of the right child.

---

#### **AVL Tree Insertion**:
- Insert the new node as in a regular BST.
- Update the balance factor of nodes.
- Perform rotations (LL, RR, LR, RL) if needed.

📌**C++ Code for AVL Tree Insertion**:
![image](https://github.com/user-attachments/assets/6a745326-780c-40b9-b515-5bd878148c6c)


---

### **Rotations**:
#### 📌1. **LL (Left-Left)**:
Occurs when a node is inserted into the left subtree of the left child.  
**Example**:
```
Insert 30, 20, 10
Initial Tree:      30
                  /
                 20
                /
               10
After LL Rotation:
                  20
                 /  \
               10    30
```
---
#### 📌2. **RR (Right-Right)**:
Occurs when a node is inserted into the right subtree of the right child.  
**Example**:
```
Insert 10, 20, 30
Initial Tree:      10
                    \
                     20
                       \
                        30
After RR Rotation:
                  20
                 /  \
               10    30
```
---
#### 📌3. **LR (Left-Right)**:
Occurs when a node is inserted into the right subtree of the left child.  
**Example**:
```
Insert 30, 10, 20
Initial Tree:      30
                  /
                10
                  \
                   20
After LR Rotation:
                  20
                 /  \
               10    30
```
---
#### 📌4. **RL (Right-Left)**:
Occurs when a node is inserted into the left subtree of the right child.  
**Example**:
```
Insert 10, 30, 20
Initial Tree:      10
                    \
                     30
                    /
                   20
After RL Rotation:
                  20
                 /  \
               10    30
```
---

## Huffman Coding Algorithm

Huffman Coding is a lossless data compression algorithm that assigns variable-length binary codes to characters based on their frequencies. Characters that occur more frequently are assigned shorter codes, while less frequent characters are assigned longer codes.

## How Huffman Coding Works

### Example Problem
Consider the message:  
`BCCADBBADDBCCADDDCCE`

- **Character Frequencies**:
  | Character | Frequency |
  |-----------|-----------|
  | A         | 3         |
  | B         | 5         |
  | C         | 6         |
  | D         | 4         |
  | E         | 2         |

- **Goal**: Minimize the total number of bits used to encode this message.

### Steps:
1. **Build a Frequency Table**: Count the occurrences of each character.
2. **Construct a Huffman Tree**:
   - Treat each character as a leaf node.
   - Merge the two nodes with the smallest frequencies to create a new node.
   - Repeat until a single tree is formed.
3. **Assign Codes**:
   - Traverse the tree to assign binary codes (0 for left, 1 for right).
4. **Encode the Message**:
   - Replace each character with its corresponding binary code.
5. **Compute Compression**:
   - Calculate the total number of bits used and compare with the uncompressed message size.

### Visual Representation
- **Huffman Tree**:  
  The root node contains the sum of all frequencies, and leaf nodes represent individual characters.
- **Binary Codes**:
  | Character | Code | Frequency | Bits Used |
  |-----------|------|-----------|-----------|
  | A         | 001  | 3         | 9         |
  | B         | 10   | 5         | 10        |
  | C         | 11   | 6         | 12        |
  | D         | 01   | 4         | 8         |
  | E         | 000  | 2         | 6         |

  Total bits = 45
![Screenshot (51)](https://github.com/user-attachments/assets/2529513d-6ab5-41f3-ae5c-f231fd98d518)

---

## Implementation in C++

Below is the C++ implementation of Huffman Coding:
![image](https://github.com/user-attachments/assets/3cb1c09d-9ab1-4cd3-8a9d-3b9946e4af5c)


---

## Explanation of Code
1. **Node Structure**: Represents each character or internal node in the Huffman Tree.
2. **Priority Queue**: Ensures that nodes with smaller frequencies are merged first.
3. **Tree Construction**: Combines nodes to build the Huffman Tree.
4. **Code Generation**: Recursively traverses the tree to assign binary codes.
5. **Encoding**: Maps each character to its binary code and encodes the input message.

---

## Example Output

### Input:  
`BCCADBBADDBCCADDDCCE`

### Huffman Codes:
```
A: 001
B: 10
C: 11
D: 01
E: 000
```

### Encoded Text:
```
101110001101001101011101100100010011
```

### Compression:
- Original size = 20 characters × 8 bits = 160 bits
- Compressed size = 45 bits
- **Compression Ratio** = (45 / 160) × 100 ≈ 28.13%

---

## 📌Selection Sort

### Steps of the Algorithm
1. Start with the first element and consider it as the minimum.
2. Compare this element with all other elements in the unsorted portion.
3. Swap it with the smallest element in the unsorted portion.
4. Move the boundary of the sorted portion one step forward.
5. Repeat until the entire array is sorted.

---

## 🚀C++ Implementation
![image](https://github.com/user-attachments/assets/33209ab0-e54f-4929-a10a-05bac764b689)

---

## Explanation of Code

### `selectionSort` Function:
- **Purpose**: Implements the selection sort logic.
- **Parameters**: Takes an array `arr[]` and its size `n` as input.
- **Steps**:
  - A loop iterates over the unsorted portion of the array.
  - Inside this loop, another loop identifies the smallest element in the unsorted portion.
  - The `swap` function exchanges the smallest element with the first unsorted element.

### `printArray` Function:
- **Purpose**: Prints the array elements.
- **Parameters**: Takes the array `arr[]` and its size `n`.

### `main` Function:
- Initializes the array to be sorted.
- Calls the `selectionSort` function to sort the array.
- Prints the array before and after sorting.

---

## Example Walkthrough

### Input:
```
64 34 25 12 22 11 90
```

### Sorting Steps:
1. Find the smallest element (`11`) and swap with the first element:
   ```
   11 34 25 12 22 64 90
   ```

2. Find the next smallest (`12`) and swap with the second element:
   ```
   11 12 25 34 22 64 90
   ```

3. Repeat until sorted:
   ```
   11 12 22 25 34 64 90
   ```

### Output:
```
Original array:
64 34 25 12 22 11 90

Sorted array:
11 12 22 25 34 64 90
```

---

## Time Complexity

1. **Best, Average, and Worst Case**: `O(n^2)`
   - Two nested loops are used to find and place the minimum element.
2. **Space Complexity**: `O(1)`
   - No additional data structures are used.

---

## Key Points

- Selection Sort is inefficient for large datasets due to its `O(n^2)` complexity.
- It is a comparison-based algorithm that performs well for small datasets or when memory is limited.

---

## 📌Bubble Sort Algorithm  
Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process continues until the list is sorted. It gets its name because smaller elements "bubble" to the top of the list.

### Key Characteristics
- **Best Case Time Complexity**: \(O(n)\) (when the array is already sorted).
- **Worst Case Time Complexity**: \(O(n^2)\) (when the array is reverse sorted).
- **Space Complexity**: \(O(1)\) (in-place sorting).

---

### Algorithm Steps
1. Start at the beginning of the list.
2. Compare each pair of adjacent elements.
3. Swap them if they are in the wrong order.
4. Repeat for all elements, reducing the range by one each time.
5. Stop when no swaps are needed.

---

### 🚀C++ Code Implementation
![image](https://github.com/user-attachments/assets/a0867807-d05e-4add-942b-904b44bf2a80)


---

### Explanation of the Code
1. **`bubbleSort` Function**  
   - **Input**: A reference to a vector `arr` of integers.  
   - **Logic**:  
     - Outer loop runs \(n-1\) times, ensuring all elements are checked.  
     - Inner loop compares adjacent elements and swaps them if they are out of order.  
     - A `swapped` flag is used to optimize performance, stopping the algorithm if the array is already sorted.  
   - **Complexity**: Nested loops make the time complexity \(O(n^2)\) in the worst case.  

2. **`printArray` Function**  
   - **Input**: A constant reference to a vector `arr` of integers.  
   - **Purpose**: Displays the elements of the array.  

3. **`main` Function**  
   - Initializes an unsorted array.  
   - Calls `printArray` to display the original array.  
   - Sorts the array using `bubbleSort`.  
   - Displays the sorted array.

---

### Example Input and Output

**Input:**  
```plaintext
Original Array: 64 34 25 12 22 11 90
```

**Output:**  
```plaintext
Sorted Array: 11 12 22 25 34 64 90
```

---

### Visual Representation of Bubble Sort

1. **Initial Array:**  
   `64, 34, 25, 12, 22, 11, 90`  

2. **Pass 1:**  
   Swaps happen: `34, 25, 12, 22, 11, 64, 90`  

3. **Pass 2:**  
   More swaps: `25, 12, 22, 11, 34, 64, 90`  

4. **Pass 3:**  
   `12, 22, 11, 25, 34, 64, 90`  

5. **Pass 4:**  
   `11, 12, 22, 25, 34, 64, 90`  

6. **Sorted Array:**  
   `11, 12, 22, 25, 34, 64, 90`

---

### Edge Cases to Test
1. **Empty Array:** Should remain unchanged.  
2. **Single Element:** Already sorted.  
3. **Already Sorted Array:** No swaps needed.  
4. **Reverse Sorted Array:** Worst-case scenario.

---

## 📌Insertion Sort Algorithm

#### **Overview**
Insertion Sort is a simple and intuitive sorting algorithm that builds the sorted array one item at a time. It is much like the way people often sort playing cards in their hands. 

#### **Algorithm Steps**
1. Start with the second element (index 1) and consider it as the key.
2. Compare the key with elements in the sorted portion to its left.
3. Shift all elements greater than the key to the right.
4. Insert the key into its correct position.
5. Repeat for all elements in the array.

---

### 🚀**C++ Implementation**
![image](https://github.com/user-attachments/assets/d2989185-e0b5-4892-ae3d-bc1ce8072e40)

---

### **Code Explanation**
1. **Input:** 
   - A vector `arr` is used to hold the list of integers to be sorted.
   
2. **Key Variable:**
   - `key` is used to temporarily store the value being inserted into the sorted portion.

3. **Inner Loop:**
   - Moves elements greater than `key` to the right to make space for `key`.

4. **Insertion:**
   - `key` is placed in the correct position using `arr[j + 1] = key`.

5. **Printing Steps:**
   - Each iteration of the outer loop shows the progress of the sort.

6. **Output:**
   - Displays the original, intermediate, and final sorted arrays.

---

### **Example Execution**

#### Input:
```
arr = {12, 11, 13, 5, 6}
```

#### Output:
```
Original array: 12 11 13 5 6 

Performing Insertion Sort...
Step 1: 11 12 13 5 6 
Step 2: 11 12 13 5 6 
Step 3: 5 11 12 13 6 
Step 4: 5 6 11 12 13 

Sorted array: 5 6 11 12 13
```

---

## 📌Merge Sort Algorithm

**Merge Sort** is a sorting algorithm that:
1. **Divides** the input array into two halves recursively.
2. **Sorts** each half individually.
3. **Merges** the two sorted halves into one sorted array.

Merge Sort guarantees a time complexity of **O(n log n)** and is a stable sorting algorithm.

---

## Algorithm Explanation

### Step-by-Step Process:
1. **Divide the Array**:
   - Split the array into two halves recursively until each subarray contains a single element.

2. **Merge**:
   - Compare elements from both subarrays and merge them into a sorted array.

---

### 🚀C++ Implementation
![image](https://github.com/user-attachments/assets/85bae5b3-f637-4fec-b34a-9fbff52bb94e)

---

## Function Explanations

### 1. `_merge` Function:
- **Purpose**: Merges two sorted subarrays (`arr[l..m]` and `arr[m+1..r]`) into one sorted array.
- **Key Steps**:
  1. Create two temporary arrays `L` and `R` to store elements of the left and right subarrays.
  2. Merge elements back into the original array `arr[l..r]` in sorted order.

### 2. `mergeSort` Function:
- **Purpose**: Recursively divides the array into halves and sorts them.
- **Key Steps**:
  1. Calculate the middle point of the array.
  2. Call `mergeSort` on the left half.
  3. Call `mergeSort` on the right half.
  4. Merge the sorted halves using `_merge`.

### 3. `print` Function:
- **Purpose**: Utility function to print the array.

---

## Example

### Input:
```cpp
int arr[] = {60, 10, 20, 5, 60, 70};
```

### Output:
```
Original Array: 60 10 20 5 60 70 
Sorted Array: 5 10 20 60 60 70 
```
---

### Example Input Array:
```cpp
int arr[] = {60, 10, 20, 5, 60, 70};
```
### Initial Call:
```cpp
mergeSort(arr, 0, 5);  // Array indices: 0 to 5
```
---

### Tracing the Recursion Step-by-Step:

#### Step 1: Initial Call (`mergeSort(arr, 0, 5)`)
1. Calculate `m = 0 + (5 - 0) / 2 = 2`.
2. Divide into two halves:
   - Left half: `mergeSort(arr, 0, 2)` (indices `0 to 2`).
   - Right half: `mergeSort(arr, 3, 5)` (indices `3 to 5`).

---

#### Step 2: Left Half (`mergeSort(arr, 0, 2)`)
1. Calculate `m = 0 + (2 - 0) / 2 = 1`.
2. Divide into two halves:
   - Left half: `mergeSort(arr, 0, 1)` (indices `0 to 1`).
   - Right half: `mergeSort(arr, 2, 2)` (index `2`).

---

#### Step 3: Left Sub-Half (`mergeSort(arr, 0, 1)`)
1. Calculate `m = 0 + (1 - 0) / 2 = 0`.
2. Divide into two halves:
   - Left half: `mergeSort(arr, 0, 0)` (index `0`).
   - Right half: `mergeSort(arr, 1, 1)` (index `1`).

---

#### Step 4: Base Case Reached
For both `mergeSort(arr, 0, 0)` and `mergeSort(arr, 1, 1)`:
- `l == r`, so the function returns without further recursion.

---

#### Step 5: Merge (`_merge(arr, 0, 0, 1)`)
After the base case is reached, the `_merge` function is called to merge the subarrays:
- Left subarray: `[60]` (index `0`).
- Right subarray: `[10]` (index `1`).
- Merged result: `[10, 60]`.

The array now looks like this:
```cpp
arr = {10, 60, 20, 5, 60, 70};
```

---

#### Step 6: Right Sub-Half (`mergeSort(arr, 2, 2)`)
- `l == r`, so the function returns (single element is already sorted).

---

#### Step 7: Merge (`_merge(arr, 0, 1, 2)`)
Merge the subarrays:
- Left subarray: `[10, 60]` (indices `0 to 1`).
- Right subarray: `[20]` (index `2`).
- Merged result: `[10, 20, 60]`.

The array now looks like this:
```cpp
arr = {10, 20, 60, 5, 60, 70};
```

---

#### Step 8: Right Half (`mergeSort(arr, 3, 5)`)
1. Calculate `m = 3 + (5 - 3) / 2 = 4`.
2. Divide into two halves:
   - Left half: `mergeSort(arr, 3, 4)` (indices `3 to 4`).
   - Right half: `mergeSort(arr, 5, 5)` (index `5`).

---

#### Step 9: Left Sub-Half (`mergeSort(arr, 3, 4)`)
1. Calculate `m = 3 + (4 - 3) / 2 = 3`.
2. Divide into two halves:
   - Left half: `mergeSort(arr, 3, 3)` (index `3`).
   - Right half: `mergeSort(arr, 4, 4)` (index `4`).

For both `mergeSort(arr, 3, 3)` and `mergeSort(arr, 4, 4)`:
- `l == r`, so the function returns.

---

#### Step 10: Merge (`_merge(arr, 3, 3, 4)`)
Merge the subarrays:
- Left subarray: `[5]` (index `3`).
- Right subarray: `[60]` (index `4`).
- Merged result: `[5, 60]`.

The array now looks like this:
```cpp
arr = {10, 20, 60, 5, 60, 70};
```

---

#### Step 11: Right Sub-Half (`mergeSort(arr, 5, 5)`)
- `l == r`, so the function returns.

---

#### Step 12: Merge (`_merge(arr, 3, 4, 5)`)
Merge the subarrays:
- Left subarray: `[5, 60]` (indices `3 to 4`).
- Right subarray: `[70]` (index `5`).
- Merged result: `[5, 60, 70]`.

The array now looks like this:
```cpp
arr = {10, 20, 60, 5, 60, 70};
```

---

#### Step 13: Final Merge (`_merge(arr, 0, 2, 5)`)
Merge the two main halves:
- Left subarray: `[10, 20, 60]` (indices `0 to 2`).
- Right subarray: `[5, 60, 70]` (indices `3 to 5`).
- Merged result: `[5, 10, 20, 60, 60, 70]`.

Final sorted array:
```cpp
arr = {5, 10, 20, 60, 60, 70};
```

---

### Key Points About the Recursion
1. **Recursive Breakdown**: The array is divided into halves until single-element subarrays are reached (base case).
2. **Merge Process**: The `_merge` function combines two sorted subarrays into a single sorted array.
3. **Recursive Backtracking**: After reaching the base case, the recursion "backs up" step by step, merging sorted subarrays.

---

### Visualization of the Recursive Calls
```
mergeSort(arr, 0, 5)
 ├── mergeSort(arr, 0, 2)
 │    ├── mergeSort(arr, 0, 1)
 │    │    ├── mergeSort(arr, 0, 0)
 │    │    ├── mergeSort(arr, 1, 1)
 │    │    └── _merge(arr, 0, 0, 1)
 │    ├── mergeSort(arr, 2, 2)
 │    └── _merge(arr, 0, 1, 2)
 ├── mergeSort(arr, 3, 5)
 │    ├── mergeSort(arr, 3, 4)
 │    │    ├── mergeSort(arr, 3, 3)
 │    │    ├── mergeSort(arr, 4, 4)
 │    │    └── _merge(arr, 3, 3, 4)
 │    ├── mergeSort(arr, 5, 5)
 │    └── _merge(arr, 3, 4, 5)
 └── _merge(arr, 0, 2, 5)
```
---

## Time and Space Complexity

| Case           | Time Complexity | Space Complexity |
|----------------|----------------|------------------|
| **Best Case**   | O(n log n)      | O(n)             |
| **Worst Case**  | O(n log n)      | O(n)             |
| **Average Case**| O(n log n)      | O(n)             |

---

## Key Characteristics
- **Stable**: Maintains the relative order of equal elements.
- **Efficient**: Performs well for large datasets due to its logarithmic time complexity.

---

## 📌**Quick Sort Algorithm**
Quick Sort is an efficient, divide-and-conquer sorting algorithm. It works by partitioning an array into smaller sub-arrays based on a pivot element and recursively sorting them.

---

### **Algorithm Steps**
1. Choose a **pivot** element from the array.
2. **Partition** the array such that:
   - Elements smaller than the pivot are placed on the left.
   - Elements greater than the pivot are placed on the right.
3. Recursively apply the above steps to the left and right sub-arrays.

---

### **Key Concepts**
- **Divide-and-Conquer**: Quick Sort divides the problem into smaller sub-problems, sorts them, and combines the results.
- **In-place Sorting**: Quick Sort sorts the array without requiring extra space.

---

### 🚀**C++ Implementation**
![image](https://github.com/user-attachments/assets/6cb03378-e7fd-41e7-b557-49293df77d53)

---

### **Explanation of the Code**

1. **`partition` Function**:
   - Selects the pivot element (last element in this case).
   - Rearranges elements such that those smaller than the pivot are on the left, and those larger are on the right.
   - Returns the index of the pivot after partitioning.

2. **`quickSort` Function**:
   - Recursively sorts the left and right sub-arrays by calling the partition function.

3. **`printArray` Function**:
   - A utility function to display the array at any stage.

4. **Main Function**:
   - Initializes the array and calls `quickSort` to sort it.
   - Displays the original and sorted array.

---

### **Example**

#### **Input**:
```
Original array: 10, 7, 8, 9, 1, 5
```

#### **Step-by-Step Process**:
1. Choose `5` as the pivot.
2. Partition the array: `[1, 5, 8, 9, 10, 7]`.
3. Recursively apply Quick Sort to left (`[1]`) and right (`[8, 9, 10, 7]`) sub-arrays.

#### **Output**:
```
Sorted array: 1, 5, 7, 8, 9, 10
```

---

### **Complexity Analysis**
1. **Time Complexity**:
   - Best Case: ` O(n log n(`
   - Worst Case: `O(n^2)` (Occurs when the pivot is always the smallest or largest element)
   - Average Case: `O(n log n)`

2. **Space Complexity**:
   - `O(log n)` for recursive calls.

---

### **Advantages of Quick Sort**
- Faster for large datasets compared to other algorithms like Bubble Sort or Insertion Sort.
- In-place sorting minimizes memory usage.

---

### **Disadvantages of Quick Sort**
- Performance degrades for nearly sorted arrays (use optimizations like Randomized Quick Sort to address this).

---

### **Tips for Optimization**
- Use **Randomized Quick Sort**: Choose a random pivot to reduce the chances of worst-case complexity.
- Use **Hybrid Approaches**: Combine Quick Sort with Insertion Sort for small sub-arrays.

---

## 📌**Heap Sort Algorithm**

### Overview
Heap Sort is a popular comparison-based sorting algorithm that uses a binary heap data structure. It ensures the sorted order by repeatedly building and adjusting the heap.  
Heap Sort operates in **O(n log n)** time complexity and can work in two modes:
1. **Max-Heap** (Descending Order)
2. **Min-Heap** (Ascending Order)

---

### **Key Concepts**

#### 1. **Heapify**
The `heapify` function ensures the heap property is maintained for a given node and its children:
- **Max-Heap property**: Parent node is larger than its children.
- **Min-Heap property**: Parent node is smaller than its children.

#### 2. **Build Heap**
The `buildHeap` function organizes an unordered array into a heap. It starts heapifying from the last non-leaf node to the root.

#### 3. **Heap Sort**
The `heapSort` function repeatedly extracts the largest (or smallest) element from the heap, places it at the end of the array, and reduces the heap size. This ensures the array becomes sorted.

---

### 🚀**C++ Code Explanation**
![image](https://github.com/user-attachments/assets/ff8a9625-a1ae-4f1f-95ff-6f9f2e2712c0)


---

### **Explanation of Each Function**

1. **`heapify` Function**:
   - Checks the children of the current node to maintain the Max-Heap property.
   - Swaps the current node with the largest child if the heap property is violated.
   - Recursively applies this adjustment down the subtree.

2. **`buildHeap` Function**:
   - Starts from the last non-leaf node (`n/2 - 1`) and heapifies each subtree.
   - Ensures that the entire array satisfies the Max-Heap property before sorting.

3. **`heapSort` Function**:
   - Calls `buildHeap` to construct the heap.
   - Iteratively moves the root (largest element in Max-Heap) to the end of the array.
   - Reduces the heap size and calls `heapify` to restore the heap property.

4. **`printArr` Function**:
   - Utility function to print the array.

5. **`main` Function**:
   - Demonstrates how to use `heapSort` to sort an array.

---

### **Example**

#### Input:
```
Array: [90, 15, 70, 20, 110]
```

#### Process:
1. **Build Max-Heap**:  
   ```
   [110, 90, 70, 20, 15]
   ```

2. **Heap Sort** (Extract root and heapify remaining elements):  
   ```
   Step 1: Swap 110 ↔ 15 → [15, 90, 70, 20, 110], Heapify → [90, 20, 70, 15, 110]
   Step 2: Swap 90 ↔ 15 → [15, 20, 70, 90, 110], Heapify → [70, 20, 15, 90, 110]
   Step 3: Swap 70 ↔ 15 → [15, 20, 70, 90, 110], Heapify → [20, 15, 70, 90, 110]
   Step 4: Swap 20 ↔ 15 → [15, 20, 70, 90, 110]
   ```

#### Output:
```
Sorted Array: [15, 20, 70, 90, 110]
```

---

### **Key Advantages of Heap Sort**
1. **Time Complexity**: `O(n log n)` for all cases.
2. **Space Complexity**: `O(1)`, as it’s an in-place sorting algorithm.
---

## 📌**Linear Search (Sequential Search)**

Linear Search is a simple and straightforward algorithm used to find the position of a target element in a list or array. It sequentially checks each element in the list until it finds a match or reaches the end.

### **How It Works**
1. Start from the first element of the array.
2. Compare each element with the target element (key).
3. If a match is found, return the index of the element.
4. If no match is found by the end of the array, indicate that the element is not present.

### 🚀**C++ Code**
![image](https://github.com/user-attachments/assets/53b8a4b6-68eb-42e9-8c18-f39c433ba015)


### **Explanation of the Code**
1. **Input Array and Size**:
   - `int arr[] = {90, 10, 30, 50, 100};`
     - This is the array where the search is performed.
   - `int n = sizeof(arr) / sizeof(arr[0]);`
     - This calculates the size of the array by dividing the total memory size of the array by the size of one element.

2. **Input from User**:
   - `cin >> element;`
     - Prompts the user to enter the element they wish to search for in the array.

3. **Linear Search Function**:
   - The function `linearSearch()`:
     - Takes three arguments: the array, its size, and the target element (key).
     - Uses a `for` loop to iterate over each element in the array.
     - Compares each element `arr[i]` with the target `key`.
     - If a match is found, it prints the index and exits the function using `return`.
     - If the loop completes without finding the target, it prints "Element not found!".

4. **Output**:
   - If the element is found: The index is displayed.
   - If not found: A message indicates that the element is not in the array.

### **Example**
#### Input:
```
Enter the element you want to search for: 50
```
#### Output:
```
Index of the element 50 is : 3
```

#### Input:
```
Enter the element you want to search for: 25
```
#### Output:
```
Element not found!
```

### **Time Complexity**
- **Best Case**: `O(1)` — When the target element is the first element in the array.
- **Worst Case**: `O(n)` — When the target element is not in the array or is the last element.
- **Average Case**: `O(n)`

### **Advantages**
- Simple to implement.
- Does not require the array to be sorted.

### **Disadvantages**
- Inefficient for large datasets compared to other search algorithms like Binary Search.

---

### 📌**Binary Search Algorithm**

Binary Search is an efficient searching algorithm that works on sorted arrays. It follows the "divide-and-conquer" approach, repeatedly dividing the search interval in half and reducing the time complexity to `O(log n)`. 

Let's explain:
1. **Iterative Binary Search** implementation.
2. **Recursive Binary Search** implementation.
3. Detailed explanations for each function and its steps.
4. Examples to understand how the algorithm works.

---

### **C++ Implementation**

#### 🚀**Iterative Binary Search**
![image](https://github.com/user-attachments/assets/bc95a661-5edb-4f8e-8341-229f288ad0c3)


#### 🚀**Recursive Binary Search**
![image](https://github.com/user-attachments/assets/72939725-91e7-4dc7-8d7a-c1eed0a0dd57)


#### 🚀**Driver Code**
![image](https://github.com/user-attachments/assets/510e50ff-c30e-4537-b0dd-aa76ee3e7365)

---

### **Explanation of Each Function**

#### **Iterative Binary Search**
1. The function takes the **array**, the **left index**, the **right index**, and the **element to search** as inputs.
2. While the left index is less than or equal to the right:
   - Compute the **middle index**.
   - If the element at the middle index is equal to the target, return the index.
   - If the target is greater, adjust the `left` pointer to `mid + 1`.
   - If the target is smaller, adjust the `right` pointer to `mid - 1`.
3. If the loop ends, return `-1` (element not found).

#### **Recursive Binary Search**
1. This function is similar but uses recursion:
   - If the **left index** is greater than the **right index**, return `-1` (base case for not found).
   - Compute the **middle index**.
   - If the element at the middle index matches the target, return the index.
   - Recursively call the function:
     - For the **right half** if the target is greater.
     - For the **left half** if the target is smaller.

#### **Driver Function (`main`)**
1. Initialize an array and calculate its size.
2. Prompt the user to input the element they want to search.
3. Call **Iterative Binary Search**, print the result.
4. Prompt the user for another input.
5. Call **Recursive Binary Search**, print the result.

---

### **Example**

#### Input:
```
Array: {10, 20, 30, 40, 50, 60, 70}
Search Element: 30
```

#### Iterative Search:
1. Start with `left = 0`, `right = 6`.
2. Calculate `mid = 3`. `arr[3] = 40` is greater than 30. Adjust `right = 2`.
3. Recalculate `mid = 1`. `arr[1] = 20` is less than 30. Adjust `left = 2`.
4. Recalculate `mid = 2`. `arr[2] = 30`, return 2.

#### Recursive Search:
1. Start with `left = 0`, `right = 6`, calculate `mid = 3`. `arr[3] = 40` is greater, call the function for left half (`right = 2`).
2. For `left = 0`, `right = 2`, calculate `mid = 1`. `arr[1] = 20` is less, call the function for right half (`left = 2`).
3. For `left = 2`, `right = 2`, calculate `mid = 2`. `arr[2] = 30`, return 2.

#### Output:
```
Iterative Binary Search
Enter the element you want to search for: 30
Index of element 30 is: 2

Recursive Binary Search
Enter the element you want to search for: 30
Index of element 30 is: 2
```
---

### 📌**Searching Algorithms Overview**
1. **Blind Search Algorithm (Uninformed Search):**
   - Does not use additional information about the problem's domain.
   - Examples: **Breadth-First Search (BFS)** and **Depth-First Search (DFS)**.
2. **Heuristic Search Algorithm (Informed Search):**
   - Uses extra information, such as path costs, to guide the search.
   - Examples: **Best-First Search**, **A* (A-Star)**, and **Tabu Search**.
![Screenshot (66)](https://github.com/user-attachments/assets/88667ab6-ddf5-4743-bcbe-67e1c7d3a4e8)

---

### **Understanding Breadth-First Search (BFS)**
#### **1. BFS Spanning Tree (Graph Example - Left Side):**
- BFS creates a spanning tree by exploring nodes level by level.
- Starting at node `1`, BFS traverses:
  - **Level 1:** Visit direct neighbors `4` and `2`.
  - **Level 2:** Visit their neighbors: `3`, `5`, `8`, `7`.
  - **Level 3:** Visit nodes `10`, `9`, and `6` connected to earlier levels.
- Result: **BFS Traversal = `1 → 4 → 2 → 3 → 5 → 8 → 7 → 10 → 9 → 6`**
![Screenshot (67)](https://github.com/user-attachments/assets/e95ae1c8-8fab-47d5-8112-18f829f8e325)

---

#### **2. BFS Queue Representation (Middle Section):**
- **Queue Mechanism:**
  - BFS uses a queue to track nodes as they are explored.
  - Example:
    - Start: `Q = [1]`
    - Visit `4` and `2`: `Q = [4, 2]`
    - Visit `3`, `5`, `8`, `7`: `Q = [3, 5, 8, 7]`
  - Continue until all nodes are processed.

- **Key Observations:**
  - The queue represents the current level of nodes being explored.
  - This ensures BFS always completes one level before moving to the next.

---

#### **3. Graph with Weights (Bottom Section):**
- BFS is visualized on a weighted graph, though BFS does not use weights directly.
- Starting from node `S`:
  - Distance to `S` is `0`.
  - Neighbors (`W` and `R`) have distances `1` and are visited next.
  - Continue expanding outward level by level:
    - Distance to `T`, `X`, and others increase progressively.

---

#### **4. Visiting State vs. Complete State:**
- **Visiting State:**
  - Tracks nodes currently being processed.
  - Example: `S → W → R` (processed in order).
- **Complete State:**
  - Tracks nodes that have already been visited.
  - Prevents revisiting nodes and ensures no infinite loops.
- **Queue State:**
  - Updates dynamically as nodes are enqueued and dequeued for processing.
![Screenshot (68)](https://github.com/user-attachments/assets/28680418-2afe-41f3-b57f-a7dc6edf4e8d)

---

#### **5. BFS Path Distance:**
- BFS is ideal for unweighted graphs to find the shortest path.
- Example:
  - From node `S`:
    - Distance to `W` and `R` is `1`.
    - Distance to `T` and `X` is `2`, and so on.
  - BFS ensures all shortest paths are explored systematically.
![Screenshot (69)](https://github.com/user-attachments/assets/ee678bff-00e3-4e5f-80ee-6ee214073a31)

---

### **Key Takeaways from the Image**
1. BFS systematically explores the graph level by level.
2. The **spanning tree** shows how BFS connects nodes starting from the source.
3. **Queue visualization** demonstrates how BFS progresses through the graph.
4. The concept of **visiting state** and **complete state** helps understand node processing and prevents revisits.
5. BFS works for unweighted graphs to determine the shortest path and can be extended to explore connected components or solve traversal problems.


---

## 📌**Breadth-First Search (BFS) Algorithm**

#### **Introduction**
Breadth-First Search (BFS) is a graph traversal algorithm that explores all the vertices of a graph in breadthward motion. It starts at the root node (or any arbitrary node) and explores all its neighbors before moving to the next level of neighbors.

### **Key Features**
- **Time Complexity**: `O(V + E)`, where `V` is the number of vertices and `E` is the number of edges.
- **Space Complexity**: `O(V)`, due to the storage of the queue.
- **Applications**:
  - Finding the shortest path in an unweighted graph.
  - Level-order traversal of a tree.
  - Cycle detection in an undirected graph.

---

### **Algorithm Steps**
1. Initialize a queue and enqueue the starting node.
2. Mark the starting node as visited.
3. While the queue is not empty:
   - Dequeue a node from the front.
   - For each unvisited neighbor of this node:
     - Mark it as visited.
     - Enqueue it into the queue.

---

### 🚀**C++ Implementation**
![image](https://github.com/user-attachments/assets/11e00dce-b7e8-40b5-9d52-0fe5d2c563db)


---

### **Explanation of Code**

1. **Adjacency List Representation**:
   - The graph is represented using an adjacency list (`vector<vector<int>> adjList`), where each index corresponds to a node and contains a list of its neighbors.

2. **Visited Array**:
   - A `vector<bool>` keeps track of which nodes have already been visited to avoid revisiting them.

3. **Queue Initialization**:
   - A queue is used to manage the BFS traversal order. Nodes are added to the queue when they are discovered and processed in FIFO order.

4. **Main BFS Logic**:
   - The main loop dequeues a node, prints it, and explores its neighbors. Unvisited neighbors are marked as visited and enqueued.

---

#### **Example**
Given the graph:
```
    0 -- 1 -- 3
    |    |
    2    4
    |    
    5 -- 6
```
Adjacency list:
```
0 -> 1, 2
1 -> 0, 3, 4
2 -> 0, 5, 6
3 -> 1
4 -> 1
5 -> 2
6 -> 2
```

**Output**:
```
Breadth-First Search starting from node 0: 0 1 2 3 4 5 6
```
---

📌🚀
