// #include <stdio.h>
// #include <stdlib.h>

// // Define the structure for the node
// typedef struct node {
//     int data;
//     struct node* next;
// } node;

// // Function to create a new node
// node* createNode(int data) {
//     node* newNode = (node*)malloc(sizeof(node));
//     if (newNode == NULL) {
//         printf("Memory allocation failed\n");
//         exit(1);
//     }
//     newNode->data = data;
    
//     newNode->next = NULL;
//     return newNode;
// }



// // Function to insert a new node at the beginning of the list
// node* insertAtBeginning(node* head, int data) {
//     node* newNode = createNode(data);
//     newNode->next = head;
//     return newNode; // Return the new head of the list
// }

// // Function to delete the first node of the list
// node* deleteBeginningNode(node* head) {
//     if (head == NULL) {
//         printf("Error: List is empty\n");
//         return NULL; // Return NULL if the list is empty
//     }

//     node* temp = head; // Store the current head
//     head = head->next; // Move head to the next node
//     free(temp); // Free the old head
//     return head; // Return the new head of the list
// }

// // Function to insert a new node at the end of the list
// node* insertNodeAtEnd(node* head, int data) {
//     node* newNode = createNode(data);
//     if (head == NULL) {
//         return newNode; // If the list is empty, return the new node as the head
//     }
    
//     node* temp = head;
//     while (temp->next != NULL) {
//         temp = temp->next; // Traverse to the last node
//     }
//     temp->next = newNode; // Link the new node at the end
//     return head; // Return the unchanged head of the list

// }
// node* insertnodeatposition(int position,node* head,int data){

//   node*temp=head;
//   node*t=temp;
//   newnode=createNode(data);
//   for(int i =1;i<position;i++){

//     temp=temp->next;
//     t=t->next;


//   }
//   t
//   temp=newnode;
//   temp->next=t;
//   return head;


// }
// // Function to print the linked list
// void printList(node* head) {
//     node* current = head;
//     while (current != NULL) {
//         printf("%d -> ", current->data);
//         current = current->next;
//     }
//     printf("NULL\n");
// }

// // Main function
// int main() {
//     node* head = NULL; // Initialize the head of the list
//     int data;

//     while (1) {
//         printf("Enter a number to insert at the beginning (or -1 to exit, or 1 to delete the first node, or 2 to insert at the end, or 3 to delete at position): ");
//         scanf("%d", &data);

//         if (data == -1) break; // Exit condition
//         else if (data == 1) {
//             head = deleteBeginningNode(head); // Call delete function
//         } else if (data == 2) {
//             int newData;
//             printf("Enter the number to insert at the end: ");
//             scanf("%d", &newData);
//             head = insertNodeAtEnd(head, newData); // Insert new node at the end
//         } else if (data == 3) {
//             int position;
//             printf("Enter the position to delete: ");
//             scanf("%d", &position);
//             head = deleteAtPosition(head, position); // Delete at specified position
//         } else {
//             head = insertAtBeginning(head, data); // Insert new node at the beginning
//         }

//         printList(head); // Print the current list
//     }

//     // Free the allocated memory
//     node* current = head;
//     while (current != NULL) {
//         node* nextNode = current->next;
//         free(current);
//         current = nextNode;
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

// Define the structure for the node
typedef struct node {
    int data;
    struct node* next;
} node;

