/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRAppliance.h"
#import <NSObject.h> // Unknown library

@class NSArray;

@interface BRBaseAppliance : NSObject <BRAppliance> {
@private
	NSArray *_categories;	// 4 = 0x4
}
- (id)init;	// 0x3419b421
- (BOOL)_anySharesAvailable;	// 0x3419c225
- (BOOL)_anyStoreCategoryExistsInMusicStoreCollection:(id)musicStoreCollection;	// 0x3419c2b9
- (id)_applianceCategories;	// 0x3419bbd5
- (BOOL)_isCategoryWithIdentifier:(id)identifier memberOfMusicStoreCollection:(id)musicStoreCollection;	// 0x3419c199
- (id)accessibilityLabel;	// 0x3419bb09
- (id)alertControllerForNoContent;	// 0x3419ba35
- (id)alertControllerForNoRemoteContent;	// 0x3419ba95
- (id)applianceCategories;	// 0x3419b7c1
- (id)applianceCategoryDescriptions;	// 0x3419bb41
- (id)applianceInfo;	// 0x3419b769
- (id)baseMediaType;	// 0x3419b659
- (id)categoryWithIdentifier:(id)identifier;	// 0x3419b99d
- (id)controllerForIdentifier:(id)identifier args:(id)args;	// 0x3419b8ad
- (void)dealloc;	// 0x3419b55d
- (id)description;	// 0x3419b5d9
- (BOOL)handleObjectSelection:(id)selection userInfo:(id)info;	// 0x3419b8b1
- (BOOL)handlePlay:(id)play userInfo:(id)info;	// 0x3419b8b5
- (id)identifierForContentAlias:(id)contentAlias;	// 0x3419b8a9
- (id)musicStoreItemWithIdentifier:(id)identifier;	// 0x3419b8b9
- (int)noContentBRError;	// 0x3419ba8d
- (int)noRemoteContentBRError;	// 0x3419baed
- (BOOL)previewError;	// 0x3419baf5
- (id)previewErrorIconImage;	// 0x3419bb01
- (id)previewErrorSubtext;	// 0x3419bafd
- (id)previewErrorText;	// 0x3419baf9
- (void)reloadCategories;	// 0x3419bb69
- (id)topShelfController;	// 0x3419bb05
@end

