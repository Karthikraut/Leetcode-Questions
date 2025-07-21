SELECT customer_id
FROM Customer C JOIN Product P ON C.product_key =P.product_key
GROUP BY C.customer_id HAVING COUNT(DISTINCT(C.product_key)) = (SELECT COUNT(product_key) FROM Product)