select * 
from cinema
group by description
having description <> 'boring' 
and MOD(id,2) <> 0
order by rating desc;