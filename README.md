# Informix 4GL Manufacturing ERP Lab

Portfolio project focused on legacy ERP development using Informix-style database design and 4GL business applications.

---

## Current Phase

Phase 4 completed.

The project includes a functional `Customer Maintenance` terminal module using Aubit4GL, explicit sessions, a terminal window, cursor-based listing, aligned column output, and customer lookup.

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
Exit
```

Implemented features:

- list customers
- find customer by code
- explicit database session
- terminal window with `OPEN WINDOW`
- menu navigation
- cursor-based listing
- aligned column output using fixed screen positions
- prompt-based input
- pause before returning to the menu

---

## List Customers

The listing uses a cursor:

```4gl
DECLARE customer_cursor CURSOR FOR
    SELECT customer_code, name, city, status
      FROM customers
     ORDER BY customer_code
```

Rows are displayed using fixed screen coordinates per column:

```4gl
DISPLAY v_code CLIPPED AT v_line, 2
DISPLAY v_name CLIPPED AT v_line, 14
DISPLAY v_city CLIPPED AT v_line, 45
DISPLAY v_status AT v_line, 62
```

This produces aligned terminal output without relying on manually padded strings.

---

## Find Customer

The lookup prompts for a customer code:

```text
CUST-003
```

Expected result:

```text
Customer: Santiago Demo Customer
Email   : santiago.demo@example.com
City    : Montevideo
Status  : A
```

---

## Aubit4GL Window Strategy

The module uses a smaller terminal window to avoid runtime window creation errors in constrained Docker terminals:

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
- basic customer inquiry workflow

---

## Roadmap

### Completed

- Phase 0: Repository initialization
- Phase 1: Informix database schema and sample data
- Phase 2: First 4GL customer lookup
- Phase 3: Main ERP menu
- Phase 4: Customer Maintenance module

### Next

Phase 5:

- Create Customer
- Update Customer
- Deactivate Customer
