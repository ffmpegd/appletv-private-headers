/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "SKProductsRequestDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVJSContext, SKProductsRequest;

__attribute__((visibility("hidden")))
@interface ATVJSSKProductsRequest : XXUnknownSuperclass <SKProductsRequestDelegate> {
	SKProductsRequest *_skRequest;	// 4 = 0x4
	ATVJSContext *_atvContext;	// 8 = 0x8
	OpaqueJSValue *_object;	// 12 = 0xc
	BOOL _isJSObjectProtected;	// 16 = 0x10
}
@property(retain, nonatomic) ATVJSContext *atvContext;	// G=0x16af49; S=0x16af59; @synthesize=_atvContext
@property(assign, nonatomic) BOOL isJSObjectProtected;	// G=0x16af89; S=0x16af99; @synthesize=_isJSObjectProtected
@property(assign, nonatomic) OpaqueJSValue *object;	// G=0x16af69; S=0x16af79; @synthesize=_object
@property(retain, nonatomic) SKProductsRequest *skRequest;	// G=0x16af29; S=0x16af39; @synthesize=_skRequest
+ (void)addConstructorToObject:(OpaqueJSValue *)object inContext:(OpaqueJSContext *)context;	// 0x16a5f1
// declared property getter: - (id)atvContext;	// 0x16af49
- (void)dealloc;	// 0x16ab7d
// declared property getter: - (BOOL)isJSObjectProtected;	// 0x16af89
// declared property getter: - (OpaqueJSValue *)object;	// 0x16af69
- (void)productsRequest:(id)request didReceiveResponse:(id)response;	// 0x16abf9
- (void)request:(id)request didFailWithError:(id)error;	// 0x16ae0d
- (void)requestDidFinish:(id)request;	// 0x16ad2d
// declared property setter: - (void)setAtvContext:(id)context;	// 0x16af59
// declared property setter: - (void)setIsJSObjectProtected:(BOOL)aProtected;	// 0x16af99
// declared property setter: - (void)setObject:(OpaqueJSValue *)object;	// 0x16af79
// declared property setter: - (void)setSkRequest:(id)request;	// 0x16af39
// declared property getter: - (id)skRequest;	// 0x16af29
@end

