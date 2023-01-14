require_relative '../different'

RSpec.describe 'different' do
  it 'sample one' do
    expect(different(10, 12)).to eq 2  
  end

  it 'sample two' do
    expect(different(71293781758123, 72784)).to eq 71293781685339
  end

  it 'sample three' do
    expect(different(1, 12345677654321)).to be 12345677654320
  end
end
