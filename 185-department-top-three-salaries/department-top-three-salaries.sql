SELECT Department, Employee, Salary From 
(SELECT D.name AS Department, E.name AS Employee, E.salary AS salary,
DENSE_RANK() OVER(Partition BY D.id ORDER BY E.salary DESC ) AS rnk 
FROM Department D 
JOIN Employee E ON D.id =E.departmentId) AS derived WHERE rnk<=3