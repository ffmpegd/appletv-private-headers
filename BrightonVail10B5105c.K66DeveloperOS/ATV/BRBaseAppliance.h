/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRAppliance.h"

@class BRApplianceInfo, NSArray;

__attribute__((visibility("hidden")))
@interface BRBaseAppliance : XXUnknownSuperclass <BRAppliance> {
	NSArray *_categories;	// 4 = 0x4
	long _categoriesLazyInitializationGuard;	// 8 = 0x8
	BRApplianceInfo *_applianceInfo;	// 12 = 0xc
}
@property(retain) BRApplianceInfo *applianceInfo;	// G=0x28990d; S=0x289921; @synthesize=_applianceInfo
@property(readonly, assign, nonatomic) BOOL supportsPurchase;	// G=0x289441; 
@property(readonly, assign, nonatomic) BOOL supportsRental;	// G=0x289445; 
- (id)init;	// 0x2891c5
- (id)initWithApplianceInfo:(id)applianceInfo;	// 0x2891c9
- (BOOL)_anyStoreCategoryExistsInMusicStoreCollection:(id)musicStoreCollection;	// 0x28a0e9
- (id)_applianceCategories;	// 0x289a41
- (BOOL)_isCategory:(id)category memberOfMusicStoreCollection:(id)musicStoreCollection;	// 0x289fed
- (id)accessibilityLabel;	// 0x2898d5
- (id)alertControllerForNoContent;	// 0x289801
- (id)alertControllerForNoRemoteContent;	// 0x289861
- (id)applianceCategories;	// 0x289591
- (id)applianceCategoryDescriptions;	// 0x289931
- (id)applianceController;	// 0x28967d
// declared property getter: - (id)applianceInfo;	// 0x28990d
- (id)baseMediaType;	// 0x289449
- (id)categoryWithIdentifier:(id)identifier;	// 0x289769
- (id)controllerForIdentifier:(id)identifier args:(id)args;	// 0x289679
- (void)dealloc;	// 0x28928d
- (id)description;	// 0x2893c1
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x289681
- (unsigned)hash;	// 0x289399
- (id)identifierForContentAlias:(id)contentAlias;	// 0x289675
- (BOOL)isEqual:(id)equal;	// 0x289321
- (id)loadCategories;	// 0x289959
- (id)musicStoreItemWithIdentifier:(id)identifier;	// 0x289685
- (int)noContentBRError;	// 0x289859
- (int)noRemoteContentBRError;	// 0x2898b9
- (BOOL)previewError;	// 0x2898c1
- (id)previewErrorIconImage;	// 0x2898cd
- (id)previewErrorSubtext;	// 0x2898c9
- (id)previewErrorText;	// 0x2898c5
- (void)reloadCategories;	// 0x289969
// declared property setter: - (void)setApplianceInfo:(id)info;	// 0x289921
// declared property getter: - (BOOL)supportsPurchase;	// 0x289441
// declared property getter: - (BOOL)supportsRental;	// 0x289445
- (id)topShelfController;	// 0x2898d1
@end

