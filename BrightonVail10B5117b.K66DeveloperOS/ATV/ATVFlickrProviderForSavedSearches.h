/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFlickrProvider.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVFlickrProviderForSavedSearches : ATVFlickrProvider {
	NSMutableArray *_savedSearchCollections;	// 24 = 0x18
}
+ (id)providerOfSavedSearchCollections;	// 0x1b8789
- (id)init;	// 0x1b87c1
- (id)_data;	// 0x1b8b35
- (BOOL)_handlesObject:(id)object;	// 0x1b8b45
- (void)_newSavedSearchToAddCollectionFor:(id)aFor;	// 0x1b8c2d
- (void)_savedSearchTermRemoved:(id)removed;	// 0x1b8d49
- (void)dealloc;	// 0x1b8a19
- (id)hashForDataAtIndex:(long)index;	// 0x1b8ad9
@end

