/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRMenuSavedState : BRSingleton {
	NSMutableDictionary *_cachedMenuState;	// 4 = 0x4
	BOOL _enabled;	// 8 = 0x8
}
@property(assign) BOOL enabled;	// G=0x39e121; S=0x39e131; converted property
+ (void)clearSavedSelectionForOwnerKey:(id)ownerKey;	// 0x39de81
+ (void)saveSelection:(id)selection atIndex:(id)index forOwnerKey:(id)ownerKey;	// 0x39dc45
+ (void)saveSelection:(id)selection atIndex:(id)index forOwnerKey:(id)ownerKey metadata:(id)metadata;	// 0x39dc69
+ (void)saveSelection:(id)selection atIndexPath:(id)indexPath forOwnerKey:(id)ownerKey metadata:(id)metadata;	// 0x39dd75
+ (id)selectionInfoForOwnerKey:(id)ownerKey;	// 0x39dec1
+ (void)setSingleton:(id)singleton;	// 0x39dc35
+ (id)singleton;	// 0x39dc25
- (id)init;	// 0x39def9
- (void)dealloc;	// 0x39df75
// converted property getter: - (BOOL)enabled;	// 0x39e121
- (id)objectForKey:(id)key;	// 0x39e03d
- (void)purge;	// 0x39e0cd
- (void)removeObjectForKey:(id)key;	// 0x39e085
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x39e131
- (void)setObject:(id)object forKey:(id)key;	// 0x39dff1
@end
