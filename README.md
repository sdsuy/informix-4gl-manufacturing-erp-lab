# Informix 4GL Manufacturing ERP Lab

Portfolio project focused on legacy ERP development using Informix-style database design and 4GL business applications.

---

## Project Goal

This repository simulates the maintenance and evolution of a manufacturing and distribution ERP system built with Informix 4GL.

The project demonstrates the type of work commonly performed by Informix/4GL developers:

- Informix database schema management
- Embedded SQL
- 4GL business programs
- Terminal-based ERP workflows
- Customer and product maintenance
- Inventory management
- Reporting
- Import/export routines
- Legacy system documentation

---

## Business Scenario

A manufacturing and distribution company manages picture framing products through a legacy ERP system.

The ERP currently stores:

- Customers
- Products
- Inventory
- Sales orders
- Sales order items

The first implemented 4GL program reads customer data from the Informix database and displays it in a terminal-based legacy style.

---

## Repository Structure

```text
db/
src/
forms/
bin/
docs/
scripts/
samples/
```

### db

Database creation scripts.

Current scripts:

```text
db/001_create_database.sql
db/002_create_tables.sql
db/003_seed_data.sql
```

### src

Informix 4GL source code.

Current programs:

```text
src/customer_lookup.4gl
```

### forms

4GL form definitions.

### bin

Compiled programs.

Current binaries:

```text
bin/customer_lookup
```

### docs

Functional and technical documentation.

### scripts

Utility scripts.

### samples

Sample import and export files.

---

## Database

Current database:

```text
portfolio_db
```

Current tables:

```text
customers
products
inventory
sales_orders
sales_order_items
```

---

## 4GL Programs

### customer_lookup.4gl

Simple customer lookup program.

It demonstrates:

- explicit Aubit4GL session handling
- connection to `portfolio_db` as user `informix`
- embedded SQL in a 4GL program
- `SELECT ... INTO`
- terminal output using `DISPLAY`
- compilation with Aubit4GL

The program currently looks up:

```text
CUST-003
```

Expected output:

```text
Customer: Santiago Demo Customer
Email   : santiago.demo@example.com
City    : Montevideo
Status  : A
```

---

## Aubit4GL Session Strategy

This project uses explicit session handling instead of relying only on a top-level `DATABASE portfolio_db` statement.

Reason:

Inside the Docker development environment, using a direct database declaration may cause the runtime to try connecting as the operating system user, such as `root`. That user does not necessarily exist in the Informix database.

The current approach is:

```4gl
OPEN SESSION session_id
    TO DATABASE portfolio_db
    AS USER "informix"
    PASSWORD "in4mix"
```

This keeps the connection explicit and reproducible in the local Docker-based lab.

---

## Informix / 4GL Skills Demonstrated

Current phase demonstrates:

- Informix database creation
- Informix SQL schema definition
- Sample ERP data preparation
- First 4GL source file
- Aubit4GL explicit session connection
- Embedded SQL in 4GL
- `SELECT ... INTO`
- Terminal-based program execution
- 4GL compilation inside Docker

Future phases will demonstrate:

- Dynamic user input
- INSERT / UPDATE / DELETE
- Menus
- Forms (.per)
- Reports
- Stored procedures
- Transactions
- Inventory workflows
- Import/export processing

---

## How to Build

Compile the customer lookup program:

```bash
4glpc src/customer_lookup.4gl -o bin/customer_lookup
```

Aubit4GL may generate a warning file even when the program compiles successfully. Check the `.warn` file when needed.

---

## How to Run

Run the compiled program:

```bash
./bin/customer_lookup
```

Expected result:

```text
Customer: Santiago Demo Customer
Email   : santiago.demo@example.com
City    : Montevideo
Status  : A
```

---

## Development Roadmap

### Phase 0

Completed:

- Repository initialization
- Project structure
- Initial documentation

### Phase 1

Completed:

- Informix database creation script
- Core ERP tables
- Sample customers
- Sample products
- Sample inventory

### Phase 2

Completed:

- First 4GL program
- Customer lookup using embedded SQL
- Explicit Aubit4GL session connection
- Aubit4GL compilation
- Terminal execution

### Phase 3

Next:

- Main ERP menu

### Phase 4

Planned:

- Customer maintenance module

### Phase 5

Planned:

- Customer ABM

### Phase 6

Planned:

- Forms (.per)

### Phase 7

Planned:

- Product maintenance

### Phase 8

Planned:

- Inventory reporting

### Phase 9

Planned:

- Sales order workflow

### Phase 10

Planned:

- Stored procedures integration

### Phase 11

Planned:

- Import/export processing

### Phase 12

Planned:

- Documentation and portfolio polish

---

## Current Status

Phase 2 completed.

The project now has a working 4GL program that connects to the Informix database using an explicit Aubit4GL session, reads a customer using embedded SQL, and displays the result in the terminal.
