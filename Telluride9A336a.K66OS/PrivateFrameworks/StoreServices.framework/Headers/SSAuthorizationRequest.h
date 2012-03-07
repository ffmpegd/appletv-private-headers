/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSCoding.h"

@class NSNumber;
@protocol SSAuthorizationRequestDelegate;

@interface SSAuthorizationRequest : SSRequest <SSCoding> {
@private
	NSNumber *_accountIdentifier;	// 36 = 0x24
	id _token;	// 40 = 0x28
}
@property(readonly, assign) NSNumber *accountIdentifier;	// G=0x34204511; 
@property(readonly, assign) id authorizationToken;	// G=0x342044d9; 
@property(assign, nonatomic) id<SSAuthorizationRequestDelegate> delegate;	// @dynamic
- (id)init;	// 0x34204339
- (id)initWithAuthorizationToken:(id)authorizationToken accountIdentifier:(id)identifier;	// 0x3420434d
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x342045f9
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x3420469d
// declared property getter: - (id)accountIdentifier;	// 0x34204511
// declared property getter: - (id)authorizationToken;	// 0x342044d9
- (id)copyPropertyListEncoding;	// 0x34204549
- (void *)copyXPCEncoding;	// 0x342045c5
- (void)dealloc;	// 0x34204479
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x342046d9
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x342047ad
@end
