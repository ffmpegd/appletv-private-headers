/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol BRMediaCollection;

__attribute__((visibility("hidden")))
@interface BRMediaCollectionEditor : XXUnknownSuperclass {
	id<BRMediaCollection> _collection;	// 4 = 0x4
}
+ (id)editorForCollection:(id)collection;	// 0x2ab9e1
+ (void)setImplementationClass:(Class)aClass;	// 0x2ab92d
- (id)initWithMediaCollection:(id)mediaCollection;	// 0x2ab93d
- (void)addMediaObjectToCollection:(id)collection;	// 0x2aba2d
- (void)clearCollection;	// 0x2aba35
- (id)collection;	// 0x2aba39
- (id)collectionCopyWithName:(id)name;	// 0x2aba29
- (void)dealloc;	// 0x2ab995
- (void)removeMediaObjectFromCollection:(id)collection;	// 0x2aba31
@end
