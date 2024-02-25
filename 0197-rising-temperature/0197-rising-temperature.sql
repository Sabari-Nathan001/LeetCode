SELECT w2.id
FROM weather w1,weather w2
WHERE datediff(w2.recordDate,w1.recordDate)=1
      AND w2.temperature > w1.temperature
