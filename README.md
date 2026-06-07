# Informix 4GL Manufacturing ERP Lab

Portfolio project focused on legacy ERP development using Informix-style database design and 4GL business applications.

---

## Project Goal

This repository simulates the maintenance and evolution of a manufacturing and distribution ERP system built with Informix 4GL.

The project demonstrates the type of work commonly performed by Informix/4GL developers:

- Informix database schema management
- Embedded SQL preparation
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

The ERP stores:

- Customers
- Products
- Inventory
- Sales orders
- Sales order items

The objective is to maintain and extend the system while preserving compatibility with a traditional Informix-style architecture.

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

### forms

4GL form definitions.

### bin

Compiled programs.

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

## Informix / 4GL Skills Demonstrated

Current phase demonstrates:

- Informix database creation
- Informix SQL schema definition
- Primary keys
- Foreign keys
- Unique constraints
- Sample ERP data preparation
- Database foundation for embedded SQL programs

Future phases will demonstrate:

- Embedded SQL from 4GL programs
- SELECT INTO
- INSERT / UPDATE / DELETE
- Menus
- Forms (.per)
- Reports
- Stored procedures
- Transactions
- Inventory workflows
- Import/export processing

---

## How to Apply Phase 1

Run the scripts inside the Informix environment.

Example:

```bash
dbaccess - db/001_create_database.sql
dbaccess portfolio_db db/002_create_tables.sql
dbaccess portfolio_db db/003_seed_data.sql
```

Depending on the Docker container layout, you may need to copy the scripts into the container first or run them from a mounted project directory.

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

Next:

- First 4GL program
- Customer lookup using embedded SQL

### Phase 3

Planned:

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

Phase 1 completed.

The project now has the initial Informix database schema and sample ERP data required to start building real 4GL programs.
