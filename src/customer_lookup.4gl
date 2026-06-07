MAIN
    DEFINE p_customer_code CHAR(20)
    DEFINE v_name CHAR(100)
    DEFINE v_email CHAR(120)
    DEFINE v_city CHAR(80)
    DEFINE v_status CHAR(1)

    OPEN SESSION session_id
        TO DATABASE portfolio_db
        AS USER "informix"
        PASSWORD "in4mix"

    LET p_customer_code = "CUST-003"

    SELECT name, email, city, status
        INTO v_name, v_email, v_city, v_status
        FROM customers
        WHERE customer_code = p_customer_code

    DISPLAY "Customer: ", v_name
    DISPLAY "Email   : ", v_email
    DISPLAY "City    : ", v_city
    DISPLAY "Status  : ", v_status
END MAIN