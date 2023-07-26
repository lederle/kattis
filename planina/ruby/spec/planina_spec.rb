require_relative '../planina'

RSpec.describe 'planina' do
  it 'sample one' do
    expect(planina 1).to eq 9
  end

  it 'sample two' do
    expect(planina 2).to eq 25
  end

  it 'sample three' do
    expect(planina 5).to eq 1089
  end
end
