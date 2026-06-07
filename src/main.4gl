MAIN
    MENU "Manufacturing ERP"

        COMMAND "Customers"
            CALL customer_menu()

        COMMAND "Products"
            CALL product_menu()

        COMMAND "Inventory"
            CALL inventory_menu()

        COMMAND "Sales Orders"
            CALL sales_order_menu()

        COMMAND "Exit"
            EXIT MENU

    END MENU
END MAIN

FUNCTION customer_menu()
    DISPLAY "Customer module selected."
END FUNCTION

FUNCTION product_menu()
    DISPLAY "Product module selected."
END FUNCTION

FUNCTION inventory_menu()
    DISPLAY "Inventory module selected."
END FUNCTION

FUNCTION sales_order_menu()
    DISPLAY "Sales order module selected."
END FUNCTION