/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVMusicStoreBaseAppliance.h"


__attribute__((visibility("hidden")))
@interface MOVAppliance : ATVMusicStoreBaseAppliance {
	BOOL _wishlistCategoryEnabled;	// 8 = 0x8
}
+ (void)initialize;	// 0x281491
- (id)initWithApplianceInfo:(id)applianceInfo;	// 0x2815ad
- (void)_favoritesUpdated:(id)updated;	// 0x281d35
- (id)applianceController;	// 0x2819a1
- (id)applianceSpecificControllerForIdentifier:(id)identifier args:(id)args;	// 0x281b15
- (void)dealloc;	// 0x281671
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x2819dd
- (id)loadCategories;	// 0x281709
- (id)localizedSearchTitle;	// 0x281d15
- (int)noContentBRError;	// 0x281d25
- (int)noRemoteContentBRError;	// 0x281d2d
- (BOOL)supportsPurchase;	// 0x281701
- (BOOL)supportsRental;	// 0x281705
- (id)topShelfController;	// 0x281969
@end

