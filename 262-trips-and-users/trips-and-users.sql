SELECT  T.request_at AS Day,  ROUND((SUM(CASE WHEN status!='completed' THEN 1 ELSE 0 END)/2)/(COUNT(*)/2),2) AS "Cancellation Rate"
FROM Trips T JOIN Users U ON T.client_id = U.users_id
OR T.driver_id =U.users_id 
WHERE T.client_id NOT IN (SELECT users_id FROM Users WHERE role='client' AND banned='Yes') 
AND T.driver_id NOT IN (SELECT users_id FROM Users WHERE role='driver' AND banned='Yes') 
AND T.request_at>= "2013-10-01" AND T.request_at <= "2013-10-03"
GROUP BY T.request_at 