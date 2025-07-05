# Write your MySQL query statement below
select (select DISTINCT salary from Employee ORDER BY salary DESC LIMIT 1,1) as SecondHighestSalary ;