<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Library Management System (C++ OOP)</title>
</head>
<body>

<h1>📚 Library Management System (C++ | OOP | STL)</h1>

<p>
This project is a <strong>console-based Library Management System</strong> developed in C++,
focusing on <strong>Object-Oriented Programming (OOP)</strong> principles and
<strong>modern C++ practices</strong> such as smart pointers and STL containers.
</p>

<hr>

<h2>🔹 Project Overview</h2>

<p>
The system models different types of library items such as <strong>Books</strong>,
<strong>Magazines</strong>, and <strong>Research Papers</strong>.
Each item has its own fine calculation logic while sharing a common interface.
</p>

<p>
The design ensures scalability, memory safety, and clean abstraction, making it
suitable as an <strong>intermediate to advanced C++ project</strong>.
</p>

<hr>

<h2>🔹 Key Concepts Used</h2>

<h3>1️⃣ Object-Oriented Programming (OOP)</h3>
<ul>
    <li><strong>Abstraction:</strong> Implemented using an abstract base class <code>LibraryItem</code>.</li>
    <li><strong>Inheritance:</strong> <code>Book</code>, <code>Magazine</code>, and <code>ResearchPaper</code> inherit from <code>LibraryItem</code>.</li>
    <li><strong>Polymorphism:</strong> Base class pointers invoke derived class behavior at runtime.</li>
</ul>

<h3>2️⃣ Virtual Functions & Runtime Polymorphism</h3>
<p>
Functions like <code>display()</code> and <code>calculateFine()</code> are declared as
virtual and overridden in derived classes. This enables dynamic binding and
ensures correct behavior based on object type.
</p>

<h3>3️⃣ Smart Pointers (<code>std::unique_ptr</code>)</h3>
<p>
The project uses <code>std::unique_ptr</code> to manage dynamic memory automatically.
This eliminates memory leaks and removes the need for manual <code>delete</code> operations.
</p>

<h3>4️⃣ STL Containers (<code>std::vector</code>)</h3>
<p>
Library items are stored inside a <code>std::vector</code>, allowing dynamic resizing,
safe iteration, and better memory management compared to raw arrays.
</p>

<h3>5️⃣ Const-Correctness</h3>
<p>
Member functions that do not modify object state are marked as <code>const</code>,
ensuring safer and more predictable behavior.
</p>

<h3>6️⃣ Virtual Destructors</h3>
<p>
The base class destructor is virtual, guaranteeing proper cleanup of derived objects
when deleted through base class pointers.
</p>

<hr>

<h2>🔹 How the Program Works</h2>

<ol>
    <li>Create different library items using derived classes.</li>
    <li>Store them as base-class smart pointers inside a vector.</li>
    <li>Iterate through the collection using a range-based loop.</li>
    <li>Call virtual methods to display details and calculate fines.</li>
</ol>

<hr>

<h2>🔹 Scope of This Project</h2>

<p>
This project demonstrates:
</p>

<ul>
    <li>Clean OOP design suitable for real-world systems</li>
    <li>Modern C++ memory management techniques</li>
    <li>Polymorphic behavior using base-class interfaces</li>
    <li>Safe and scalable container usage</li>
</ul>

<p>
It can be used as:
</p>

<ul>
    <li>A college-level mini project</li>
    <li>A resume-worthy C++ OOP demonstration</li>
    <li>A foundation for larger management systems</li>
</ul>

<hr>

<h2>🚀 Future Enhancements</h2>

<ul>
    <li>Add a <strong>LibraryManager</strong> class to manage items</li>
    <li>Implement search, add, remove, and update functionality</li>
    <li>Introduce file handling for data persistence</li>
    <li>Add a menu-driven user interface</li>
    <li>Apply exception handling for robust error management</li>
    <li>Extend to a full-fledged Library Management System</li>
</ul>

<hr>

<h2>🛠 Technologies Used</h2>

<ul>
    <li>C++ (C++17 or later)</li>
    <li>STL (<code>vector</code>, <code>memory</code>)</li>
    <li>Object-Oriented Design</li>
</ul>

<hr>

<h2>✅ Conclusion</h2>

<p>
This project reflects a strong understanding of C++ fundamentals along with
modern best practices. It serves as a solid step toward building
real-world C++ applications and mastering object-oriented design.
</p>

<p><strong>Author:</strong> Akshay</p>

</body>
</html>
