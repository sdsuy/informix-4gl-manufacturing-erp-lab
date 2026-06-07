DATABASE portfolio_db;

CREATE TABLE customers (
    customer_id SERIAL PRIMARY KEY,
    customer_code VARCHAR(20) NOT NULL UNIQUE,
    name VARCHAR(100) NOT NULL,
    email VARCHAR(120),
    city VARCHAR(80),
    status CHAR(1) DEFAULT 'A'
);

CREATE TABLE products (
    product_id SERIAL PRIMARY KEY,
    sku VARCHAR(30) NOT NULL UNIQUE,
    name VARCHAR(120) NOT NULL,
    unit_price DECIMAL(12,2) NOT NULL,
    active CHAR(1) DEFAULT 'Y'
);

CREATE TABLE inventory (
    inventory_id SERIAL PRIMARY KEY,
    product_id INTEGER NOT NULL,
    quantity_on_hand INTEGER NOT NULL DEFAULT 0,
    reorder_level INTEGER NOT NULL DEFAULT 0
);

ALTER TABLE inventory
ADD CONSTRAINT FOREIGN KEY (product_id)
REFERENCES products (product_id);

CREATE TABLE sales_orders (
    order_id SERIAL PRIMARY KEY,
    order_number VARCHAR(30) NOT NULL UNIQUE,
    customer_id INTEGER NOT NULL,
    order_date DATE NOT NULL,
    status VARCHAR(20) DEFAULT 'OPEN',
    total_amount DECIMAL(12,2) DEFAULT 0
);

ALTER TABLE sales_orders
ADD CONSTRAINT FOREIGN KEY (customer_id)
REFERENCES customers (customer_id);

CREATE TABLE sales_order_items (
    order_item_id SERIAL PRIMARY KEY,
    order_id INTEGER NOT NULL,
    product_id INTEGER NOT NULL,
    quantity INTEGER NOT NULL,
    unit_price DECIMAL(12,2) NOT NULL,
    line_total DECIMAL(12,2)
);

ALTER TABLE sales_order_items
ADD CONSTRAINT FOREIGN KEY (order_id)
REFERENCES sales_orders (order_id);

ALTER TABLE sales_order_items
ADD CONSTRAINT FOREIGN KEY (product_id)
REFERENCES products (product_id);
