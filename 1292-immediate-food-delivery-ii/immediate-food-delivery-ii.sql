WITH CTE AS(
   SELECT * FROM (
     SELECT delivery_id, order_date AS ord, customer_pref_delivery_date AS pref, RANK() over(partition by customer_id ORDER BY order_date) AS rnk FROM delivery
   ) AS derived WHERE rnk=1
)
SELECT
ROUND((SELECT COUNT(*) FROM CTE WHERE ord=pref)/COUNT(*),4)*100 
AS immediate_percentage 
FROM CTE;