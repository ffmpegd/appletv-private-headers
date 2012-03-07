/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSCoding.h"

@class NSArray;
@protocol SSPersonalizeOffersDelegate;

@interface SSPersonalizeOffersRequest : SSRequest <SSCoding> {
@private
	NSArray *_items;	// 36 = 0x24
}
@property(assign, nonatomic) id<SSPersonalizeOffersDelegate> delegate;	// @dynamic
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x32504bf5; 
- (id)initWithItems:(id)items;	// 0x32504b55
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x32504fdd
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x325051dd
- (void)_sendResponseToDelegate:(id)delegate;	// 0x32504f61
- (id)copyPropertyListEncoding;	// 0x32505219
- (void *)copyXPCEncoding;	// 0x3250535d
- (void)dealloc;	// 0x32504ba9
- (BOOL)handleFinishResponse:(id)response error:(id *)error;	// 0x32504c2d
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x32504f39
// declared property getter: - (id)items;	// 0x32504bf5
@end

