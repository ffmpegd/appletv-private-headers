/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@protocol BRMediaCollection;

@interface BRMediaCollectionEditor : NSObject {
@private
	id<BRMediaCollection> _collection;	// 4 = 0x4
}
+ (id)editorForCollection:(id)collection;	// 0x35dc8c19
+ (void)setImplementationClass:(Class)aClass;	// 0x35dc8b65
- (id)initWithMediaCollection:(id)mediaCollection;	// 0x35dc8b75
- (void)addMediaObjectToCollection:(id)collection;	// 0x35dc8c65
- (void)clearCollection;	// 0x35dc8c6d
- (id)collection;	// 0x35dc8c71
- (id)collectionCopyWithName:(id)name;	// 0x35dc8c61
- (void)dealloc;	// 0x35dc8bcd
- (void)removeMediaObjectFromCollection:(id)collection;	// 0x35dc8c69
@end
