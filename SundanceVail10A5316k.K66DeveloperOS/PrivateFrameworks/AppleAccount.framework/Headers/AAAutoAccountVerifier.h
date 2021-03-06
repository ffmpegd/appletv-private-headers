/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <NSObject.h> // Unknown library
#import "MSSearchDelegate.h"

@class NSOperationQueue, MSSearch, AAAccount;

@interface AAAutoAccountVerifier : NSObject <MSSearchDelegate> {
	NSOperationQueue *_requesterQueue;	// 4 = 0x4
	MSSearch *_search;	// 8 = 0x8
	AAAccount *_account;	// 12 = 0xc
	id _handler;	// 16 = 0x10
	int _attempts;	// 20 = 0x14
	BOOL _canceled;	// 24 = 0x18
}
@property(retain, nonatomic) AAAccount *account;	// G=0x37278b8d; S=0x37278b9d; @synthesize=_account
- (id)init;	// 0x37277ed9
- (id)initWithAccount:(id)account;	// 0x37277f6d
- (void).cxx_destruct;	// 0x37278bc5
- (void)_validateToken:(id)token;	// 0x372784b9
- (void)_verify;	// 0x372781a5
// declared property getter: - (id)account;	// 0x37278b8d
- (void)cancel;	// 0x37278119
- (BOOL)search:(id)search didFindResults:(id)results;	// 0x37278745
- (void)search:(id)search didFinishWithError:(id)error;	// 0x37278a65
- (void)sendVerificationEmail;	// 0x37277fc1
// declared property setter: - (void)setAccount:(id)account;	// 0x37278b9d
- (void)verifyWithHandler:(id)handler;	// 0x37278041
@end

