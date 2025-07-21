SELECT l.book_id as book_id, l.title AS title, l.author AS author, l.genre AS genre, l.publication_year AS publication_year, l.total_copies AS current_borrowers
FROM library_books l JOIN borrowing_records b ON l.book_id =b.book_id
WHERE b.return_date IS NULL
GROUP BY l.book_id HAVING COUNT(*) = MAX(l.total_copies) ORDER BY MAX(l.total_copies) DESC, title
