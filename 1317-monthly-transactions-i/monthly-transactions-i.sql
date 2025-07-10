SELECT 
    LEFT(T.trans_date,7) AS month, 
    T.country,
    (COUNT(T.id)) AS trans_count, 
    SUM(CASE WHEN T.state='approved' THEN 1 ELSE 0 END ) AS approved_count, 
    (SUM(Amount)) AS trans_total_amount, 
    (SUM(CASE WHEN T.state='approved' THEN amount ELSE 0 END )) AS approved_total_amount
FROM Transactions T
GROUP BY country, month;
