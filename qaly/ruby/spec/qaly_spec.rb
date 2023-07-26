require_relative '../qaly'

RSpec.describe 'qaly' do
  it 'sample one' do
    quality = [1.0, 0.7, 0.9, 0.5, 0.2]  
    years = [12.0, 5.2, 10.7, 20.4, 30.0]
    expect(qaly(quality, years)).to eq 41.470
  end

  it 'sample two' do

  end
end
