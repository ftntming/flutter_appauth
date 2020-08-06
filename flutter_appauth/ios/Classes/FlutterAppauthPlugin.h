#import <Flutter/Flutter.h>
#import <AppAuth/AppAuth.h>

@interface FlutterAppauthPlugin : NSObject<FlutterPlugin>

@property(nonatomic, strong, nullable) id<OIDExternalUserAgentSession> currentAuthorizationFlow;
@property(nonatomic, strong, nullable) id<OIDExternalUserAgent> externalUserAgent;

@end
