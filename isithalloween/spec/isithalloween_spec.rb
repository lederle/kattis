require_relative '../isithalloween'

RSpec.describe 'isithalloween' do
  it 'sample one' do
    expect(isit 'OCT 31').to eq 'yup'
  end

  it 'sample two' do
    expect(isit 'JUN 24').to eq 'nope'
  end

  it 'sample three' do
    expect(isit 'DEC 25').to eq 'yup'
  end
end
