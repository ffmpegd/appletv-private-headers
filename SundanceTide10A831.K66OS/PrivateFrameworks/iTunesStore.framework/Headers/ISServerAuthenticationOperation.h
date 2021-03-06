/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class NSNumber, SSAuthenticationContext, NSURL, ISDialog;

@interface ISServerAuthenticationOperation : ISOperation {
	NSNumber *_authenticatedAccountDSID;	// 60 = 0x3c
	SSAuthenticationContext *_authenticationContext;	// 64 = 0x40
	ISDialog *_dialog;	// 68 = 0x44
	NSURL *_redirectURL;	// 72 = 0x48
}
@property(retain) NSNumber *authenticatedAccountDSID;	// G=0x31438971; S=0x31438985; @synthesize=_authenticatedAccountDSID
@property(retain) SSAuthenticationContext *authenticationContext;	// G=0x3143894d; S=0x31438961; @synthesize=_authenticationContext
@property(retain) ISDialog *dialog;	// G=0x31438995; S=0x314389a9; @synthesize=_dialog
@property(retain) NSURL *redirectURL;	// G=0x314389b9; S=0x314389cd; @synthesize=_redirectURL
- (BOOL)_copyAccountIdentifier:(id *)identifier returningError:(id *)error;	// 0x3143840d
- (id)_copyAuthenticationContext;	// 0x314384b5
- (id)_copyButtonForDialogSkip;	// 0x31438631
- (BOOL)_copySelectedButton:(id *)button returningError:(id *)error;	// 0x314386ed
- (BOOL)_handleSelectedButton:(id)button;	// 0x314387e5
- (BOOL)_shouldAuthenticateForButton:(id)button;	// 0x314388d1
// declared property getter: - (id)authenticatedAccountDSID;	// 0x31438971
// declared property getter: - (id)authenticationContext;	// 0x3143894d
- (void)dealloc;	// 0x31437d71
// declared property getter: - (id)dialog;	// 0x31438995
// declared property getter: - (id)redirectURL;	// 0x314389b9
- (void)run;	// 0x31437e19
// declared property setter: - (void)setAuthenticatedAccountDSID:(id)dsid;	// 0x31438985
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x31438961
// declared property setter: - (void)setDialog:(id)dialog;	// 0x314389a9
// declared property setter: - (void)setRedirectURL:(id)url;	// 0x314389cd
@end

