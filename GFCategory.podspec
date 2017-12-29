#
#  Be sure to run `pod spec lint GFCategory.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|


  s.name         = "GFCategory"
  s.version      = "0.0.1"
  s.summary      = "Increase the efficiency of development"
  s.description  = ""Increase the efficiency of development
  s.homepage     = "https://github.com/JiGaoFei
"

  s.license      = "MIT"
  # s.license      = { :type => "MIT", :file => "FILE_LICENSE" }


  s.author             = { "jigaofei" => "528096212@qq.com" }


  s.platform     = :ios, "8.0"

  s.source       = { :git => "http://JiGaoFei/GFCategory.git", :tag => "#{s.version}" }

  s.source_files  = "GFCategorys", "GFCategorys/**/*.{h,m}"
  s.exclude_files = "Classes/Exclude"


 s.frameworks = "UIKit", "QuartzCore"

 

  s.requires_arc = true

  # s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  # s.dependency "JSONKit", "~> 1.4"

end
