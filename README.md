# Informix 4GL Manufacturing ERP Lab

Portfolio project focused on legacy ERP development using Informix-style database design and 4GL business applications.

---

## Current Phase

Phase 5 completed.

The project now includes a functional `Customer Maintenance` module with inquiry and maintenance operations.

---

## Current 4GL Programs

```text
src/customer_lookup.4gl
src/customer_maintenance.4gl
src/main.4gl
```

---

## Customer Maintenance Module

Program:

```text
src/customer_maintenance.4gl
```

Current menu:

```text
Customer Maintenance
List Customers
Find Customer
Create Customer
Update Customer
Deactivate Customer
Exit
```

---

## Implemented Features

### List Customers

Lists customers ordered by customer code.

The output uses fixed screen coordinates to keep columns aligned:

```4gl
DISPLAY v_code CLIPPED AT v_line, 2
DISPLAY v_name CLIPPED AT v_line, 14
DISPLAY v_city CLIPPED AT v_line, 45
DISPLAY v_status AT v_line, 62
```

### Find Customer

Prompts for a customer code and displays customer details.

Example:

```text
CUST-003
```

### Create Customer

Prompts for:

```text
Customer code
Name
Email
City
```

Then inserts a new active customer.

### Update Customer

Prompts for a customer code, displays the current data, then allows updating:

```text
Name
Email
City
```

### Deactivate Customer

Marks a customer as inactive instead of deleting the row:

```sql
UPDATE customers
   SET status = 'I'
 WHERE customer_code = ...
```

This reflects a common ERP/legacy-system practice where records are preserved for audit and historical reporting.

---

## Aubit4GL Window Strategy

The module uses a small terminal window suitable for Docker terminal execution:

```4gl
OPEN WINDOW main_window AT 2,2
    WITH 20 ROWS, 70 COLUMNS
```

---

## Aubit4GL Session Strategy

This project uses explicit session handling:

```4gl
OPEN SESSION session_id
    TO DATABASE portfolio_db
    AS USER "informix"
    PASSWORD "in4mix"
```

This avoids relying on the operating system user, such as `root`, when running inside Docker.

---

## Build

Compile:

```bash
4glpc src/customer_maintenance.4gl -o bin/customer_maintenance
```

---

## Run

Execute:

```bash
./bin/customer_maintenance
```

---

## Suggested Manual Tests

### Create a customer

```text
Customer code: CUST-004
Name         : South Frame Store
Email        : orders@southframe.example
City         : Miami
```

### Find the new customer

```text
CUST-004
```

### Update the customer

Change name, email, or city.

### Deactivate the customer

Deactivate:

```text
CUST-004
```

Then list customers and verify that status changed to:

```text
I
```

---

## Informix / 4GL Skills Demonstrated

Current phase demonstrates:

- explicit database session handling
- `OPEN WINDOW`
- `CLEAR WINDOW`
- terminal menu navigation
- `PROMPT`
- `DISPLAY AT`
- `CLIPPED`
- fixed-position column layout
- cursor declaration
- `FOREACH`
- embedded SQL
- `SELECT ... INTO`
- `INSERT`
- `UPDATE`
- customer maintenance workflow
- soft delete / deactivate pattern

---

## Roadmap

### Completed

- Phase 0: Repository initialization
- Phase 1: Informix database schema and sample data
- Phase 2: First 4GL customer lookup
- Phase 3: Main ERP menu
- Phase 4: Customer Maintenance inquiry module
- Phase 5: Customer create, update, and deactivate operations

### Next

Phase 6:

- Product Maintenance
- Product listing
- Product lookup
- Product create/update/deactivate operations
