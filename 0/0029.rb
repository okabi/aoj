input = STDIN.gets.chomp
strs = input.split(" ")

max_length = 0
max_word = ""
max_include = 0
max_included_word = ""
dict = {}

strs.each do |s|
  if max_length < s.size
    max_length = s.size
    max_word = s
  end
  if dict.key?(s)
    dict[s] += 1
    if max_include < dict[s]
      max_include = dict[s]
      max_included_word = s
    end
  else
    dict[s] = 1
  end
end

puts "#{max_included_word} #{max_word}"
