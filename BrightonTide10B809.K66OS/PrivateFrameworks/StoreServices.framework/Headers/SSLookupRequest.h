/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class SSAuthenticationContext, SSLookupProperties, NSString;

@interface SSLookupRequest : SSRequest <SSXPCCoding> {
	BOOL _authenticatesIfNeeded;	// 28 = 0x1c
	SSAuthenticationContext *_authenticationContext;	// 32 = 0x20
	SSLookupProperties *_properties;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) SSLookupProperties *_lookupProperties;	// G=0x354ffe05; 
@property(assign, nonatomic) BOOL authenticatesIfNeeded;	// G=0x354fffd5; S=0x354fffe5; @synthesize=_authenticatesIfNeeded
@property(copy, nonatomic) SSAuthenticationContext *authenticationContext;	// G=0x354ffff5; S=0x35500009; @synthesize=_authenticationContext
@property(copy, nonatomic) NSString *keyProfile;	// G=0x354ff8a5; S=0x354ff8e5; 
@property(assign, nonatomic) int localizationStyle;	// G=0x354ff8c5; S=0x354ff905; 
- (id)init;	// 0x354ff7b5
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x354ffeb5
// declared property getter: - (id)_lookupProperties;	// 0x354ffe05
// declared property getter: - (BOOL)authenticatesIfNeeded;	// 0x354fffd5
// declared property getter: - (id)authenticationContext;	// 0x354ffff5
- (id)copyXPCEncoding;	// 0x354ffe3d
- (void)dealloc;	// 0x354ff841
// declared property getter: - (id)keyProfile;	// 0x354ff8a5
// declared property getter: - (int)localizationStyle;	// 0x354ff8c5
// declared property setter: - (void)setAuthenticatesIfNeeded:(BOOL)needed;	// 0x354fffe5
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x35500009
// declared property setter: - (void)setKeyProfile:(id)profile;	// 0x354ff8e5
// declared property setter: - (void)setLocalizationStyle:(int)style;	// 0x354ff905
- (void)setValue:(id)value forRequestParameter:(id)requestParameter;	// 0x354ff925
- (BOOL)start;	// 0x354ffb11
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x354ffcad
- (void)startWithLookupBlock:(id)lookupBlock;	// 0x354ff945
- (id)valueForRequestParameter:(id)requestParameter;	// 0x354ffaf1
@end
