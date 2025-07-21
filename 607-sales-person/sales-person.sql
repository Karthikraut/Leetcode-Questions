SELECT name FROM SalesPerson 
WHERE name NOT IN (
    SELECT S.name
    FROM SalesPerson S JOIN Orders O ON S.sales_id =O.sales_id 
    JOIN Company C ON C.com_id =O.com_id  WHERE C.name="RED" 
) 