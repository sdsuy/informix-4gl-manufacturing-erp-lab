DATABASE portfolio_db;

INSERT INTO customers
(
    customer_code,
    name,
    email,
    city,
    status
)
VALUES
(
    'CUST-001',
    'Frame Gallery LLC',
    'orders@framegallery.example',
    'New York',
    'A'
);

INSERT INTO customers
(
    customer_code,
    name,
    email,
    city,
    status
)
VALUES
(
    'CUST-002',
    'North Art Supplies',
    'purchasing@northart.example',
    'Chicago',
    'A'
);

INSERT INTO customers
(
    customer_code,
    name,
    email,
    city,
    status
)
VALUES
(
    'CUST-003',
    'Santiago Demo Customer',
    'santiago.demo@example.com',
    'Montevideo',
    'A'
);

INSERT INTO products
(
    sku,
    name,
    unit_price,
    active
)
VALUES
(
    'FRAME-BLK-16X20',
    'Black Frame 16x20',
    24.90,
    'Y'
);

INSERT INTO products
(
    sku,
    name,
    unit_price,
    active
)
VALUES
(
    'FRAME-WHT-12X18',
    'White Frame 12x18',
    18.50,
    'Y'
);

INSERT INTO products
(
    sku,
    name,
    unit_price,
    active
)
VALUES
(
    'FRAME-OAK-20X30',
    'Oak Frame 20x30',
    39.90,
    'Y'
);

INSERT INTO inventory
(
    product_id,
    quantity_on_hand,
    reorder_level
)
VALUES
(
    1,
    100,
    20
);

INSERT INTO inventory
(
    product_id,
    quantity_on_hand,
    reorder_level
)
VALUES
(
    2,
    80,
    15
);

INSERT INTO inventory
(
    product_id,
    quantity_on_hand,
    reorder_level
)
VALUES
(
    3,
    45,
    10
);