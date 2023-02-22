SELECT S.`student_id`, S.`student_name`
FROM (SELECT DISTINCT EE.`student_id`
FROM exams AS EE
WHERE EE.`student_id` NOT IN (SELECT DISTINCT EEE.`student_id`
FROM exams AS EEE
WHERE (EEE.`exam_id`, EEE.`score`) IN (SELECT E.`exam_id`, MAX(E.`score`) AS max_sc
FROM exams AS E
GROUP BY E.`exam_id`
UNION
SELECT E.`exam_id`, MIN(E.`score`) AS min_sc
FROM exams AS E
GROUP BY E.`exam_id`))) AS tmp
LEFT JOIN Students AS S
ON tmp.student_id = S.`student_id`;