SELECT customer_number 
FROM (
    SELECT COUNT(*) AS ord, customer_number FROM ORDERS GROUP BY customer_number ORDER BY ord DESC LIMIT 1
) AS orde