#!/bin/bash

# usage: kc <problem-name>
# output: new directory of that name, with file of that
#         name, runner.rb,  and a spec file in spec/

set -e

problem_name=$1
dir_name=${problem_name}

mkdir $dir_name
cd $dir_name

exercise_file=${problem_name}.rb
runner_file=${problem_name}_runner.rb
test_file=${problem_name}_spec.rb

touch $exercise_file $runner_file
mkdir spec
cd spec
touch $test_file
cd ..

echo "require_relative '$problem_name'"  >> $runner_file
echo "require_relative '../$problem_name'" >> spec/$test_file

cd spec
cat <<- EOF >> $test_file

RSpec.describe '$problem_name' do
  it 'sample one' do
  
  end

  it 'sample two' do

  end
end
EOF
