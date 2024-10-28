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
![image](https://github.com/user-attachments/assets/4654867d-4bdc-4b51-8c04-274098e9c1b4)

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

