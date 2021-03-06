/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SKProductsRequestDelegate.h"

@class SKProductsRequest, ATVJSContext;

__attribute__((visibility("hidden")))
@interface ATVJSSKProductsRequest : XXUnknownSuperclass <SKProductsRequestDelegate> {
	SKProductsRequest *_skRequest;	// 4 = 0x4
	ATVJSContext *_atvContext;	// 8 = 0x8
	OpaqueJSValue *_object;	// 12 = 0xc
	BOOL _isJSObjectProtected;	// 16 = 0x10
}
@property(retain, nonatomic) ATVJSContext *atvContext;	// G=0x16c971; S=0x16c981; @synthesize=_atvContext
@property(assign, nonatomic) BOOL isJSObjectProtected;	// G=0x16c9b1; S=0x16c9c1; @synthesize=_isJSObjectProtected
@property(assign, nonatomic) OpaqueJSValue *object;	// G=0x16c991; S=0x16c9a1; @synthesize=_object
@property(retain, nonatomic) SKProductsRequest *skRequest;	// G=0x16c951; S=0x16c961; @synthesize=_skRequest
+ (void)addConstructorToObject:(OpaqueJSValue *)object inContext:(OpaqueJSContext *)context;	// 0x16c019
// declared property getter: - (id)atvContext;	// 0x16c971
- (void)dealloc;	// 0x16c5a5
// declared property getter: - (BOOL)isJSObjectProtected;	// 0x16c9b1
// declared property getter: - (OpaqueJSValue *)object;	// 0x16c991
- (void)productsRequest:(id)request didReceiveResponse:(id)response;	// 0x16c621
- (void)request:(id)request didFailWithError:(id)error;	// 0x16c835
- (void)requestDidFinish:(id)request;	// 0x16c755
// declared property setter: - (void)setAtvContext:(id)context;	// 0x16c981
// declared property setter: - (void)setIsJSObjectProtected:(BOOL)aProtected;	// 0x16c9c1
// declared property setter: - (void)setObject:(OpaqueJSValue *)object;	// 0x16c9a1
// declared property setter: - (void)setSkRequest:(id)request;	// 0x16c961
// declared property getter: - (id)skRequest;	// 0x16c951
@end

