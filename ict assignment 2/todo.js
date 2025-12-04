// Import prompt-sync for user input
const prompt = require('prompt-sync')();

// Task list array
let tasks = [];

// Function to add a task
function addTask() {
    const task = prompt('Enter a new task: ');
    if (task.trim() === '') {
        console.log('Task cannot be empty.');
    } else {
        tasks.push(task);
        console.log(`Task added: "${task}"`);
    }
}

// Function to remove a task by index
function removeTask() {
    displayTasks();
    const index = parseInt(prompt('Enter the task number to remove: '), 10);
    if (isNaN(index) || index < 1 || index > tasks.length) {
        console.log('Invalid task number.');
    } else {
        const removed = tasks.splice(index - 1, 1);
        console.log(`Removed task: "${removed[0]}"`);
    }
}

// Function to display all tasks
function displayTasks() {
    if (tasks.length === 0) {
        console.log('No tasks to display.');
    } else {
        console.log('\nYour Tasks:');
        tasks.forEach((task, i) => {
            console.log(`${i + 1}. ${task}`);
        });
    }
}

// Function to clear all tasks
function clearTasks() {
    tasks = [];
    console.log('All tasks cleared.');
}

// Main loop for user interaction
function main() {
    console.log('Welcome to the To-Do List Manager!');
    while (true) {
        const command = prompt('\nEnter a command (add, remove, view, clear, exit): ').toLowerCase();
        switch (command) {
            case 'add':
                addTask();
                break;
            case 'remove':
                removeTask();
                break;
            case 'view':
                displayTasks();
                break;
            case 'clear':
                clearTasks();
                break;
            case 'exit':
                console.log('Goodbye!');
                return;
            default:
                console.log('Invalid command. Please try again.');
        }
    }
}

// Start the program
main();