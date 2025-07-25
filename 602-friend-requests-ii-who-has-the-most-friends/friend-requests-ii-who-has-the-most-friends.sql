SELECT id, SUM(num) AS num FROM (
    SELECT requester_id as id, COUNT(*) AS num FROM RequestAccepted GROUP BY requester_id
UNION ALL SELECT accepter_id, COUNT(*) FROM RequestAccepted GROUP BY accepter_id
) AS derived GROUP BY id ORDER BY num DESC LIMIT 1;

