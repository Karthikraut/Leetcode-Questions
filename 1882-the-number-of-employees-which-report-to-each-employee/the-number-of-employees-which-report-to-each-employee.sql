SELECT E.reports_to AS employee_id, 
(SELECT name FROM Employees WHERE employee_id=E.reports_to) AS name, 
COUNT(DISTINCT(E.employee_id)) AS reports_count, 
ROUND(AVG(E.age),0) AS average_age FROM Employees E GROUP BY E.reports_to 
HAVING E.reports_to IS NOT NULL;