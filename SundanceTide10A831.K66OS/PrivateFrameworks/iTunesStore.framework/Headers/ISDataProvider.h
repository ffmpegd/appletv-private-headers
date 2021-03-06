/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "iTunesStore-Structs.h"

@class NSNumber, SSURLBagContext, SSAuthenticationContext, ISOperation, NSURL, NSString;

@interface ISDataProvider : NSObject <NSCopying> {
	SSAuthenticationContext *_authenticationContext;	// 4 = 0x4
	NSNumber *_authenticatedAccountDSID;	// 8 = 0x8
	SSURLBagContext *_bagContext;	// 12 = 0xc
	long long _contentLength;	// 16 = 0x10
	NSString *_contentType;	// 24 = 0x18
	id _output;	// 28 = 0x1c
	ISOperation *_parentOperation;	// 32 = 0x20
	NSURL *_redirectURL;	// 36 = 0x24
	int _errorHandlerResponseType;	// 40 = 0x28
}
@property(retain) NSNumber *authenticatedAccountDSID;	// G=0x3141fdd5; S=0x3141fde9; @synthesize=_authenticatedAccountDSID
@property(retain) SSAuthenticationContext *authenticationContext;	// G=0x3141fdb1; S=0x3141fdc5; @synthesize=_authenticationContext
@property(retain) SSURLBagContext *bagContext;	// G=0x3141fdf9; S=0x3141fe0d; @synthesize=_bagContext
@property(assign) long long contentLength;	// G=0x3141fe1d; S=0x3141fe51; @synthesize=_contentLength
@property(retain) NSString *contentType;	// G=0x3141fe85; S=0x3141fe99; @synthesize=_contentType
@property(assign) int errorHandlerResponseType;	// G=0x3141fea9; S=0x3141febd; @synthesize=_errorHandlerResponseType
@property(retain) id output;	// G=0x3141fed5; S=0x3141fee9; @synthesize=_output
@property(assign) ISOperation *parentOperation;	// G=0x3141fef9; S=0x3141ff0d; @synthesize=_parentOperation
@property(retain) NSURL *redirectURL;	// G=0x3141ff25; S=0x3141ff39; @synthesize=_redirectURL
+ (id)provider;	// 0x3141fa8d
// declared property getter: - (id)authenticatedAccountDSID;	// 0x3141fdd5
// declared property getter: - (id)authenticationContext;	// 0x3141fdb1
// declared property getter: - (id)bagContext;	// 0x3141fdf9
- (BOOL)canStreamContentLength:(long long)length error:(id *)error;	// 0x3141fad5
- (void)closeStream;	// 0x3141fae5
- (void)configureFromProvider:(id)provider;	// 0x3141fae9
// declared property getter: - (long long)contentLength;	// 0x3141fe1d
// declared property getter: - (id)contentType;	// 0x3141fe85
- (id)copyWithZone:(NSZone *)zone;	// 0x3141f9f5
- (void)dealloc;	// 0x3141f91d
// declared property getter: - (int)errorHandlerResponseType;	// 0x3141fea9
- (BOOL)isStream;	// 0x3141fb41
- (void)migrateOutputFromSubProvider:(id)subProvider;	// 0x3141fb45
// declared property getter: - (id)output;	// 0x3141fed5
// declared property getter: - (id)parentOperation;	// 0x3141fef9
- (BOOL)parseData:(id)data returningError:(id *)error;	// 0x3141fba9
// declared property getter: - (id)redirectURL;	// 0x3141ff25
- (void)resetStream;	// 0x3141fb9d
- (BOOL)runAuthorizationDialog:(id)dialog error:(id *)error;	// 0x3141fc01
// declared property setter: - (void)setAuthenticatedAccountDSID:(id)dsid;	// 0x3141fde9
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x3141fdc5
// declared property setter: - (void)setBagContext:(id)context;	// 0x3141fe0d
// declared property setter: - (void)setContentLength:(long long)length;	// 0x3141fe51
// declared property setter: - (void)setContentType:(id)type;	// 0x3141fe99
// declared property setter: - (void)setErrorHandlerResponseType:(int)type;	// 0x3141febd
// declared property setter: - (void)setOutput:(id)output;	// 0x3141fee9
// declared property setter: - (void)setParentOperation:(id)operation;	// 0x3141ff0d
// declared property setter: - (void)setRedirectURL:(id)url;	// 0x3141ff39
- (void)setup;	// 0x3141fbcd
- (long long)streamedBytes;	// 0x3141fba1
@end

