/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class SSAuthenticationContext, NSURL, SSURLBagContext, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface ISDataProvider : NSObject <NSCopying> {
@private
	SSAuthenticationContext *_authenticationContext;	// 4 = 0x4
	NSNumber *_authenticatedAccountDSID;	// 8 = 0x8
	SSURLBagContext *_bagContext;	// 12 = 0xc
	long long _contentLength;	// 16 = 0x10
	NSString *_contentType;	// 24 = 0x18
	id _output;	// 28 = 0x1c
	NSURL *_redirectURL;	// 32 = 0x20
}
@property(retain) NSNumber *authenticatedAccountDSID;	// G=0x3334faf5; S=0x3334fb09; @synthesize=_authenticatedAccountDSID
@property(retain) SSAuthenticationContext *authenticationContext;	// G=0x3334fabd; S=0x3334fad1; @synthesize=_authenticationContext
@property(retain) SSURLBagContext *bagContext;	// G=0x3334fb2d; S=0x3334fb41; @synthesize=_bagContext
@property(assign) long long contentLength;	// G=0x3334fb65; S=0x3334fb99; @synthesize=_contentLength
@property(retain) NSString *contentType;	// G=0x3334fbcd; S=0x3334fbe1; @synthesize=_contentType
@property(retain) id output;	// G=0x3334fc05; S=0x3334fc19; @synthesize=_output
@property(retain) NSURL *redirectURL;	// G=0x3334fc3d; S=0x3334fc51; @synthesize=_redirectURL
+ (id)provider;	// 0x3334f949
// declared property getter: - (id)authenticatedAccountDSID;	// 0x3334faf5
// declared property getter: - (id)authenticationContext;	// 0x3334fabd
// declared property getter: - (id)bagContext;	// 0x3334fb2d
- (BOOL)canStreamContentLength:(long long)length error:(id *)error;	// 0x3334f991
- (void)closeStream;	// 0x3334f9a1
- (void)configureFromProvider:(id)provider;	// 0x3334f9a5
// declared property getter: - (long long)contentLength;	// 0x3334fb65
// declared property getter: - (id)contentType;	// 0x3334fbcd
- (id)copyWithZone:(NSZone *)zone;	// 0x3334f8b1
- (void)dealloc;	// 0x3334f7d1
- (BOOL)isStream;	// 0x3334f9fd
- (void)migrateOutputFromSubProvider:(id)subProvider;	// 0x3334fa01
// declared property getter: - (id)output;	// 0x3334fc05
- (BOOL)parseData:(id)data returningError:(id *)error;	// 0x3334fa65
// declared property getter: - (id)redirectURL;	// 0x3334fc3d
- (void)resetStream;	// 0x3334fa59
// declared property setter: - (void)setAuthenticatedAccountDSID:(id)dsid;	// 0x3334fb09
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x3334fad1
// declared property setter: - (void)setBagContext:(id)context;	// 0x3334fb41
// declared property setter: - (void)setContentLength:(long long)length;	// 0x3334fb99
// declared property setter: - (void)setContentType:(id)type;	// 0x3334fbe1
// declared property setter: - (void)setOutput:(id)output;	// 0x3334fc19
// declared property setter: - (void)setRedirectURL:(id)url;	// 0x3334fc51
- (void)setup;	// 0x3334fa89
- (long long)streamedBytes;	// 0x3334fa5d
@end

