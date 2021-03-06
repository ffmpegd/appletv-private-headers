/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVMusicStoreBaseAppliance.h"


__attribute__((visibility("hidden")))
@interface TVAppliance : ATVMusicStoreBaseAppliance {
	BOOL _favoritesCategoryEnabled;	// 8 = 0x8
}
+ (void)initialize;	// 0x284921
- (id)initWithApplianceInfo:(id)applianceInfo;	// 0x284a3d
- (void)_favoriteAdded:(id)added;	// 0x285159
- (void)_favoriteRemoved:(id)removed;	// 0x28528d
- (id)_favoritesController;	// 0x2853c1
- (id)applianceController;	// 0x284e11
- (id)applianceSpecificControllerForIdentifier:(id)identifier args:(id)args;	// 0x284d7d
- (void)dealloc;	// 0x284b11
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x284e4d
- (id)loadCategories;	// 0x284b81
- (id)localizedSearchTitle;	// 0x285139
- (int)noContentBRError;	// 0x285149
- (int)noRemoteContentBRError;	// 0x285151
- (BOOL)supportsPurchase;	// 0x284b7d
- (id)topShelfController;	// 0x284dd9
@end

