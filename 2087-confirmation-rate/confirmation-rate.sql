SELECT S.user_id, 

    CASE 
    WHEN C.user_id IS NULL THEN 0 
    ELSE Round(SUM(C.action='confirmed')/COUNT(C.user_id),2) 
    END AS confirmation_rate

FROM Signups S LEFT JOIN Confirmations C ON S.user_id =C.user_id
GROUP BY S.user_id;