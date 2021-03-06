/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRMediaCollection.h"

@protocol BRMediaProvider;

__attribute__((visibility("hidden")))
@interface BRBaseMediaCollection : XXUnknownSuperclass <BRMediaCollection> {
	id<BRMediaProvider> _provider;	// 4 = 0x4
}
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x2a6211
- (id)artist;	// 0x2a635d
- (id)artistForSorting;	// 0x2a6361
- (id)assetEnumerator;	// 0x2a632d
- (id)childCollections;	// 0x2a62e9
- (id)collectionID;	// 0x2a630d
- (id)collectionType;	// 0x2a62f1
- (int)count;	// 0x2a6569
- (id)date;	// 0x2a653d
- (void)dealloc;	// 0x2a6265
- (long)duration;	// 0x2a6375
- (unsigned)hash;	// 0x2a62b1
- (id)imageProxy;	// 0x2a6325
- (BOOL)isAvailable;	// 0x2a6491
- (BOOL)isCompilation;	// 0x2a6355
- (BOOL)isHidden;	// 0x2a6535
- (BOOL)isLocal;	// 0x2a648d
- (BOOL)isSingleArtistCompilation;	// 0x2a6359
- (BOOL)isValid;	// 0x2a6311
- (id)mediaAssets;	// 0x2a6329
- (id)mediaObjectID;	// 0x2a6315
- (id)mediaType;	// 0x2a6471
- (id)mediaTypes;	// 0x2a6379
- (id)parentCollection;	// 0x2a62ed
- (void)performSelector:(SEL)selector target:(id)target;	// 0x2a6541
- (void)performSelector:(SEL)selector target:(id)target withObject:(id)object;	// 0x2a6555
- (id)provider;	// 0x2a62d9
- (id)title;	// 0x2a6365
- (id)titleForSorting;	// 0x2a6369
- (id)titleForSortingNoDefault;	// 0x2a6371
- (id)titleNoDefault;	// 0x2a636d
- (void)willBeDeleted;	// 0x2a6539
@end

