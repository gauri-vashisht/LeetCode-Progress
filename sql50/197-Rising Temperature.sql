
select today.id
from weather today, weather yesterday
where datediff(today.recorddate,yesterday.recorddate)=1
and yesterday.temperature < today.temperature;