CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
    DECLARE offset INT;
    SET offset = N - 1;
  RETURN (
        SELECT DISTINCT salary from employee ORDER BY SALARY DESC LIMIT offset,1
  );
END