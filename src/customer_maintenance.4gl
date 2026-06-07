MAIN
    OPTIONS
        PROMPT LINE 20,
        MESSAGE LINE 21,
        ERROR LINE 22

    OPEN WINDOW main_window AT 2,2
        WITH 20 ROWS, 70 COLUMNS

    OPEN SESSION session_id
        TO DATABASE portfolio_db
        AS USER "informix"
        PASSWORD "in4mix"

    MENU "Customer Maintenance"

        COMMAND "List Customers"
            CALL list_customers()

        COMMAND "Find Customer"
            CALL find_customer()

        COMMAND "Exit"
            EXIT MENU

    END MENU

    CLOSE WINDOW main_window
END MAIN


FUNCTION list_customers()
    DEFINE v_code CHAR(20)
    DEFINE v_name CHAR(100)
    DEFINE v_city CHAR(80)
    DEFINE v_status CHAR(1)
    DEFINE v_line SMALLINT
    DEFINE v_count INTEGER

    CLEAR WINDOW main_window

    DISPLAY "CUSTOMER LIST" AT 2,2
    DISPLAY "-------------" AT 3,2

    DISPLAY "Code" AT 5,2
    DISPLAY "Name" AT 5,14
    DISPLAY "City" AT 5,45
    DISPLAY "S" AT 5,62

    DISPLAY "----------" AT 6,2
    DISPLAY "------------------------------" AT 6,14
    DISPLAY "---------------" AT 6,45
    DISPLAY "-" AT 6,62

    LET v_line = 7
    LET v_count = 0

    DECLARE customer_cursor CURSOR FOR
        SELECT customer_code, name, city, status
          FROM customers
         ORDER BY customer_code

    FOREACH customer_cursor INTO v_code, v_name, v_city, v_status
        LET v_count = v_count + 1

        DISPLAY v_code CLIPPED AT v_line, 2
        DISPLAY v_name CLIPPED AT v_line, 14
        DISPLAY v_city CLIPPED AT v_line, 45
        DISPLAY v_status AT v_line, 62

        LET v_line = v_line + 1

        IF v_line > 17 THEN
            CALL pause_screen()
            CLEAR WINDOW main_window

            DISPLAY "CUSTOMER LIST - CONTINUED" AT 2,2
            DISPLAY "-------------------------" AT 3,2

            DISPLAY "Code" AT 5,2
            DISPLAY "Name" AT 5,14
            DISPLAY "City" AT 5,45
            DISPLAY "S" AT 5,62

            DISPLAY "----------" AT 6,2
            DISPLAY "------------------------------" AT 6,14
            DISPLAY "---------------" AT 6,45
            DISPLAY "-" AT 6,62

            LET v_line = 7
        END IF
    END FOREACH

    IF v_count = 0 THEN
        DISPLAY "No customers found." AT 8,2
    END IF

    CALL pause_screen()
    CLEAR WINDOW main_window
END FUNCTION


FUNCTION find_customer()
    DEFINE p_customer_code CHAR(20)
    DEFINE v_name CHAR(100)
    DEFINE v_email CHAR(120)
    DEFINE v_city CHAR(80)
    DEFINE v_status CHAR(1)

    CLEAR WINDOW main_window

    DISPLAY "FIND CUSTOMER" AT 2,2
    DISPLAY "-------------" AT 3,2

    PROMPT "Customer code: " FOR p_customer_code

    SELECT name, email, city, status
      INTO v_name, v_email, v_city, v_status
      FROM customers
     WHERE customer_code = p_customer_code

    DISPLAY "Customer: ", v_name CLIPPED AT 7,2
    DISPLAY "Email   : ", v_email CLIPPED AT 8,2
    DISPLAY "City    : ", v_city CLIPPED AT 9,2
    DISPLAY "Status  : ", v_status AT 10,2

    CALL pause_screen()
    CLEAR WINDOW main_window
END FUNCTION


FUNCTION pause_screen()
    DEFINE dummy CHAR(1)

    PROMPT "Press ENTER to continue..." FOR dummy
END FUNCTION