// Function to create a new node
node* createNode(int data) {
    node* newNode = (node*)malloc(sizeof(node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    
    newNode->next = NULL;
    return newNode;
}



// Function to insert a new node at the beginning of the list
node* insertAtBeginning(node* head, int data) {
    node* newNode = createNode(data);
    newNode->next = head;
    return newNode; // Return the new head of the list
}

// Function to delete the first node of the list
node* deleteBeginningNode(node* head) {
    if (head == NULL) {
        printf("Error: List is empty\n");
        return NULL; // Return NULL if the list is empty
    }

    node* temp = head; // Store the current head
    head = head->next; // Move head to the next node
    free(temp); // Free the old head
    return head; // Return the new head of the list
}

// Function to insert a new node at the end of the list
node* insertNodeAtEnd(node* head, int data) {
    node* newNode = createNode(data);
    if (head == NULL) {
        return newNode; // If the list is empty, return the new node as the head
    }
    
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next; // Traverse to the last node
    }
    temp->next = newNode; // Link the new node at the end
    return head; // Return the unchanged head of the list

}
// Function to print the linked list
void printList(node* head) {
    node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    node* head = NULL; // Initialize the head of the list
    int data;

    while (1) {
        printf("Enter a number to insert at the beginning (or -1 to exit, or 1 to delete the first node, or 2 to insert at the end, or 3 to delete at position): ");
        scanf("%d", &data);

        if (data == 1)
        {
            head = insertAtBeginning(head, data);
        } 
        else if (data == 0) 
        {
            head = insertNodeAtEnd(head, newData); // Insert new node at the end
        } 
        else 
        {
            break;// Exit condition
        }

        printList(head); // Print the current list
    }

    // Free the allocated memory
    node* current = head;
    while (current != NULL) {
        node* nextNode = current->next;
        free(current);
        current = nextNode;
    }

    return 0;
}

// using a tree structure 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// this structure is for each employee of the sub branch of the tree which is connected to each department
typedef struct Employee 
{
    int id;
    char name[100];
    struct Employee *next;
} Employee;

// this structure is for each department of the sub branch of the tree connected to the root of three i.e oraganisation 
typedef struct Department 
{
    char name[100];
    Employee *employeeList;                             // Head of the employee linked list which is storing all the data
    struct Department *nextDepartment;                  // Points to next department in the tree
} Department;

//structure for the company (root of the tree)
typedef struct Company 
{
    char name[100];
    Department *departments;                            // Head of the department linked list
} Company;

// Function to create a new employee node
Employee* createEmployee(int id, char *name) 
{
    Employee newEmployee = (Employee)malloc(sizeof(Employee));
    newEmployee->id = id;
    strcpy(newEmployee->name, name);
    newEmployee->next = NULL;
    return newEmployee;
}

// Function to create a new department node
Department* createDepartment(char *name) 
{
    Department newDepartment = (Department)malloc(sizeof(Department));
    strcpy(newDepartment->name, name);
    newDepartment->employeeList = NULL;
    newDepartment->nextDepartment = NULL;
    return newDepartment;
}

// Function to add a department to the company
void addDepartment(Company *company, char *name) 
{
    Department *newDepartment = createDepartment(name);
    newDepartment->nextDepartment = company->departments;
    company->departments = newDepartment;
}

// Function to add an employee to a specific department
void addEmployee(Department *department, int id, char *name) 
{
    Employee *newEmployee = createEmployee(id, name);
    newEmployee->next = department->employeeList;
    department->employeeList = newEmployee;
}

// Function to find a department by name
Department* findDepartment(Company *company, char *name) 
{
    Department *temp = company->departments;
    while (temp != NULL) {
        if (strcmp(temp->name, name) == 0) {
            return temp;
        }
        temp = temp->nextDepartment;
    }
    return NULL;
}

// Function to display all departments and their employees
void displayCompany(Company *company) 
{
    printf("Company: %s\n", company->name);
    Department *dept = company->departments;
    while (dept != NULL) {
        printf("Department: %s\n", dept->name);
        Employee *emp = dept->employeeList;
        while (emp != NULL) 
        {
            printf("Employee ID: %d Name: %s", emp->id, emp->name);
            emp = emp->next;
        }
        dept = dept->nextDepartment;
    }
}

int main() 
{
    Company company;
    char name[1000];
    printf("Enter the name of organisation:");
    scanf("%s", name);

    strcpy(company.name, name);
    company.departments = NULL;

    int numDepartments;
    printf("Enter the number of departments: ");
    scanf("%d", &numDepartments);

    // Add departments
    for (int i = 0; i < numDepartments; i++) {
        char deptName[100];
        printf("Enter the name of department %d: ", i + 1);
        scanf("%s", deptName);
        addDepartment(&company, deptName);
    }

    // Add employees to departments
    int numEmployees;
    printf("\nEnter the number of employees: ");
    scanf("%d", &numEmployees);

    for (int i = 0; i < numEmployees; i++) 
    {
        int id;
        char name[100], deptName[100];
        printf("\nEnter employee ID: ");
        scanf("%d", &id);
        printf("Enter employee name: ");
        scanf("%s", name);
        printf("Enter department for the employee(make sure the departments are same entered as above each letter cases): ");
        scanf("%s", deptName);

        Department *dept = findDepartment(&company, deptName);
        if (dept != NULL) 
            addEmployee(dept, id, name);
        else 
            printf("Department not found!\n");

    }
    displayCompany(&company);

    return 0;
}