/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"

@class NSURLAuthenticationChallengeInternal;

@interface NSURLAuthenticationChallenge : NSObject {
@private
	NSURLAuthenticationChallengeInternal *_internal;	// 4 = 0x4
}
+ (id)_authenticationChallengeForCFAuthChallenge:(CFURLAuthChallengeRef)cfauthChallenge sender:(id)sender;	// 0x310a39a9
- (id)init;	// 0x310a3785
- (id)initWithAuthenticationChallenge:(id)authenticationChallenge sender:(id)sender;	// 0x310a361d
- (id)initWithProtectionSpace:(id)protectionSpace proposedCredential:(id)credential previousFailureCount:(int)count failureResponse:(id)response error:(id)error sender:(id)sender;	// 0x310a3701
- (CFURLAuthChallengeRef)_createCFAuthChallenge;	// 0x310a38e9
- (void)dealloc;	// 0x310a35d5
- (id)error;	// 0x310a3521
- (id)failureResponse;	// 0x310a34e5
- (int)previousFailureCount;	// 0x310a348d
- (id)proposedCredential;	// 0x310a355d
- (id)protectionSpace;	// 0x310a3599
- (id)sender;	// 0x310a34a9
@end

