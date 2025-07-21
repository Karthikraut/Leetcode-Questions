SELECT id, COUNT(id) AS num FROM(
    SELECT accepter_id as id FROM RequestAccepted  
    UNION ALL 
    SELECT requester_id FROM RequestAccepted
) AS Cnt
GROUP BY id ORDER BY COUNT(id) DESC LIMIT 1