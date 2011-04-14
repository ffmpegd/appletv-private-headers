/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <AYOperation.h> // Unknown library

@class DAVSession, NSString, MobileCalDAVAccount, NSURL;

@interface CalDAVCurrentUserPrincipalOperation : AYOperation {
	id _delegate;	// 64 = 0x40
	MobileCalDAVAccount *_account;	// 68 = 0x44
	DAVSession *_session;	// 72 = 0x48
	int _redirectCount;	// 76 = 0x4c
	BOOL _thisIsAGuess;	// 80 = 0x50
	NSString *_currentUserPrincipal;	// 84 = 0x54
}
@property(assign) MobileCalDAVAccount *account;	// G=0x32d128c1; S=0x32d128d1; @synthesize=_account
@property(retain) NSString *currentUserPrincipal;	// G=0x32d13921; S=0x32d13965; @synthesize=_currentUserPrincipal
@property(assign) id delegate;	// G=0x32d128a1; S=0x32d128b1; @synthesize=_delegate
@property(readonly, assign) NSString *password;	// G=0x32d12a05; 
@property(retain) DAVSession *session;	// G=0x32d13909; S=0x32d13939; @synthesize=_session
@property(readonly, assign) NSURL *url;	// G=0x32d12a45; 
@property(readonly, assign) NSString *username;	// G=0x32d12a25; 
- (id)initWithAccount:(id)account delegate:(id)delegate;	// 0x32d12ad9
- (id)_sessionWithURL:(id)url;	// 0x32d128e1
// declared property getter: - (id)account;	// 0x32d128c1
// declared property getter: - (id)currentUserPrincipal;	// 0x32d13921
- (void)dealloc;	// 0x32d12a65
// declared property getter: - (id)delegate;	// 0x32d128a1
- (void)finish;	// 0x32d129a5
- (void)getCurrentUserPrincipal;	// 0x32d12b55
// declared property getter: - (id)password;	// 0x32d12a05
- (void)performComplete2:(id)a2;	// 0x32d12d71
- (void)performComplete:(id)complete;	// 0x32d13235
// declared property getter: - (id)session;	// 0x32d13909
// declared property setter: - (void)setAccount:(id)account;	// 0x32d128d1
// declared property setter: - (void)setCurrentUserPrincipal:(id)principal;	// 0x32d13965
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32d128b1
// declared property setter: - (void)setSession:(id)session;	// 0x32d13939
// declared property getter: - (id)url;	// 0x32d12a45
// declared property getter: - (id)username;	// 0x32d12a25
@end
