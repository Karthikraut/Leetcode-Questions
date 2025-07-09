SELECT customer_id, Count(visit_id) as count_no_trans FROM Visits V WHERE 
V.visit_id NOT IN (SELECT visit_id FROM Transactions)
GROUP BY customer_id; 