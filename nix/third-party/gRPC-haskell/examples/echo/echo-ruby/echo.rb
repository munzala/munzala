# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: echo.proto

require 'google/protobuf'

Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "echo.EchoRequest" do
    optional :message, :string, 1
  end
  add_message "echo.AddRequest" do
    optional :addX, :fixed32, 1
    optional :addY, :fixed32, 2
  end
  add_message "echo.AddResponse" do
    optional :answer, :fixed32, 1
  end
end

module Echo
  EchoRequest = Google::Protobuf::DescriptorPool.generated_pool.lookup("echo.EchoRequest").msgclass
  AddRequest = Google::Protobuf::DescriptorPool.generated_pool.lookup("echo.AddRequest").msgclass
  AddResponse = Google::Protobuf::DescriptorPool.generated_pool.lookup("echo.AddResponse").msgclass
end
