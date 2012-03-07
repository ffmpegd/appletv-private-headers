/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
 */

#import <NSObject.h> // Unknown library

@class CertUITrustManager, NSString;

@interface CertUIConnectionDelegate : NSObject {
	CertUITrustManager *_trustManager;	// 4 = 0x4
	id _forwardingDelegate;	// 8 = 0x8
	NSString *_connectionDisplayName;	// 12 = 0xc
	struct {
		unsigned canAuthenticateAgainstProtectionSpace : 1;
		unsigned didReceiveAuthenticationChallenge : 1;
	} _delegateRespondsTo;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *connectionDisplayName;	// G=0x34f76795; S=0x34f767a5; @synthesize=_connectionDisplayName
@property(assign, nonatomic) id forwardingDelegate;	// G=0x34f76785; S=0x34f75f99; @synthesize=_forwardingDelegate
+ (id)defaultServiceForProtocol:(id)protocol;	// 0x34f76079
- (void)_continueConnectionWithResponse:(int)response challenge:(id)challenge service:(id)service;	// 0x34f76225
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x34f761b5
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x34f763e5
// declared property getter: - (id)connectionDisplayName;	// 0x34f76795
- (void)dealloc;	// 0x34f75f4d
// declared property getter: - (id)forwardingDelegate;	// 0x34f76785
- (id)forwardingTargetForSelector:(SEL)selector;	// 0x34f76069
- (BOOL)respondsToSelector:(SEL)selector;	// 0x34f7601d
// declared property setter: - (void)setConnectionDisplayName:(id)name;	// 0x34f767a5
// declared property setter: - (void)setForwardingDelegate:(id)delegate;	// 0x34f75f99
@end

