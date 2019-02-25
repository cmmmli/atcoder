year, month, day = gets.split('/').map(&:to_i)
if year > 2019
  puts 'TBD'
elsif year < 2019
  puts 'Heisei'
else
  if month > 4
    puts 'TBD'
  elsif month < 4
    puts 'Heisei'
  else
    if day > 30
      puts 'TBD'
    else
      puts 'Heisei'
    end
  end
end