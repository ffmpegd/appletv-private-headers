/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoding.h"
#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURLAuthenticationChallengeInternal;

@interface NSURLAuthenticationChallenge : NSObject <NSCoding> {
@private
	NSURLAuthenticationChallengeInternal *_internal;	// 4 = 0x4
}
@property(retain) id sender;	// G=0x310c4a05; S=0x310c4c01; converted property
+ (id)_createAuthenticationChallengeForCFAuthChallenge:(CFURLAuthChallengeRef)cfauthChallenge sender:(id)sender;	// 0x310c4af5
- (id)init;	// 0x310c45e5
- (id)initWithAuthenticationChallenge:(id)authenticationChallenge sender:(id)sender;	// 0x310c4691
- (id)initWithCoder:(id)coder;	// 0x310c4a99
- (id)initWithProtectionSpace:(id)protectionSpace proposedCredential:(id)credential previousFailureCount:(int)count failureResponse:(id)response error:(id)error sender:(id)sender;	// 0x310c45fd
- (CFURLAuthChallengeRef)_createCFAuthChallenge;	// 0x310c4b31
- (id)_initWithCFAuthChallenge:(CFURLAuthChallengeRef)cfauthChallenge sender:(id)sender;	// 0x310c4781
- (void)dealloc;	// 0x310c4889
- (void)encodeWithCoder:(id)coder;	// 0x310c4a49
- (id)error;	// 0x310c497d
- (id)failureResponse;	// 0x310c49c1
- (int)previousFailureCount;	// 0x310c495d
- (id)proposedCredential;	// 0x310c4919
- (id)protectionSpace;	// 0x310c48d5
// converted property getter: - (id)sender;	// 0x310c4a05
// converted property setter: - (void)setSender:(id)sender;	// 0x310c4c01
@end

