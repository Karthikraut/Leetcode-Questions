SELECT(
    SELECT num FROM MyNumbers GROUP BY num having count(num) =1 ORDER  BY num DESC LIMIT 1 
) AS num;


