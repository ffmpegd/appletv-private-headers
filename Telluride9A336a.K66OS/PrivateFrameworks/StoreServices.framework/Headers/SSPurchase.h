/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"
#import "SSCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSDictionary, SSItemOffer, NSArray, NSMutableDictionary, SSURLRequestProperties, NSNumber, SSItem, NSString;

@interface SSPurchase : NSObject <SSCoding, NSCoding, NSCopying> {
@private
	NSNumber *_accountIdentifier;	// 4 = 0x4
	NSString *_buyParameters;	// 8 = 0x8
	NSMutableDictionary *_downloadProperties;	// 12 = 0xc
	NSArray *_filteredAssetTypes;	// 16 = 0x10
	SSItem *_item;	// 20 = 0x14
	SSItemOffer *_itemOffer;	// 24 = 0x18
	long long _placeholderDownloadIdentifier;	// 28 = 0x1c
	SSURLRequestProperties *_requestProperties;	// 36 = 0x24
	NSString *_uniqueIdentifier;	// 40 = 0x28
}
@property(retain, nonatomic) NSNumber *accountIdentifier;	// G=0x341e8b2d; S=0x341e8b3d; @synthesize=_accountIdentifier
@property(copy, nonatomic) NSString *buyParameters;	// G=0x341e8b61; S=0x341e8b71; @synthesize=_buyParameters
@property(retain) id downloadMetadata;	// G=0x341e8ae9; S=0x341e8aed; converted property
@property(copy, nonatomic) NSDictionary *downloadProperties;	// G=0x341e7d95; S=0x341e7e05; 
@property(copy, nonatomic) NSArray *filteredAssetTypes;	// G=0x341e8b95; S=0x341e8ba5; @synthesize=_filteredAssetTypes
@property(readonly, assign, nonatomic) SSItem *item;	// G=0x341e8bc9; @synthesize=_item
@property(readonly, assign, nonatomic) SSItemOffer *itemOffer;	// G=0x341e8bd9; @synthesize=_itemOffer
@property(assign, nonatomic) long long placeholderDownloadIdentifier;	// G=0x341e8be9; S=0x341e8c01; @synthesize=_placeholderDownloadIdentifier
@property(copy, nonatomic) SSURLRequestProperties *requestProperties;	// G=0x341e7dcd; S=0x341e7e49; 
@property(readonly, assign, nonatomic) NSString *uniqueIdentifier;	// G=0x341e8ab1; 
+ (id)purchaseWithBuyParameters:(id)buyParameters;	// 0x341e7cf5
- (id)init;	// 0x341e7a95
- (id)initWithCoder:(id)coder;	// 0x341e7f61
- (id)initWithItem:(id)item;	// 0x341e7aa5
- (id)initWithItem:(id)item offer:(id)offer;	// 0x341e7ad9
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x341e87fd
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x341e8a75
- (id)_initSSPurchase;	// 0x341e7a29
// declared property getter: - (id)accountIdentifier;	// 0x341e8b2d
// declared property getter: - (id)buyParameters;	// 0x341e8b61
- (id)copyPropertyListEncoding;	// 0x341e85e9
- (id)copyWithZone:(NSZone *)zone;	// 0x341e848d
- (void *)copyXPCEncoding;	// 0x341e87c9
- (void)dealloc;	// 0x341e7c1d
// converted property getter: - (id)downloadMetadata;	// 0x341e8ae9
// declared property getter: - (id)downloadProperties;	// 0x341e7d95
- (void)encodeWithCoder:(id)coder;	// 0x341e8289
// declared property getter: - (id)filteredAssetTypes;	// 0x341e8b95
// declared property getter: - (id)item;	// 0x341e8bc9
// declared property getter: - (id)itemOffer;	// 0x341e8bd9
// declared property getter: - (long long)placeholderDownloadIdentifier;	// 0x341e8be9
// declared property getter: - (id)requestProperties;	// 0x341e7dcd
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x341e8b3d
// declared property setter: - (void)setBuyParameters:(id)parameters;	// 0x341e8b71
// converted property setter: - (void)setDownloadMetadata:(id)metadata;	// 0x341e8aed
// declared property setter: - (void)setDownloadProperties:(id)properties;	// 0x341e7e05
// declared property setter: - (void)setFilteredAssetTypes:(id)types;	// 0x341e8ba5
// declared property setter: - (void)setPlaceholderDownloadIdentifier:(long long)identifier;	// 0x341e8c01
// declared property setter: - (void)setRequestProperties:(id)properties;	// 0x341e7e49
- (void)setValue:(id)value forDownloadProperty:(id)downloadProperty;	// 0x341e7e8d
// declared property getter: - (id)uniqueIdentifier;	// 0x341e8ab1
- (id)valueForDownloadProperty:(id)downloadProperty;	// 0x341e7f19
@end

