# @param {String} s
# @return {String[]}
def partition_string(s)
hash = Hash.new
p1 = 0
p2 = 0
while  p1 <= p2+1 && p2 < s.length

while hash[s[p1..p2]] != nil && p2 < s.length

p2+=1
end
hash[s[p1..p2]] = 0
p1 = p2 + 1
end
nu = []
hash.each_key do|key|
nu.push(key) if key != ""
end
return nu
    
end