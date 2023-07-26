require_relative '../thelastproblem'

RSpec.describe 'thelastproblem' do
  it 'sample one' do
    expected = 'Thank you, Twilight, and farewell!'
    expect(farewell 'Twilight').to eq expected
  end

  it 'sample two' do
    expected = 'Thank you, Twilight Luster, and farewell!'
    expect(farewell 'Twilight Luster').to eq expected
  end
end
