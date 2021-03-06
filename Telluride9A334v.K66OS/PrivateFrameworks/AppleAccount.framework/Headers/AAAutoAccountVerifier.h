/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "MSSearchDelegate.h"
#import <NSObject.h> // Unknown library

@class NSOperationQueue, MSSearch, AAAccount;

@interface AAAutoAccountVerifier : NSObject <MSSearchDelegate> {
	NSOperationQueue *_requesterQueue;	// 4 = 0x4
	MSSearch *_search;	// 8 = 0x8
	AAAccount *_account;	// 12 = 0xc
	id _handler;	// 16 = 0x10
	int _attempts;	// 20 = 0x14
	BOOL _canceled;	// 24 = 0x18
}
@property(retain, nonatomic) AAAccount *account;	// G=0x33a7316d; S=0x33a7317d; @synthesize=_account
- (id)init;	// 0x33a72599
- (id)initWithAccount:(id)account;	// 0x33a72619
- (void)_validateToken:(id)token;	// 0x33a72bdd
- (void)_verify;	// 0x33a728c1
// declared property getter: - (id)account;	// 0x33a7316d
- (void)cancel;	// 0x33a72829
- (void)dealloc;	// 0x33a72659
- (BOOL)search:(id)search didFindResults:(id)results;	// 0x33a72e01
- (void)search:(id)search didFinishWithError:(id)error;	// 0x33a73059
- (void)sendVerificationEmail;	// 0x33a726e1
// declared property setter: - (void)setAccount:(id)account;	// 0x33a7317d
- (void)verifyWithHandler:(id)handler;	// 0x33a72755
@end

