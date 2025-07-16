SELECT results.title AS results FROM (
    SELECT M.title ,AVG(Mr.rating) AS avr
    FROM  Movies M JOIN MovieRating Mr On M.movie_id =Mr.movie_id
    WHERE MONTH(Mr.created_at) =2 AND YEAR(Mr.created_at)=2020
    GROUP BY M.movie_id ORDER BY AVR DESC , title ASC limit 1 
) AS results
UNION ALL
SELECT results.user_id
FROM (
    SELECT U.name AS user_id,COUNT(U.user_id) AS cnt
    FROM Users U JOIN MovieRating Mr ON U.user_id = Mr.user_id
    GROUP BY U.user_id ORDER BY cnt DESC, user_id ASC LIMIT 1
)  AS results
