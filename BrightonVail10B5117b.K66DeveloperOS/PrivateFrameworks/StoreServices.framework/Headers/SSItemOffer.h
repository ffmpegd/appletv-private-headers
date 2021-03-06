/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class SSNetworkConstraints, NSMutableDictionary, SSItem, SSItemMedia, SSDialog, NSString, NSSet, NSArray;

@interface SSItemOffer : NSObject <NSCopying> {
	SSItem *_item;	// 4 = 0x4
	NSMutableDictionary *_offerDictionary;	// 8 = 0x8
	NSString *_offerIdentifier;	// 12 = 0xc
	NSArray *_supportedDevices;	// 16 = 0x10
}
@property(assign, nonatomic, getter=_offerItem, setter=_setOfferItem:) SSItem *_offerItem;	// G=0x356a895d; S=0x356a896d; @synthesize=_item
@property(readonly, assign, nonatomic) NSSet *accountIdentifiers;	// G=0x356a84a5; 
@property(readonly, assign, nonatomic) NSString *actionDisplayName;	// G=0x356a7af1; 
@property(readonly, assign, nonatomic) NSString *actionType;	// G=0x356a8521; 
@property(readonly, assign, nonatomic) NSString *buyParameters;	// G=0x356a7c21; 
@property(readonly, assign, nonatomic) SSDialog *confirmationDialog;	// G=0x356a7cbd; 
@property(readonly, assign, nonatomic) long long estimatedDiskSpaceNeeded;	// G=0x356a8589; 
@property(readonly, assign, nonatomic) SSNetworkConstraints *networkConstraints;	// G=0x356a7f11; 
@property(readonly, assign, nonatomic) NSString *offerIdentifier;	// G=0x356a894d; @synthesize=_offerIdentifier
@property(readonly, assign, nonatomic) SSItemMedia *offerMedia;	// G=0x356a7fc1; 
@property(readonly, assign, nonatomic, getter=isOneTapOffer) BOOL oneTapOffer;	// G=0x356a7e5d; 
@property(readonly, assign, nonatomic, getter=isPreorder) BOOL preorder;	// G=0x356a7eb9; 
@property(readonly, assign, nonatomic) NSString *priceDisplay;	// G=0x356a812d; 
@property(readonly, assign, nonatomic) id requiredSoftwareCapabilities;	// G=0x356a8619; 
@property(readonly, assign, nonatomic) BOOL shouldShowPlusIcon;	// G=0x356a87f9; 
@property(readonly, assign, nonatomic) SSDialog *successDialog;	// G=0x356a8189; 
@property(readonly, assign, nonatomic) NSArray *supportedDevices;	// G=0x356a81fd; 
+ (id)_preferredOfferIdentifiers;	// 0x356a8851
- (id)init;	// 0x356a78bd
- (id)initWithOfferIdentifier:(id)offerIdentifier dictionary:(id)dictionary;	// 0x356a78d1
// declared property getter: - (id)_offerItem;	// 0x356a895d
// declared property setter: - (void)_setOfferItem:(id)item;	// 0x356a896d
// declared property getter: - (id)accountIdentifiers;	// 0x356a84a5
// declared property getter: - (id)actionDisplayName;	// 0x356a7af1
// declared property getter: - (id)actionType;	// 0x356a8521
- (id)allowedToneStyles;	// 0x356a7b4d
// declared property getter: - (id)buyParameters;	// 0x356a7c21
// declared property getter: - (id)confirmationDialog;	// 0x356a7cbd
- (id)copyWithZone:(NSZone *)zone;	// 0x356a79c1
- (void)dealloc;	// 0x356a7949
- (id)description;	// 0x356a7a61
- (id)documentCannotOpenDialog;	// 0x356a7d31
- (id)documentRequiredHandlers;	// 0x356a7da5
- (id)documentUTI;	// 0x356a7e01
// declared property getter: - (long long)estimatedDiskSpaceNeeded;	// 0x356a8589
// declared property getter: - (BOOL)isOneTapOffer;	// 0x356a7e5d
// declared property getter: - (BOOL)isPreorder;	// 0x356a7eb9
// declared property getter: - (id)networkConstraints;	// 0x356a7f11
// declared property getter: - (id)offerIdentifier;	// 0x356a894d
// declared property getter: - (id)offerMedia;	// 0x356a7fc1
- (id)playableMedia;	// 0x356a811d
// declared property getter: - (id)priceDisplay;	// 0x356a812d
// declared property getter: - (id)requiredSoftwareCapabilities;	// 0x356a8619
- (void)setActionDisplayName:(id)name;	// 0x356a86a1
- (void)setBuyParameters:(id)parameters;	// 0x356a86e9
- (void)setOneTapOffer:(BOOL)offer;	// 0x356a8751
- (void)setPriceDisplay:(id)display;	// 0x356a87b1
// declared property getter: - (BOOL)shouldShowPlusIcon;	// 0x356a87f9
// declared property getter: - (id)successDialog;	// 0x356a8189
// declared property getter: - (id)supportedDevices;	// 0x356a81fd
- (id)valueForProperty:(id)property;	// 0x356a845d
@end

