SELECT E1.name
FROM Employee E1 WHERE E1.id IN (SELECT managerId FROM Employee E2 GROUP BY E2.managerId HAVING COUNT(E2.managerId)>= 5 );