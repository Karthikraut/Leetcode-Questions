WITH Filtered AS (
    SELECT * FROM Stadium WHERE people>=100
),
ConsecutiveGroups AS (
    SELECT *, id-ROW_NUMBER() OVER(ORDER BY id) AS grp FROM Filtered
),
Grouped AS (
    SELECT grp FROM ConsecutiveGroups
    GROUP BY grp
    HAVING COUNT(*) >=3
)
SELECT c.id, c.visit_date, c.people 
FROM ConsecutiveGroups C
JOIN Grouped g ON C.grp = g.grp
ORDER BY C.visit_date;