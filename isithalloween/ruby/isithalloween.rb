def isit date
  case [date == 'OCT 31', date == 'DEC 25']
  when [true, false] then 'yup'
  when [false, true] then 'yup'
  else 'nope'
  end
end
