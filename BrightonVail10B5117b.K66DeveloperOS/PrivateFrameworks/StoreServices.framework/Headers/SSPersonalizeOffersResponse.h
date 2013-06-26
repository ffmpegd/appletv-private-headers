/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"

@class NSMutableDictionary, NSArray;

@interface SSPersonalizeOffersResponse : NSObject <SSXPCCoding> {
	NSMutableDictionary *_actionDisplayNames;	// 4 = 0x4
	NSMutableDictionary *_actionParameters;	// 8 = 0x8
	NSArray *_items;	// 12 = 0xc
	NSMutableDictionary *_priceDisplayNames;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSArray *personalizedItems;	// G=0x356d11fd; 
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x356d14ad
- (void)_setPersonalizedItems:(id)items;	// 0x356d1469
- (id)actionDisplayNameForItemType:(id)itemType;	// 0x356d11b5
- (id)actionParametersForItemIdentifier:(id)itemIdentifier;	// 0x356d127d
- (id)copyXPCEncoding;	// 0x356d1605
- (void)dealloc;	// 0x356d1129
// declared property getter: - (id)personalizedItems;	// 0x356d11fd
- (id)priceDisplayForItemType:(id)itemType;	// 0x356d1235
- (void)setActionDisplayNameString:(id)string forItemType:(id)itemType;	// 0x356d12c5
- (void)setActionParameters:(id)parameters forItemIdentifier:(id)itemIdentifier;	// 0x356d1351
- (void)setPriceDisplayString:(id)string forItemType:(id)itemType;	// 0x356d13dd
@end
