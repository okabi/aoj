while line = STDIN.gets
  n, s = line.chomp.split(' ')
  n = n.to_i
  s = s.to_i

  break if n == 0 && s == 0
  numbers = (0..9).to_a
  ans = 0
  numbers.combination(n) do |ns|
    sum = 0
    ns.each do |v|
      sum += v
    end
    ans += 1 if sum == s
  end
  puts "#{ans}"
end
