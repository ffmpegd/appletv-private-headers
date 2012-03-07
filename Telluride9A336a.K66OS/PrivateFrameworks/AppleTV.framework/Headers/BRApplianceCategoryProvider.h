/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRApplianceCategoryProvider : NSObject <BRProvider> {
@private
	NSArray *_categories;	// 4 = 0x4
}
@property(retain) NSArray *categories;	// G=0x33a745e5; S=0x33a744f9; converted property
// converted property getter: - (id)categories;	// 0x33a745e5
- (long)categoryIndexForIdentifier:(id)identifier;	// 0x33a74669
- (id)controlFactory;	// 0x33a746f1
- (id)dataAtIndex:(long)index;	// 0x33a7472d
- (long)dataCount;	// 0x33a7470d
- (void)dealloc;	// 0x33a744ad
- (long)defaultCategoryIndex;	// 0x33a745f5
- (id)hashForDataAtIndex:(long)index;	// 0x33a7474d
// converted property setter: - (void)setCategories:(id)categories;	// 0x33a744f9
@end

